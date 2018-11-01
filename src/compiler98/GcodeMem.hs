module GcodeMem(gcodeMem) where

import Gcode
import GcodeLow(gcodeNeed,primNeed,extra)
import AssocTree
import Util.Extra
import IntState
import Prim


gcodeMem prof state gcode = (fixOne state (if prof then extra else 0) gcode,state)

fixOne state extra [] = []
fixOne state extra (g@(STARTFUN pos fun):gs) =
  let arity = arityIS state (toEnum fun)
      GM na _ h _ gs' = gMem za zs 0 initAT (arity,extra) gs
      za = filter (`notElem` na) [1 .. arity]
      zs = [] -- There is no stack yet!
      zapins = map ZAP_ARG za
  in g: zapins ++ needheap h gs' 
fixOne state extra (g:gs) =
  g : fixOne state extra gs 


data GM =
    GM
	[Int]			-- need arg
	[Int]			-- need stack
	Int			-- Heap usage
	(AssocTree Int ([Int],[Int],Int,Int,Maybe Gcode)) -- Mapping from label to (need arg,need stack,heap usage,destiny)
	[Gcode]			-- Fixed gcode

eitherOf,bothOf:: [Int] -> [Int] -> [Int]
eitherOf  as bs = filter (`notElem` bs) as ++ bs
bothOf as bs = filter (`elem` bs) as 

needheap 0 gs = gs
needheap n (NEEDSTACK m:gs) = NEEDHEAP (n+m): gs	-- peephole opt /MW
needheap n gs = NEEDHEAP n : gs

use :: Int -> [Int] -> [Int]
use x xs = if x `elem` xs then xs else x : xs 

