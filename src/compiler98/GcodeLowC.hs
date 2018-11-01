module GcodeLowC
  ( gcodeGather
  , gcodeCHeader
  ) where

#if defined(__HBC__) 
#define NATIVE
#elif defined(__NHC__)
#define NHCFLOAT
#elif defined(__GLASGOW_HASKELL__) && __GLASGOW_HASKELL__ < 406
#define NATIVE
#elif defined(__GLASGOW_HASKELL__) && __GLASGOW_HASKELL__ >= 406
#define FLOAT
#elif defined(__HUGS__)
#define HUGSFLOAT
#endif

import Gcode
import GcodeLow (shortNeedheap,shortNeedstack,shortPush,shortPop
                ,shortPushArg,shortZapArg,shortHeapCval,shortHeap
                ,fun,foreignfun,showId)
import EmitState
import Prim(strPrim)
#if defined(NATIVE)
import Native
#elif defined(NHCFLOAT)
import NhcFloats
#elif defined(FLOAT)
import Floats
#endif

sfun  = fun
ffun  = foreignfun

----------------------------------------
gcodeCHeader = "#include \"newmacros.h\"\n#include \"runtime.h\"\n\n"

----------------------------------------

emitJump p j i =
  emitByte p (j)       >|>
  emitByte p (show l)  >|>
  emitByte p (show h)
 where
  (h,l) = divMod i 256

emitOp p op =  emitByte p (op)

emitOp1 p op i =
  emitByte p (op)     >|>
  emitByte p (show i)

emitOp2 p op i j =
  emitByte p (op)     >|>
  emitByte p (show i) >|>
  emitByte p (show j)

emitOp12 p op i =
  if i < 0 then
    case (-i) `divMod` 256 of
      (0,l) -> emitByte p (op ++ "_N1") >|>
               emitByte p (show l)
      (h,l) -> emitByte p (op ++ "_N2") >|>
               emitByte p (show l) >|>
               emitByte p (show h)
  else
    case i `divMod` 256 of
      (0,l) -> emitByte p (op ++ "_P1") >|>
               emitByte p (show l)
      (h,l) -> emitByte p (op ++ "_P2") >|>
               emitByte p (show l)      >|>
               emitByte p (show h)


shortQ p pred defgen opstr arg  =
  case pred arg of
    (True,argstr) -> emitOp p (opstr ++ "_I" ++ argstr)
    _             -> defgen opstr arg

gcodeCDump p state (ALIGN)         = emitAlign p
gcodeCDump p state (ALIGN_CONST)   = emitOp p "ENDCODE" >|> emitAlignDouble p
gcodeCDump p state (NEEDHEAP i)    = shortQ p shortNeedheap (emitOp12 p)
                                                                  "NEEDHEAP" i
gcodeCDump p state (NEEDSTACK i)   = shortQ p shortNeedstack (emitOp12 p)
                                                                 "NEEDSTACK" i
gcodeCDump p state (LABEL i)       = defineLabel p Local (showId state i "")
gcodeCDump p state (LOCAL s i)     = defineLabel p Local
                                               (s ++ showId state i "")
gcodeCDump p state (GLOBAL s i)    = defineLabel p Global
                                               (s ++ showId state i "")
gcodeCDump p state (JUMP  i)       = emitJump p "JUMP" i
gcodeCDump p state (JUMPFALSE i)   = emitJump p "JUMPFALSE" i		-- DAVID
gcodeCDump p state (PRIMITIVE)     = emitOp p "PRIMITIVE"
gcodeCDump p state (PRIM prim)     = emitOp p (strPrim prim)
gcodeCDump p state (NOP)           = emitOp p "NOP"
gcodeCDump p state (MKIORETURN)    = emitOp p "MKIORETURN"	-- MW

gcodeCDump p state (TABLESWITCH size pad ls) =		-- DAVID
    emitOp1 p "TABLESWITCH" size >|>
    someNops p pad >|>
    someLabels p ls
gcodeCDump p state (LOOKUPSWITCH size pad tls def) =	-- DAVID
    emitOp1 p "LOOKUPSWITCH" size >|>
    someNops p pad >|>
    someLabels p (concatMap (\(f,s) -> [f,s]) tls ++ [def])

