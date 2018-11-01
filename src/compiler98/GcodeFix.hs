module GcodeFix(gcodeFixInit,gcodeFix,gcodeFixFinish) where

import Gcode
import IntState(uniqueIS,lookupIS,globalIS,arityIS,miIS)
import Memo
import AssocTree
import TokenId (TokenId(..))
import State
import Info hiding (TokenId)
import Util.Extra
import GcodeLow(cap0,caf,fun,string,profstatic,profproducer,profconstructor,profmodule,tprofmodule,tprofmodulesub,consttable,lowInteger,extra,wsize,align)
import GcodeSpec(fixProfstatic,compilerProfstatic)
import Flags
import Maybe

data Down = Down 

data Thread = Thread 
       IntState  -- state  
       Bool -- prof 
       (AssocTree (Int,Int) Int) -- profstatics
       ((AssocTree String Int),[(Int,Gcode)]) -- strings, extralabels
       Bool  -- live
       (Memo Int)  -- used labels
       Int [Gcode] -- before 
       Int [Gcode] -- after

type FixState = (AssocTree (Int,Int) Int, (AssocTree String Int, [(Int,Gcode)]))

gcodeFixInit :: IntState -> Flags -> (IntState,(AssocTree a b,(AssocTree [Char] Int,[(Int,Gcode)])))

gcodeFixInit state flags =
  case uniqueIS state of
    (mlabel,state) ->
      let fn = fromEnum (miIS state)
          name = (show . profI . fromJust . lookupIS state . toEnum) fn
      in if sProfile flags || sFunNames flags || sTprof flags then
           if sPart flags then
             (state,(initAT,(initAT,[(fromEnum mlabel,GLOBAL profmodule fn)])))
	   else 
	     (state,(initAT,(addAT initAT sndOf name (fromEnum mlabel),[(fromEnum mlabel,GLOBAL profmodule fn)])))
         else
	   (state,(initAT,(initAT,[])))



gcodeFix flags state (profstate,stringstate) gcode =
  let prof  = sProfile flags
      tprof = sTprof flags
      funnames = prof || tprof || sFunNames flags
      thread = (tprof,funnames,prof,state,profstate,stringstate)
  in case {- mapS -} fixOne gcode () thread of
       (gcode,(prof,state,profstate,stringstate)) ->
   	 (state,(profstate,stringstate),gcode)

gcodeFixFinish state (profstate,(strings,elabels)) =
   [concatMap (fixProfstatic state) (listAT profstate)] ++ [concatMap (fixString elabels) (listAT strings)]


{---------------- DAVID ------------------- -}
escNul [] = []
escNul ('\\':xs) = '\\':'\\': escNul xs
escNul ('\0':xs) = '\\':'\0': escNul xs
escNul (x:xs) = x : escNul xs
{---------------- DAVID ------------------- -}

fixString elabels (s,i) = (map snd . filter ((i==).fst)) elabels ++ [LOCAL string i, DATA_S s]

fixOne [] _ (tprof,funnames,prof,state,profstatics,strings) =
    ([],(prof,state,profstatics,strings))
fixOne (g@(STARTFUN pos fn):gs) _ (tprof,funnames,prof,state,profstatics,strings) =
  let a = arityIS state (toEnum fn)
      thread = Thread state prof profstatics strings True initM 
                      (if funnames then -2 else 0) []   -- if funnames | profile then Position at -2 and Name at -1
                      (2+if prof then extra else 0) []  --  size/arity at 0, link at 1, CAF/CAP0 at 2
      label = if globalIS state (toEnum fn) then GLOBAL else LOCAL

      info = (fromJust . lookupIS state . toEnum) fn
      name = show (profI info)
  in                                          -- Maybe use some other producer 
    case (unitS triple =>>> (if prof then addStatic fn fn else unitS 0)
		       =>>> (if funnames then 
		                addString name  (if prof then [label profproducer fn,label profconstructor fn] else [])
                             else
                                unitS undefined)
		       =>>> mapS gFix gs) (Down ) thread of
      ((plabel,slabel,gs),Thread state _ profstatics strings _ _ nbs bs nas as) ->
          case uniqueIS state of
            (clabel,state) ->
              (capTable a ++
	       DATA_GLB consttable (fromEnum clabel) :
	       label fun fn :
               (if tprof then tpgcode info state else []) ++
               g:concat gs  ++
	       ALIGN_CONST:
	       (case align 8 (-nbs * wsize) of
                    0 -> []
                    f -> take (f `div` wsize) (repeat (DATA_W 0))
               ) ++
	       bs ++
	       (if funnames then [DATA_W pos,DATA_GLB string slabel] else []) ++
	       LOCAL consttable (fromEnum clabel) :
	       DATA_CONSTHEADER (length as) a:		-- number of pointers and arity
	       DATA_W  0:			-- link for gc
	       (if a == 0 then [label caf fn, DATA_VAP fn] else [label cap0 fn, DATA_CAP fn a]) ++
	       compilerProfstatic prof state plabel ++
	       reverse as
	      ,(prof,state,profstatics,strings))