addZap :: AssocTree Int ([Int],[Int],Int) -> Int -> ([Int],[Int],Int) -> AssocTree Int ([Int],[Int],Int)
addZap  at label value = addAT at comb label value
 			 where comb (za,zs,d) (za',zs',d') =
				  (if d /= d' then strace ("Different depths for " ++ show label) else id) $
				  (bothOf za za',bothOf zs zs',d)

addNeed :: AssocTree Int ([Int],[Int],Int,Int,Maybe Gcode) -> Int -> ([Int],[Int],Int,Int,Maybe Gcode) -> AssocTree Int ([Int],[Int],Int,Int,Maybe Gcode)
addNeed at label value = addAT at (sndOf . strace ("redefinition of " ++ show label)) label value

maybeG (RETURN:_)      = Just RETURN
maybeG (RETURN_EVAL:_) = Just RETURN_EVAL
maybeG _               = Nothing

justG jg Nothing = jg
justG jg (Just g) = g


gMem0 :: AssocTree Int ([Int],[Int],Int) -> (Int,Int) -> [Gcode] -> GM
gMem0 at extra [] =  GM [] [] 0 initAT []
gMem0 at extra (g@(ALIGN_CONST):gs) =  GM [] [] 0 initAT (g:gs) -- only data declarations  
gMem0 at extra (g@(LABEL i):gs) = 
  case lookupAT at i of
    Nothing -> -- Unused label
       gMem0 at extra gs
    Just (za,zs,d) ->
      case gs of
	(JUMP j:gs)     -> case gMem0 (addZap at j (za,zs,d)) extra gs of
			     GM na ns h at gs ->
			       case lookupAT at j of
				Just (na,ns,h,j',mg) -> GM na ns h (addNeed at i (na,ns,h,j',mg)) gs
			  	Nothing -> error ("LABEL JUMP (in gMem0) couldn't find " ++ show j)
 	_               -> gMem za zs d at extra (g:gs)  -- Simplest to use code for the fall through case
gMem0 at extra (g:gs) =
  gMem0 at extra gs 

gMem :: [Int] -> [Int] -> Int -> AssocTree Int ([Int],[Int],Int) -> (Int,Int) -> [Gcode] -> GM
gMem za zs d at extra [] = GM [] [] 0 initAT []
gMem za zs d at extra (g@(ALIGN_CONST):gs) = GM [] [] 0 initAT (g:gs)
gMem za zs d at extra (g@RETURN:gs) =
  case gMem0 at extra gs of
    GM na ns h at gs -> GM na (use d ns) 0 at (g:gs)
gMem za zs d at extra (g@RETURN_EVAL:gs) =
  case gMem0 at extra gs of
    GM na ns h at gs -> GM na (use d ns) 0 at (g:gs)
gMem za zs d at extra (g@(SELECT i):gs) = -- SELECT now incorporates a RET_EVAL
  case gMem0 at extra gs of
    GM na ns h at gs -> GM na (use d ns) 0 at (g:gs)
gMem za zs d at extra (g@(LABEL i):gs) = -- fall through label
  case lookupAT at i of
    Nothing -> -- unused label, but fall through so skip only the label
       gMem za zs d at extra gs
    Just (za',zs',d') -> 
      case gMem (bothOf za' za) (bothOf zs' zs) d at extra gs of
        GM na ns h at gs -> GM na ns h (addNeed at i (na,ns,h,i,maybeG gs)) (g:gs)

gMem za zs d at extra (g@(JUMP i):gs) = 
  case gMem0 (addZap at i (za,zs,d)) extra gs of
    GM na ns h at gs ->
      case lookupAT at i of
	Just (na,ns,h,i',mg) ->
	  GM na ns h at (justG (JUMP i') mg:gs)
	Nothing -> error ("JUMP couldn't find " ++ show i)

gMem za zs d at extra (g@(JUMPFALSE i):gs) = 	-- DAVID
  let d' = d-1
  in case gMem za (filter (<=d') zs) d' (addZap at i (za,zs,d')) extra gs of
      GM na ns h at gs ->
        case lookupAT at i of
	  Just (na',ns',h',i',_) -> GM (eitherOf na' na) (eitherOf ns' ns) (max h' h) at (JUMPFALSE i':gs)				          -- DAVID
	  Nothing -> error ("JUMPFALSE couldn't find " ++ show i) -- DAVID


gMem za zs d at extra (TABLESWITCH size pad ls:gs)  =		  -- DAVID
    let nat = foldr (\l tr -> addZap tr l (za,zs,d)) at ls in
    case gMem0 nat extra gs of
        GM _ _ _ at gs ->
	    case gMem' at ls of
	        (na,ns,h,ls) ->
		    GM na ns h at (TABLESWITCH size pad ls:gs)
    where
        gMem' at [] =
	    ([],[],0,[])
        gMem' at (l:ls) =
	    let (na1,ns1,h1,ls1) = gMem' at ls  in 
            case lookupAT at l of
	    Just (na0,ns0,h0,l0,_) -> (eitherOf na0 na1, eitherOf ns0 ns1, 
                                       max h0 h1, l0:ls1)
	    Nothing -> error ("TABLESWITCH couldn't find " ++ show l)
						

gMem za zs d at extra (LOOKUPSWITCH size pad tls def:gs)  =	  -- DAVID
    let (tgs,ls) = unzip tls in
    let xls      = def : ls  in
    let nat      = foldr (\l tr -> addZap tr l (za,zs,d)) at xls in
    case gMem0 nat extra gs of
        GM _ _ _ at gs ->
	    case gMem' at xls of
		(na,ns,h,(def:ls)) ->
		    GM na ns h at (LOOKUPSWITCH size pad (zip tgs ls) def:gs)
    where
        gMem' at [] =
	    ([],[],0,[])
        gMem' at (l:ls) =
	    let (na1,ns1,h1,ls1) = gMem' at ls  in 
            case lookupAT at l of
	    Just (na0,ns0,h0,l0,_) -> (eitherOf na0 na1, eitherOf ns0 ns1, 
                                       max h0 h1, l0:ls1)
	    Nothing -> error ("LOOKUPSWITCH couldn't find " ++ show l)

{------------------------- DAVID -------------------------------
gMem za zs d at extra (gj@JUMPS_T:gs)  =
  gMem' at [] gs
 where
  gMem' at ls (g@(JUMPTABLE l):gs) = gMem' (addZap at l (za,zs,d)) (g:ls) gs 
  gMem' at ls gs =
    case gMem0 at extra gs of
      GM na ns h at gs ->
        gMem'' [] [] 0 at gs ls
  gMem'' na ns h at gs []  = GM na ns h at (gj:gs)
  gMem'' na ns h at gs ((JUMPTABLE l):ls) =
    case lookupAT at l of
      Just (na',ns',h',l',_) -> gMem'' (eitherOf na na') (eitherOf ns ns') (max h h') at (JUMPTABLE l':gs) ls
      Nothing -> error ("JUMPS_T couldn't find (na',ns',h')  for " ++ show l)

gMem za zs d at extra (gj@JUMPS_L:(JUMPLENGTH s gll):gs)  =
  gMem' (addZap at gll (za,zs,d)) [] gs
 where
  gMem' at ls (g@(JUMPLIST v l):gs) = gMem'  (addZap at l (za,zs,d)) (g:ls) gs 
  gMem' at ls gs =
    case gMem0 at extra gs of
      GM na ns h at gs ->
        case lookupAT at gll of
	  Just (na,ns,h,gll',_) -> gMem'' (JUMPLENGTH s gll') na ns h at gs ls
          Nothing -> error ("JUMPS_L couldn't find (na',ns',h')  for gll " ++ show gll)

  gMem'' gl na ns h at gs []  = GM na ns h at (gj:gl:gs) 
  gMem'' gl na ns h at gs ((JUMPLIST v l):ls) =
    case lookupAT at l of
      Just (na',ns',h',l',_) -> gMem'' gl (eitherOf na na') (eitherOf ns ns') (max h' h) at (JUMPLIST v l':gs) ls 
      Nothing -> error ("JUMPS_L couldn't find (na',ns',h')  for " ++ show l)

------------------------- DAVID ------------------ -}



gMem za zs d at extra (g@SELECTOR_EVAL:gs) =  -- ZAP (But we know that there is nothing to zap in a selector function!)
  case gMem za zs (d+1) at extra gs of
    GM na ns h at gs -> 
	GM (use 1 na) (filter (<= d) ns) 0 at (g:needheap h gs)

gMem za zs d at extra (g@EVAL:gs) = -- ZAP
  let GM na' ns' h' at' gs' = gMem (zaH++za) (zsH++zs) d at extra gs
      zsH = (filter (`notElem` zs) . filter (`notElem` ns')) [1 .. d-1]  -- EVAL uses top of stack
      zaH = (filter (`notElem` za) . filter (`notElem` na')) [1 .. fst extra] 
  in 
      GM na' (use d ns') 0 at' (map ZAP_ARG zaH ++ map (ZAP_STACK . (d-)) zsH ++ g:needheap h' gs')
gMem za zs d at extra (g@PRIMITIVE:gs)  = -- ZAP
  case gMem za zs (d+1) at extra gs of
    GM na ns h at gs ->
	GM [1 .. fst extra] (filter (<= d) ns) 0 at (g:needheap h gs)

{--------- DAVID ------------
gMem za zs d at extra (g@(MATCHCON):gs) = 
        case gMem za zs d at extra gs of
          GM na ns h at gs -> GM na (use d ns) h at (g:gs)
gMem za zs d at extra (g@(MATCHINT):gs) = 
        case gMem za zs d at extra gs of
          GM na ns h at gs -> GM na (use d ns) h at (g:gs) 
---------- DAVID ----------- -}

gMem za zs d at extra (g@(PUSH_ARG i):gs) =
        case gMem za zs (d+1) at extra gs of
          GM na ns h at gs -> GM (use i na) (filter (<=d) ns) h at (g:gs)
--gMem za zs d at extra (g@(PUSH_ZAP_ARG i):gs) =	-- probably not needed
--        case gMem za zs (d+1) at extra gs of
--          GM na ns h at gs -> GM (use i na) (filter (<=d) ns) h at (g:gs)
gMem za zs d at extra (g@(PUSH i):gs) =
        case gMem za zs (d+1) at extra gs of
          GM na ns h at gs -> GM na (use (d-i) (filter (<=d) ns)) h at (g:gs)
gMem za zs d at extra (g@(HEAP_ARG i):gs) =
        case gMem za zs d at extra gs of
          GM na ns h at gs -> GM (use i na) ns (h+1) at (g:gs)
--gMem za zs d at extra (g@(HEAP_ARG_ARG i j):gs) =	-- probably not needed
--        case gMem za zs d at extra gs of
--          GM na ns h at gs -> GM (use j (use i na)) ns (h+2) at (g:gs)
gMem za zs d at extra (g@(HEAP i):gs) =
        case gMem za zs d at extra gs of
          GM na ns h at gs -> GM na (use (d-i) ns) (h+1) at (g:gs)
gMem za zs d at extra (g@(SLIDE   i):gs) =
	let d' = d-i
        in case gMem za (filter (<=d') zs) d' at extra gs of
             GM na ns h at gs -> GM na (use d ns) h at (g:gs)
gMem za zs d at extra (g@(UNPACK i):gs) =
        case gMem za zs (d-1+i) at extra gs of
          GM na ns h at gs -> GM na (use d (filter (<=d) ns)) h at (g:gs)
--gMem za zs d at extra (g@(SELECT i):gs) = -- this clause now matched earlier
--        case gMem za zs d at extra gs of
--          GM na ns h at gs -> GM na (use d ns) h at (g:gs)
gMem za zs d at extra (g@(APPLY i):gs) = 
	let d' = d-i
        in case gMem za (filter (<=d') zs) d' at extra gs of
             GM na ns h at gs ->   
				GM na (eitherOf [d-i .. d] ns) (10+i*(3+snd extra)+h) -- Not always correct (10 is a large 
							          at (g:gs)            -- application but they can be larger)
gMem za zs d at extra (g@(PRIM prim):gs) = 
  case primNeed (snd extra) prim of
    (id,ih) ->
      if id == 0 then
        case gMem za zs d at extra gs of
          GM na ns h at gs -> GM na (use d ns) (h+ih) at (g:gs)
      else if id < 0 then
	let d' = d+id
        in case gMem za (filter (<=d') zs) d' at extra gs of
             GM na ns h at gs -> GM na (eitherOf [d+id .. d] ns) (h+ih) at (g:gs)
      else
	error ("gmem: primitive that increases the stack!" ++ strPrim prim)

gMem za zs d at extra (g:gs) = 
  case gcodeNeed (snd extra) g of
    (id,ih) ->
      if id == 0 then
        case gMem za zs d at extra gs of
          GM na ns h at gs -> GM na (use d ns) (h+ih) at (g:gs)
      else if id < 0 then
	let d' = d+id
        in case gMem za (filter (<=d') zs) d' at extra gs of
             GM na ns h at gs -> GM na (eitherOf [d+id .. d] ns) (h+ih) at (g:gs)
      else
        case gMem za zs (d+id) at extra gs of
          GM na ns h at gs -> GM na (filter (<=d) ns) (h+ih) at (g:gs)