gcodeCDump p state (ZAP_ARG  i)     = shortQ p shortZapArg (emitOp1 p)
                                                                    "ZAP_ARG" i
gcodeCDump p state (ZAP_STACK i)    = emitOp12 p "ZAP_STACK" i

-- Stack
gcodeCDump p state (PUSH_CADR  i)   = emitOp12 p "PUSH_CADR" i
gcodeCDump p state (PUSH_CVAL  i)   = emitOp12 p "PUSH_CVAL" i
gcodeCDump p state (PUSH_INT  i)    = emitOp12 p "PUSH_INT" i
gcodeCDump p state (PUSH_CHAR  i)   = emitOp12 p "PUSH_CHAR" i
gcodeCDump p state (PUSH_ARG  i)    = shortQ p shortPushArg (emitOp1 p)
                                                                   "PUSH_ARG" i
gcodeCDump p state (PUSH_ZAP_ARG i) = shortQ p shortPushArg (emitOp1 p)
                                                               "PUSH_ZAP_ARG" i
gcodeCDump p state (PUSH      i)    = shortQ p shortPush (emitOp12 p)  "PUSH" i
gcodeCDump p state (PUSH_HEAP)      = emitOp p "PUSH_HEAP"
gcodeCDump p state (POP       i)    = shortQ p shortPop (emitOp12 p)    "POP" i
gcodeCDump p state (SLIDE     i)    = emitOp12 p  "SLIDE" i
gcodeCDump p state (UNPACK    i)    = emitOp1 p  "UNPACK" i

-- selector
gcodeCDump p state (SELECTOR_EVAL)  = emitOp p "SELECTOR_EVAL"
gcodeCDump p state (SELECT     i)   = emitOp1 p "SELECT" i

-- evaluation
gcodeCDump p state (APPLY     i)    = emitOp1 p "APPLY" i
gcodeCDump p state (EVAL)           = emitOp p "EVAL"
gcodeCDump p state (RETURN)         = emitOp p "RETURN"
gcodeCDump p state (RETURN_EVAL)    = emitOp p "RETURN_EVAL"

-- Heap
gcodeCDump p state (HEAP_CADR  i)   = emitOp12 p "HEAP_CADR" i
gcodeCDump p state (HEAP_CVAL  i)   = shortQ p shortHeapCval (emitOp12 p)
                                                                  "HEAP_CVAL" i
gcodeCDump p state (HEAP_INT  i)    = emitOp12 p "HEAP_INT" i
gcodeCDump p state (HEAP_CHAR  i)   = emitOp12 p "HEAP_CHAR" i
gcodeCDump p state (HEAP_ARG  i)    = emitOp1 p "HEAP_ARG" i 
gcodeCDump p state (HEAP_ARG_ARG i j)  = emitOp2 p "HEAP_ARG_ARG" i j
gcodeCDump p state (HEAP_ARG_ARG_RET_EVAL i j)  =
                                      emitOp2 p "HEAP_ARG_ARG_RET_EVAL" i j
gcodeCDump p state (HEAP      i)    = shortQ p shortHeap (emitOp12 p) "HEAP" i
gcodeCDump p state (HEAP_OFF  i)    = emitOp12 p "HEAP_OFF" i

gcodeCDump p state (HEAP_CREATE)    = emitOp p "HEAP_CREATE"
gcodeCDump p state (HEAP_SPACE)     = emitOp p "HEAP_SPACE"

gcodeCDump p state (DATA_CREATE)    = emitWord p ("0")
gcodeCDump p state (DATA_CAPITEM a b) = emitByte p (show b) >|>
                                        emitByte p (show a)
gcodeCDump p state (DATA_CONSTHEADER a b) = emitWord p ("HW(" ++
						        show a ++ ',':
						        show b ++ ")")
gcodeCDump p state (DATA_W  i)      = emitWord p (show i)
gcodeCDump p state (DATA_S  s)      = foldr (>|>) (emitByte p ("0"))
                                          (map (emitByte p.show.fromEnum) s)
