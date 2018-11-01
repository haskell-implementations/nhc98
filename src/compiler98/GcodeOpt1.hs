module GcodeOpt1(gcodeOpt1) where

import Gcode
import GcodeLow(gcodeStack,primStack)
import AssocTree
import Util.Extra
import IntState
import Prim
import Maybe

gcodeOpt1 state gcode = (fixOne state gcode,state)

fixOne state [] = []
fixOne state (g@(STARTFUN pos fun):gs) =
  let arity = arityIS state (toEnum fun)
  in case gOpt initAT (OptDown (arity+1) (map (`pair` False) [1 .. arity]) []) gs of
       OptUp at gs -> g:gs
fixOne state (g:gs) =
  g : fixOne state gs 

data OptDown =
    OptDown Int [(Int,Bool)] [(Int,Bool)] deriving (Show)


data OptUp =
    OptUp
	(AssocTree Int (Int,Maybe Gcode)) -- Mapping from label to (new destiny,code at destiny)
	[Gcode]			-- Fixed gcode

updST st (OptDown _ eargs estack) = OptDown st eargs estack

getST (OptDown st eargs estack) = st

bothOf (OptDown st eargs estack) (OptDown st' eargs' estack') = OptDown st (zipWith both eargs eargs') (zipWith both estack estack')
  where both (u,e) (u',e') = (u,e && e')

pushNews :: Int -> OptDown -> OptDown
pushNews i (OptDown st eargs estack)         = OptDown (st+i) eargs (map (`pair`False) [st .. st+i-1] ++ estack)
pushNew :: Bool -> OptDown -> OptDown
pushNew    e down@(OptDown st eargs estack)  = OptDown (st+1) eargs ((st,e):estack)
pushArg :: Int -> OptDown -> OptDown
pushArg  i (OptDown st eargs estack)         = OptDown st     eargs ((eargs !! (i-1)) : estack)
push :: Int -> OptDown -> OptDown
push     i (OptDown st eargs estack)         = OptDown st     eargs ((estack !! i) : estack)
pop :: Int -> OptDown -> OptDown
pop      i (OptDown st eargs estack)         = OptDown st     eargs (drop i estack)
slide :: Int -> OptDown -> OptDown
slide    i (OptDown st eargs (tos:estack))   = OptDown st     eargs (tos:drop i estack)
unpack :: Int -> OptDown -> OptDown
unpack   i (OptDown st eargs (_:estack))     = OptDown (st+i) eargs (map (`pair`False) [st .. st+i-1] ++ estack)
eval :: OptDown -> OptDown
eval       (OptDown st eargs ((u,_):estack)) = OptDown st     (map (update u) eargs) ((u,True) : map (update u) estack)
	where update u (u',e') = (u', e' || u == u')
eval       (OptDown st eargs ([])) = error "eval "

qEval down@(OptDown st eargs ((_,e):estack)) = e

addDown at label inline value = addAT at comb label (inline,value)
 			 where comb (inline,evals@(OptDown st eargs estack)) (inline',evals'@(OptDown st' eargs' estack')) =
				  (if length estack /= length estack' then strace ("Different depths for " ++ show label) else id) $
				  (inline && inline',bothOf evals evals')

addUp at label value = addAT at (sndOf . strace ("redefinition of " ++ show label)) label value


maybeG (RETURN:_)       = Just RETURN
maybeG (RETURN_EVAL:_)  = Just RETURN_EVAL
maybeG _                = Nothing


justG e  jg (Just RETURN_EVAL) gs = (if e then RETURN else RETURN_EVAL) : gs
justG e  jg (Just g)           gs =  g : gs
justG e  jg Nothing            gs = jg : gs

gOpt0 :: (AssocTree Int (Bool,OptDown)) -> Int -> [Gcode] -> OptUp 
gOpt0 at st [] =  OptUp initAT []
gOpt0 at st (g@(ALIGN_CONST):gs) =  OptUp initAT (g:gs) -- only data declarations  
gOpt0 at st (g@(LABEL i):gs) = 
  case lookupAT at i of
    Nothing -> -- Unused label
       gOpt0 at st gs
    Just (inline,evals) ->
      case (skipGs gs) of
	(JUMP j:gs)     -> case gOpt0 (addDown at j inline evals) st gs of
			     OptUp at gs ->
			       case lookupAT at j of
				Just value -> OptUp (addUp at i value) gs
			  	Nothing -> error ("LABEL JUMP (in gOpt0) couldn't find " ++ show j)
 	_               -> gOpt at (updST st evals) (g:gs)  -- Simplest to use code for the fall through case in gOpt
gOpt0 at st (g:gs) =
  gOpt0 at st gs 

skipGs (POP 0:gs) = skipGs gs
skipGs (SLIDE 0:gs) = skipGs gs
skipGs gs = gs

endGs (LABEL i:gs)     = endGs gs
endGs (SLIDE i:gs)     = endGs gs
endGs (RETURN:gs)      = Just RETURN
endGs (RETURN_EVAL:gs) = Just RETURN_EVAL
endGs gs               = Nothing


next  at evals g gs = case gOpt at evals gs of OptUp at gs -> OptUp at (g:gs)
next0 at evals g gs = case gOpt0 at (getST evals) gs of OptUp at gs -> OptUp at (g:gs)

gOpt :: (AssocTree Int (Bool,OptDown)) -> OptDown -> [Gcode] -> OptUp 

-- Detect end of code
gOpt at evals [] = OptUp initAT []
gOpt at evals (g@(ALIGN_CONST):gs) = OptUp initAT (g:gs)

-- First some easy peep hole optimisations

{---------- DAVID ---------
gOpt at evals (MATCHCON : JUMPS_T : JUMPTABLE l : LABEL l' : gs) = gOpt at evals gs -- Must be pattern match on type with only one constructor
 ---------- DAVID --------- -}
gOpt at evals (TABLESWITCH 1 _ [_] : LABEL _ : gs) = gOpt at evals gs -- DAVID
gOpt at evals (SLIDE   0:gs) = gOpt at evals gs
gOpt at evals (SLIDE   i:SLIDE j:gs) = gOpt at evals (SLIDE (i+j):gs)
gOpt at evals (SLIDE   i:g@RETURN:gs) = gOpt at evals (g:gs)
gOpt at evals (SLIDE   i:g@RETURN_EVAL:gs) = gOpt at evals (g:gs)
gOpt at evals (g@(SLIDE   i):gs) =
  case gOpt at (slide i evals) gs of
    OptUp upat gs -> OptUp upat (justG (qEval evals) g (endGs gs) gs)

--gOpt at evals (NEEDHEAP i:NEEDSTACK j:gs) = gOpt at evals (NEEDHEAP (i+j):gs) -- MW

gOpt at evals (POP   0:gs) = gOpt at evals gs
gOpt at evals (POP   i:POP j:gs) = gOpt at evals (POP (i+j):gs)
gOpt at evals (g@(POP   i):gs) = next at (pop i evals) g gs 

gOpt at evals (UNPACK 0:gs) = gOpt at evals (POP 1:gs)
gOpt at evals (g@(UNPACK i):gs) = next at (unpack i evals) g gs

-- Skip unnecessary evals

gOpt at evals (g@RETURN:gs)      = next0 at evals g gs
gOpt at evals (g@RETURN_EVAL:gs) =
  if qEval evals then   next0 at evals RETURN gs
  else			next0 at evals g gs

gOpt at evals (g@EVAL:gs) =
  if qEval evals then	gOpt at evals gs
  else			next at (eval evals) g gs

gOpt at evals (g@EVALUATED:gs) =  -- GcodeFix guarantee that tos is evaluated, so update our evals-info.
  gOpt at (eval evals) gs

--     this eval is always necessary

gOpt at evals (g@SELECTOR_EVAL:gs) =  next at (eval (pushArg 1 evals)) g gs

--  Keep track of jumps



gOpt at evals (g@(LABEL i):gs) = -- fall through label
  case lookupAT at i of
    Nothing -> -- unused label, but fall through so skip only the label
       gOpt at evals gs
    Just (inline',evals') ->
      case gOpt at (bothOf evals evals') gs of
        OptUp at gs ->
	 case gs of 
	   JUMP j:_ ->
	     case lookupAT at j of
	       Just value -> OptUp (addUp at i value) gs  -- short cut jump
	       Nothing -> error ("gOpt LABEL JUMP can not find " ++ show j)
	   gs | inline' && isJust (maybeG gs) ->  OptUp (addUp at i (i,maybeG gs)) gs  -- remove label, inline everywhere
	   _        ->  OptUp (addUp at i (i,maybeG gs)) (g:gs)

gOpt at evals (g@(JUMP i):gs) = 
  case gOpt0 (addDown at i True evals) (getST evals) gs of
    OptUp upat gs ->
      case lookupAT upat i of
	Just (i',mg) -> OptUp upat (justG (qEval evals) (JUMP i') mg gs)
	Nothing -> error ("gOpt JUMP couldn't find " ++ show i)

gOpt at evals (g@(JUMPFALSE i):gs) = 	-- DAVID
  let evals' = pop 1 evals
  in case gOpt (addDown at i False evals') evals' gs of
      OptUp at gs ->
        case lookupAT at i of
	  Just (i',_) -> OptUp at (JUMPFALSE i':gs)	-- DAVID
	  Nothing -> error ("gOpt JUMPFALSE couldn't find " ++ show i)


gOpt at evals (TABLESWITCH size pad ls:gs) =		-- DAVID
    let nat = foldr (\l tr -> addDown tr l False evals) at ls in
    case gOpt0 nat (getST evals) gs of
      OptUp at gs ->
        OptUp at (TABLESWITCH size pad (map (gLab at) ls):gs)
        where
	  gLab at l = 
            case lookupAT at l of
      	      Just (l',_) -> l'
      	      Nothing     -> error ("gOpt TABLESWITCH couldn't find " ++ show l)


gOpt at evals (LOOKUPSWITCH size pad tls def:gs) =	-- DAVID
    let (tgs,ls) = unzip tls in
    let xls      = def : ls  in
    let nat      = foldr (\l tr -> addDown tr l False evals) at xls in
    case gOpt0 nat (getST evals) gs of
      OptUp at gs ->
        OptUp at (LOOKUPSWITCH size pad (zip tgs (map (gLab at) ls)) 
                                        (gLab at def):gs)
        where
	  gLab at l = 
            case lookupAT at l of
      	      Just (l',_) -> l'
      	      Nothing     -> error ("gOpt LOOKUPSWITCH couldn't find " ++ show l)


{--------- DAVID ------------
gOpt at evals (gj@JUMPS_T:gs)  =
  gOpt' at [] gs
 where
  gOpt' at ls (g@(JUMPTABLE l):gs) = gOpt' (addDown at l False evals) (g:ls) gs 
  gOpt' at ls gs =
    case gOpt0 at (getST evals) gs of
      OptUp at gs ->
        gOpt'' at gs ls

  gOpt'' at gs []  = OptUp at (gj:gs)
  gOpt'' at gs (JUMPTABLE l:ls) =
    case lookupAT at l of
      Just (l',_) -> gOpt'' at (JUMPTABLE l':gs) ls
      Nothing -> error ("gOpt JUMPS_T couldn't find " ++ show l)

gOpt at evals (gj@JUMPS_L:(JUMPLENGTH s gll):gs)  =
  gOpt' (addDown at gll False evals) [] gs
 where
  gOpt' at ls (g@(JUMPLIST v l):gs) = gOpt' (addDown at l False evals) (g:ls) gs 
  gOpt' at ls gs =
    case gOpt0 at (getST evals) gs of
      OptUp at gs ->
        case lookupAT at gll of
	  Just (gll',_) -> gOpt'' (JUMPLENGTH s gll') at gs ls
          Nothing -> error ("gOpt JUMPS_L (1) couldn't find " ++ show gll)

  gOpt'' gl at gs []  = OptUp at (gj:gl:gs) 
  gOpt'' gl at gs (JUMPLIST v l:ls) =
    case lookupAT at l of
      Just (l',_) -> gOpt'' gl at (JUMPLIST v l':gs) ls 
      Nothing -> error ("JUMPS_L (2) couldn't find " ++ show l)
---------- DAVID ---------- -}

-- misc stack manipulating instructions

gOpt at evals (g@PRIMITIVE:gs)    = next at (pushNew False evals) g gs
gOpt at evals (g@(PUSH_ARG i):gs) = next at (pushArg i evals) g gs
gOpt at evals (g@(PUSH i):gs)     = next at (push i evals) g gs
gOpt at evals (g@(SELECT i):gs) = next at (pushNew False (pop 1 evals)) g gs
gOpt at evals (g@(APPLY i):gs) =  next at (pushNew False (pop (i+1) evals)) g gs

-- Instructions  that push evaluated things onto the stack
gOpt at evals (g@(PUSH_INT i):gs)     = next at (pushNew True evals) g gs
gOpt at evals (g@(PUSH_CHAR i):gs)    = next at (pushNew True evals) g gs
gOpt at evals (g@(PUSH_INTEGER i):gs) = next at (pushNew True evals) g gs
gOpt at evals (g@(PUSH_FLOAT i):gs)   = next at (pushNew True evals) g gs
gOpt at evals (g@(PUSH_DOUBLE i):gs)  = next at (pushNew True evals) g gs

-- Inbuilt primitive that returns unevaluated value
gOpt at evals (g@(PRIM SEQ):gs) = next at (pop 1 evals) g gs

-- Inbuilt primitivs that returns evaluated value
gOpt at evals (g@(PRIM prim):gs) = 
  case primStack prim of
    id ->
      if id <= 0 then next at (eval (pop (-id) evals)) g gs
      else error ("gOpt at: primitive that increases the stack!" ++ strPrim prim)

--  Everything else, if it push assume unevaluated
gOpt at evals (g:gs) = 
  case gcodeStack g of
    to_push ->
      if to_push <= 0 then next at (pop (-to_push) evals) g gs
      else                 next at (pushNews to_push evals) g gs


