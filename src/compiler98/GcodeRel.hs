module GcodeRel(gcodeRel) where

import Gcode
import GcodeLow(gcodeSize,wsize,align)
import AssocTree
import Util.Extra(sndOf)

gcodeRel gcode = fixOne gcode


fixOne [] = []
fixOne (g@(STARTFUN pos fun):gs) =
  gRel (gLabels initAT 0 gs) 0 gs 
fixOne (ALIGN:gs) = -- must be aligned here!
  fixOne gs 
fixOne (g@ALIGN_CONST:gs) = -- must be aligned here!
  g:fixOne gs 
fixOne (g:gs) =
  g : fixOne gs 

nops = NOP:nops

   
gLabels :: AssocTree Int Int -> Int -> [Gcode] -> AssocTree Int Int
gLabels at p [] = at
gLabels at p (LABEL i:gs) =
  gLabels (addAT at sndOf i p) p gs

gLabels at p (TABLESWITCH size _ _:gs) =	-- DAVID
  let p1 = p  + 2 in
  let p2 = p1 + align 2 p1 + 2 * size
  in seq p2 (gLabels at p2 gs)
gLabels at p (LOOKUPSWITCH size _ _ _:gs) =	-- DAVID
  let p1 = p  + 2 in
  let p2 = p1 + align 2 p1 + 4 * size + 2
  in seq p2 (gLabels at p2 gs)

{------------- DAVID ------------
gLabels at p (g@JUMPS_T:gs)  =
  let p' = gcodeSize g + p
  in seq p' (gLabels at (p' + align 2 p') gs)
gLabels at p (g@JUMPS_L:gs)  =
  let p' = gcodeSize g + p
  in seq p' (gLabels at (p' + align 4 p') gs)
------------- DAVID --------------}



gLabels at p (g@PRIMITIVE:gs)  =
  let p' = gcodeSize g + p
  in seq p' (gLabels at (p' + align wsize p') gs)
gLabels at p (g@(ALIGN):gs) =
  gLabels at (p + align wsize p) gs
gLabels at p (ALIGN_CONST:gs) = -- Only const table left
  at
gLabels at p (g:gs) = 
  let p' = gcodeSize g + p
  in seq p' (gLabels at p' gs)


gRel :: AssocTree Int Int -> Int -> [Gcode] -> [Gcode]
gRel at p [] = take (align wsize p) nops

gRel at p (g@(JUMP  i):gs)  =
  let p' = gcodeSize g + p
  in case lookupAT at i of
       Just i -> JUMP (i-p-1) : gRel at p' gs
gRel at p (g@(JUMPFALSE i):gs)  =			-- DAVID
  let p' = gcodeSize g + p
  in case lookupAT at i of
       Just i -> JUMPFALSE (i-p-1) : gRel at p' gs	-- DAVID
       Nothing -> error "label not found"

gRel at p (TABLESWITCH size _ ls:gs) =			-- DAVID
    TABLESWITCH size pad (map adjust ls) :
    gRel at (pt+2*size) gs
    where
        p1       = p + 2
        pad      = align 2 p1
        pt       = p1 + pad
        adjust l = case lookupAT at l of Just p1 -> (p1-pt)

gRel at p (LOOKUPSWITCH size _ tls def:gs) =		-- DAVID
    LOOKUPSWITCH size pad (map (\(t,l) -> (t, adjust l)) tls) (adjust def) :
    gRel at (pt+4*size+2) gs
    where
        p1       = p + 2
        pad      = align 2 p1
        pt       = p1 + pad
        adjust l = case lookupAT at l of Just p1 -> (p1-pt)

{-------------- DAVID --------------------
gRel at p (g@JUMPS_T:gs)  =
  g : take f nops ++ gRel' pt gs
 where
  p' = p + gcodeSize g
  f = align 2 p'
  pt = p' + f
  gRel' p [] = []
  gRel' p (g@(JUMPTABLE l1):gs) =
    case lookupAT at l1 of
      Just p1 ->
	JUMPTABLE (p1-pt) : gRel' (p+gcodeSize g) gs
  gRel' p gs = gRel at p gs
gRel at p (g@(JUMPS_L):gl@(JUMPLENGTH s l1):gs)  =
  case lookupAT at l1 of
    Just p1 -> g : take f nops  ++ JUMPLENGTH s (p1-pt) : gRel' (gcodeSize gl + pt) gs
 where
  p' = p + gcodeSize g
  pt = p' + f
  f = align 4 p'

  gRel' p [] = []
  gRel' p (g@(JUMPLIST v l1):gs) =
    case lookupAT at l1 of
      Just p1 ->
        JUMPLIST v (p1-pt) : gRel' (p + gcodeSize g) gs
  gRel' p gs = gRel at p gs
------------------------ DAVID ---------------- -}
gRel at p (g@PRIMITIVE:gs)  =
  g : take f nops ++ gRel at (p'+f) gs
 where
  p' = p + gcodeSize g
  f = align 4 p'

gRel at p (ALIGN:gs) =
  let f = align wsize p
  in take f nops ++ gRel at (p+f) gs
gRel at p gss@(ALIGN_CONST:gs) =  -- only constant table left !
  gss

gRel at p (g:gs) = 
  let p' = gcodeSize g + p
  in seq p' (g : gRel at p' gs)