#if defined(NATIVE)
gcodeCDump p state (DATA_F  f)      = {-no need to test if floatIsDouble-}
                                      let bytes = showBytes f [] in
                                      foldr (>|>) id
                                        (map (emitByte p.show.fromEnum) bytes)
gcodeCDump p state (DATA_D  d)      = let bytes = showBytes d [] in
                                      foldr (>|>) id
                                        (map (emitByte p.show.fromEnum) bytes)
#elif defined(NHCFLOAT)
gcodeCDump p state (DATA_F  f)      = {-if floatIsDouble then
                                      let (h,l) = doubleToInts f in
                                      emitWord p (show h) >|>
                                      emitWord p (show l)
                                      else-}
                                      let i = floatToInt f in
                                      emitWord p (show i)
gcodeCDump p state (DATA_D  d)      = let (h,l) = doubleToInts d in
                                      emitWord p (show h) >|>
                                      emitWord p (show l)
#elif defined(FLOAT)
gcodeCDump p state (DATA_F  f)      = {-if floatIsDouble then
                                      let h = doubleToInt0 f
                                          l = doubleToInt1 f in
                                      emitWord p (show h) >|>
                                      emitWord p (show l)
                                      else-}
                                      let i = floatToInt f in
                                      emitWord p (show i)
gcodeCDump p state (DATA_D  d)      = let h = doubleToInt0 d
                                          l = doubleToInt1 d in
                                      emitWord p (show h) >|>
                                      emitWord p (show l)
#elif defined(HUGSFLOAT)
-- does not work, just bogus translation of floats and doubles into zero bytes
gcodeCDump p state (DATA_F  f)      = {-if floatIsDouble then
                                      let h = 0
                                          l = 0 in
                                      emitWord p (show h) >|>
                                      emitWord p (show l)
                                      else-}
                                      let i = 0 in
                                      emitWord p (show i)
gcodeCDump p state (DATA_D  d)      = let h = 0
                                          l = 0 in
                                      emitWord p (show h) >|>
                                      emitWord p (show l)
#endif
gcodeCDump p state (DATA_NOP)       = id
gcodeCDump p state (DATA_CLABEL i)  = useLabel p (showCLabel state i "")
gcodeCDump p state (DATA_FLABEL i)  = useLabel p (ffun ++ showId state i "")
gcodeCDump p state (DATA_GLB s 0)   = useLabel p (s)
gcodeCDump p state (DATA_GLB s i)   = useLabel p (s ++ showId state i "")
gcodeCDump p state (DATA_VAP i)     = let lab = sfun ++ showId state i ""
                                      in
                                      mentionLabel p lab >|>
                                      emitWord p ("VAPTAG(" ++
					          wrapUse lab ++ ")")
gcodeCDump p state (DATA_CAP  i s)  = let lab = sfun ++ showId state i ""
                                      in
                                      mentionLabel p lab >|>
                                      emitWord p ("CAPTAG(" ++
					          wrapUse lab ++
					          ',': show s ++ ")")
gcodeCDump p state (DATA_CON  s c)  = emitWord p ("CONSTR(" ++
					          show c ++  ',':
					          show s ++  ",0)")
gcodeCDump p state (DATA_CONW s e)  = emitWord p ("CONSTRW(" ++
					          show s ++  ',':
			 		          show e ++  ")")
gcodeCDump p state (DATA_CONP s e)  = emitWord p ("CONSTRP(" ++
					          show s ++  ',':
			 		          show e ++  ")")


someNops :: Pass -> Int -> EmitState -> EmitState
someNops p pad = foldr (>|>) id (take pad (repeat (emitOp p "NOP")))

someLabels :: Pass -> [ Int ] -> EmitState -> EmitState
someLabels p cls =
  foldr (>|>) id (map (\l -> emitByte p ("TOP(" ++ show l ++ ")")   >|>
                             emitByte p ("BOT(" ++ show l ++ ")")
                      )
                      cls)

----------------------------------------
gcodeGather p state es [] = es
gcodeGather p state es list =
  (foldr (\a b-> gcodeCDump p state a >|> b) (emitAlign p) list) es