--PHtprof
tpgcode :: Info -> IntState -> [Gcode]
tpgcode info state = let mod = fromEnum (miIS state)
                         sub = case info of
                               (InfoName _ _ _ _ True) -> tprofmodulesub
                               otherwise               -> tprofmodule
                     in [DATA_GLB sub mod]

capTable a = 
  let fill = align wsize (2 * a + 2) `div` 2
		-- one extra table item compared to arity
  in take fill (repeat (DATA_CAPITEM 0 0)) ++ cT a a
 where
  cT a n =
    if n>=0 then
      DATA_CAPITEM (a-n) n : cT a (n-1)
    else
      []


gUnique down thread@(Thread state prof profstatics strings live
                            labels nbs bs nas as) =
  case uniqueIS state of
    (u,state) -> (u,Thread state prof profstatics strings live
                           labels nbs bs nas as)

gState down thread@(Thread state prof profstatics strings live
                           labels nbs bs nas as) =
  (state,thread)

gInfo i down thread@(Thread state prof profstatics strings live
                            labels nbs bs nas as) =
  (lookupIS state i,thread)

useLabel i down thread@(Thread state prof profstatics strings live
                               labels nbs bs nas as) = 
  Thread state prof profstatics strings live (addM labels i) nbs bs nas as

ifLive f down thread@(Thread state prof profstatics strings live
                             labels nbs bs nas as) = 
  if live then
    f down thread
  else 
    ([],thread)

emits g down thread@(Thread state prof profstatics strings live
                            labels nbs bs nas as) =
  (g, thread)

emit g = emits [g]

conInfo i down thread@(Thread state prof profstatics strings live
                              labels nbs bs nas as) = 
  case lookupIS state i of
    Just (InfoName u (TupleId a) t _ _) -> ((a,0),thread)
	-- !!! NR the only constructors that can use InfoName is tuples !!!
	--PHtprof
    Just cinfo@(InfoConstr _ _ _ _ _ _ idata) ->
      case lookupIS state idata of
	Just info  ->
	    ((arityI cinfo,nthcon 0 i (constrsI info)),thread)
 where
  nthcon n con (c:cs) = if con == c then n else nthcon (n+1) con cs
  nthcon n con [] =
      error ("GcodeFix.nthcon: (n=="++show n++") (con=="++show con++") []\n")



addString str els down thread@(Thread state prof profstatics (strings,elabels) live labels nbs bs nas as) = 
  case lookupAT strings str of
    Just l -> if null els then (l,thread)
	      else (l,Thread state prof profstatics (strings,map (pair l) els ++ elabels) live labels nbs bs nas as)
    Nothing ->
      case uniqueIS state of
        (l,state) -> (fromEnum l,Thread state prof profstatics (addAT strings sndOf str (fromEnum l),map (pair (fromEnum l)) els ++ elabels) live labels nbs bs nas as)

addStatic p c down thread@(Thread state prof profstatics strings live labels nbs bs nas as) = 
  case lookupAT profstatics (p,c) of
    Just l -> (l,thread)
    Nothing ->
      case uniqueIS state of
        (l,state) -> (fromEnum l,Thread state prof (addAT profstatics sndOf (p,c) (fromEnum l)) strings live labels nbs bs nas as)

addDouble gs down thread = addBefore' True gs down thread

addBefore gs down thread = addBefore' False gs down thread

addBefore' align8 gs' down thread@(Thread state prof profstatics strings live labels nbs bs nas as) = 
  case search gs nbs bs of
    Just nbs' -> (nbs',thread)
    Nothing ->
      let (nbs',bs') = if align8 then 
                         let fill = align 8 (wsize * (-nbs)) `div` wsize
			 in (nbs-fill,take fill (repeat (DATA_W 0))++bs)
		       else
			 (nbs,bs)
          nbs'' = nbs' - length gs
      in (nbs'',Thread state prof profstatics strings live labels nbs'' (gs++bs') nas as)
 where
        -- We need module, producer (compiler?), and constructor !!!
  gs = if prof then head gs' : DATA_W 0 :  DATA_CREATE : DATA_W 0 : DATA_W 0 : tail gs' else gs'

  eqInit [] _ = True 
  eqInit (a:as) (b:bs) = a == b && eqInit as bs

  search gs nbs [] = Nothing
  search gs nbs bbs@(b:bs) =
	if eqInit gs bbs then Just nbs
	else let nbs1 = nbs+1
             in seq nbs1 (search gs nbs1 bs)


addAfter g down thread@(Thread state prof profstatics strings live labels nbs bs nas as) = 
  case search g nas as of
    Just nas' -> (nas',thread)
    Nothing ->
      let nas' = nas + 1
      in (nas',Thread state prof profstatics strings live labels nbs bs nas' (g:as))
 where
  search g nas [] = Nothing
  search g nas (a:as) =
	if g == a then Just nas
	else let nas1 = nas-1
             in seq nas1 (search g nas1 as)


gFix g@(NEEDHEAP i) = ifLive (emit g)
gFix g@(NEEDSTACK i) = ifLive (emit g)
gFix g@(LABEL i) = ifLive (emit g)
gFix g@(JUMP  i) = ifLive (useLabel i >>> emit g)
gFix g@(JUMPFALSE i) = ifLive (useLabel i >>> emit g)	-- DAVID

-- If this case isn't full, then defpop must be Just (def,pop) or we have an internal error
gFix g@(CASE alts defpop) = ifLive $
  mapS0 (useLabel.snd) alts >>>
  gUnique >>>= \ poplabel ->
  case alts of
    ((GALT_CON c,_):_) ->
      gInfo (toEnum c) >>>= \ coninfo ->
      gInfo ((belongstoI . fromJust) coninfo) >>>= \ typeinfo ->
      let constrs = (constrsI . fromJust)  typeinfo
          matched = map dropGALT alts
	  usedef = length constrs /= length matched 
          (def,pop) = fromJust defpop
          ls      = map (fromEnum . reorder poplabel matched . fromEnum)
                        constrs -- DAVID
      in
      (if usedef then useLabel def else unitS0) >>>	-- DAVID
            emits (TABLESWITCH (length ls) 0 ls :	-- DAVID
             (if usedef then				-- DAVID
                  [LABEL (fromEnum poplabel), POP pop, JUMP def]	-- DAVID
             else					-- DAVID
                  [])					-- DAVID
            )						-- DAVID
{-------------------- DAVID ---------------
      (if usedef then useLabel def else	unitS0) >>>
      emits (MATCHCON : JUMPS_T :  (map (JUMPTABLE . reorder poplabel matched) constrs) ++
	     (if usedef then
	      [LABEL poplabel, POP pop, JUMP def]
	     else
	      []
             )
	    )
 ----------- DAVID -------------------------- -}

    ((GALT_INT _,_):_) ->
      let (def,pop) = fromJust defpop -- Never all contructors when matching ints
          tls       = map dropGALT alts in
        emits (LOOKUPSWITCH (length tls) 0 tls (fromEnum poplabel) :

{------------ DAVID -------------------------
      emits (MATCHINT : JUMPS_L : JUMPLENGTH (length alts) poplabel : map ( \ (GALT_INT i,l) -> JUMPLIST i l) alts ++
 ------------- DAVID -------------------- --}
	     [LABEL (fromEnum poplabel), POP pop, JUMP def]
	    )
 where

  dropGALT (GALT_CON c,l) = (c, toEnum l)
  dropGALT (GALT_INT i,l) = (i, toEnum l)

  reorder d ms c =
    case lookup c ms of
      Nothing -> d
      Just l -> l

gFix g@(PRIMITIVE) = ifLive (emit g)
gFix g@(DATA_CREATE) = ifLive (emit g)
gFix g@(DATA_GLB string label) = ifLive (emit g)
gFix g@(DATA_CLABEL label) = ifLive (emit g)
gFix g@(DATA_FLABEL label) = ifLive (emit g)
gFix g@(MKIORETURN) = ifLive (emit g)

gFix g@(PRIM prim) = ifLive (emit g)

-- Stack
gFix g@(PUSH_INT  i) =  ifLive $ 
  if i >= -10 && i < 256 then
    emit g
  else
    addBefore [DATA_CONW 1 0,DATA_W i] >>>= \ i ->
    emits [PUSH_CADR i, EVALUATED]
gFix g@(PUSH_CHAR  i) =  ifLive $ 
  if i >= -10 && i < 256 then
    emit g
  else
    addBefore [DATA_CONW 1 0,DATA_W i] >>>= \ i ->
    emits [PUSH_CADR i, EVALUATED]
gFix g@(PUSH_INTEGER  i) = ifLive $
    addBefore (lowInteger i) >>>= \ i ->
    emits [PUSH_CADR i, EVALUATED]
gFix g@(PUSH_FLOAT f) = ifLive $
    addBefore [DATA_CONW 1 0,DATA_F f] >>>= \ i ->
    emits [PUSH_CADR i, EVALUATED]
gFix g@(PUSH_DOUBLE d) = ifLive $
    addDouble [DATA_CONW 2 0,DATA_D d,DATA_NOP] >>>= \ i ->
    emits [PUSH_CADR i, EVALUATED]
gFix g@(PUSH_STRING  s) = ifLive $
    addString (escNul s) [] >>>= \ label ->
    addBefore [DATA_CONW 1 0,DATA_GLB string label] >>>= \ i ->
    emits [PUSH_CADR i, EVALUATED]
gFix g@(PUSH_ARG  i) = ifLive (emit g)
gFix g@(PUSH_ZAP_ARG  i) = ifLive (emit g)
gFix g@(PUSH      i) = ifLive (emit g)
gFix g@(PUSH_HEAP  ) = ifLive (emit g)
gFix g@(PUSH_GLB s i) = ifLive $
    addAfter (DATA_GLB s i) >>>= \ i ->
    emit (PUSH_CVAL i)

gFix g@(POP       i) = ifLive (emit g)
gFix g@(SLIDE     i) = ifLive (emit g)
gFix g@(UNPACK    i) = ifLive (emit g)

-- selector
gFix g@(SELECTOR_EVAL) = ifLive (emit g)
gFix g@(SELECT   i) = ifLive (emit g)

-- evaluation
gFix g@(APPLY   i) = ifLive (emit g)
gFix g@(EVAL) = ifLive (emit g)

gFix g@(RETURN) = ifLive (emit g)
gFix g@(RETURN_EVAL) = ifLive (emit g)

-- Heap
gFix g@(HEAP_INT  i) =   ifLive $ 
  if i >= -10 && i < 256 then
    emit g
  else
    addBefore [DATA_CONW 1 0,DATA_W i] >>>= \ i ->
    emit (HEAP_CADR i)
gFix g@(HEAP_CHAR  i) =   ifLive $ 
  if i >= -1 && i < 256 then
    emit g
  else
    addBefore [DATA_CONW 1 0,DATA_W i] >>>= \ i ->
    emit (HEAP_CADR i)
gFix g@(HEAP_INTEGER  i) = ifLive $
    addBefore (lowInteger i) >>>= \ i ->
    emit (HEAP_CADR i)    
gFix g@(HEAP_FLOAT f) =  ifLive $
    addBefore [DATA_CONW 1 0,DATA_F f] >>>= \ i ->
    emit (HEAP_CADR i)
gFix g@(HEAP_DOUBLE d) =  ifLive $
    addDouble [DATA_CONW 2 0,DATA_D d,DATA_NOP] >>>= \ i ->
    emit (HEAP_CADR i)
gFix g@(HEAP_STRING s) =  ifLive $
    addString s [] >>>= \ label ->
    addBefore [DATA_GLB string label] >>>= \ i ->
    emit (HEAP_CVAL i)
gFix g@(HEAP_ARG  i) = ifLive (emit g)
gFix g@(HEAP_ARG_ARG i j) = ifLive (emit g)
gFix g@(HEAP_ARG_ARG_RET_EVAL i j) = ifLive (emit g)
gFix g@(HEAP      i) = ifLive (emit g)
gFix g@(HEAP_GLB s i) = ifLive $
    addAfter (DATA_GLB s i) >>>= \ i ->
    emit (HEAP_CVAL i)
gFix g@(HEAP_VAP  i) = ifLive $
    addAfter (DATA_VAP i) >>>= \ i ->
    emits [HEAP_CVAL i]
gFix g@(HEAP_CON  i) = ifLive $
    conInfo (toEnum i) >>>= \ (s,c) ->
    addBefore [DATA_CON s c] >>>= \ i ->
    emits [HEAP_CVAL i]
gFix g@(HEAP_CAP  i a) = ifLive $
    addAfter (DATA_CAP i a) >>>= \ i ->
    emits [HEAP_CVAL i] 
gFix g@(HEAP_OFF  i) = ifLive (emit g)
gFix g@(HEAP_STATIC p c) =
    addStatic p c >>>= \ label ->
    addBefore [DATA_GLB profstatic label] >>>= \ i ->
    emit (HEAP_CVAL i)
gFix g@(HEAP_CREATE) = ifLive (emit g)
gFix g@(HEAP_SPACE) = ifLive (emit g)
gFix g@(EVALUATED) = ifLive (emit g)

gFix g =
    gState >>>= \ state ->  error ("gFix:" ++ strGcode state g)


