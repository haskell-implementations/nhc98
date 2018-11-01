module GcodeLow
	(offsetSize
	,shortNeedheap,shortNeedstack,shortPush,shortPop
        ,shortPushArg,shortZapArg,shortHeapCval,shortHeap
	,gcodeSize,gcodeNeed,primNeed,primStack,gcodeStack
	,gcodeDump,gcodeHeader
	,lowInteger,extra
	,wsize,con0,cap0,caf,fun,cfun,string,consttable,foreignfun
	,profstatic,profmodule,tprofmodule,tprofmodulesub
        ,proftype,profproducer,profconstructor,align
	,fixStr,showId
	) where

import Gcode
import Util.Extra(strStr,splitIntegral,SplitIntegral(..))
import IntState(strIS,dummyIntState)
import Prim(strPrim)
import Machine
import Char(isAlphaNum)

extra = 4::Int	-- make room for largest profile info

align :: Int -> Int -> Int
align a p =
 case p `mod` a of
   0 -> 0
   x -> a-x

con0 = "C0_"
cap0 = "F0_"
caf  = "CF_"
fun  = "FN_"
cfun  = ""
string = "ST_"
consttable = "CT_"
foreignfun = "FR_"

profstatic = "PS_"
profmodule = "PM_"
proftype = "PT_"
profproducer = "PP_"
profconstructor = "PC_"
tprofmodule = "TM_"
tprofmodulesub = "TMSUB_"

groupW [] = []
groupW xs = case splitAt wsize xs of
              (w,xs) -> take wsize (w ++ repeat 0) : groupW xs


fixW xs = foldr ( \ d a -> d+256*a ) 0 xs

lowInteger i = 
  case splitIntegral i of
    SplitNeg xs ->  let xsW = groupW xs
		    in DATA_CONW (length xsW) 1 : map (DATA_W . fixW) xsW
    SplitZero    -> [DATA_CONW 0 0 ]
    SplitPos xs ->  let xsW = groupW xs
		    in DATA_CONW (length xsW) 0 : map (DATA_W . fixW) xsW


offsetSize i = if i >=256 || i<= -256 then 2 else 1 


shortNeedheap :: Int -> (Bool,String)
shortNeedheap i = (i <= 32,"32")
shortNeedstack :: Int -> (Bool,String)
shortNeedstack i = (i <= 16,"16")
shortPush :: Int -> (Bool,String)
shortPush i = (i==1,"1")
shortPop :: Int -> (Bool,String)
shortPop i = (i==1,"1")
shortPushArg :: Int -> (Bool,String)
shortPushArg i = (1<= i && i <= 3, show i)
shortZapArg :: Int -> (Bool,String)
shortZapArg i = (1<= i && i <= 3, show i)
shortHeapCval :: Int -> (Bool,String)
shortHeapCval i = (i == -3 || (3<= i && i <= 5), if i == -3 then "N3" else show i)
shortHeap :: Int -> (Bool,String)
shortHeap i = (i==1 || i==2, show i)

gcodeSize (NEEDHEAP  i)  = if fst(shortNeedheap i) then 1 else 1 + offsetSize i
gcodeSize (NEEDSTACK  i) = if fst(shortNeedstack i) then 1 else 1 + offsetSize i
gcodeSize (LABEL i)      = 0
gcodeSize (LOCAL s i)    = 0
gcodeSize (GLOBAL s i)   = 0
gcodeSize (JUMP  i)      = 3
gcodeSize (JUMPFALSE i)  = 3		-- DAVID
gcodeSize (PRIMITIVE)    = 1

gcodeSize (PRIM prim) = 1

gcodeSize (NOP)	     = 1
gcodeSize (TABLESWITCH  size pad ls)      = 2 + pad + size * 2     -- DAVID
gcodeSize (LOOKUPSWITCH size pad tls def) = 2 + pad + size * 4 + 2 -- DAVID
gcodeSize (MKIORETURN) = 1					   -- MW

{------- DAVID ------------
gcodeSize (MATCHCON) = 1
gcodeSize (MATCHINT) = 1
gcodeSize (JUMPS_T)  = 1
gcodeSize (JUMPTABLE l) = 2
gcodeSize (JUMPS_L)  = 1
gcodeSize (JUMPLENGTH s l) = 4
gcodeSize (JUMPLIST  v l) = 4
--------- DAVID ---------- -}

gcodeSize (ZAP_STACK  i)   = 1 + offsetSize i
gcodeSize (ZAP_ARG  i)   = if fst (shortZapArg i) then 1 else 2

-- Stack
gcodeSize (PUSH_CADR  i)   = 1 + offsetSize i
gcodeSize (PUSH_CVAL  i)   = 1 + offsetSize i
gcodeSize (PUSH_INT  i)    = 1 + offsetSize i
gcodeSize (PUSH_CHAR  i)   = 1 + offsetSize i
gcodeSize (PUSH_ARG  i)    = if fst (shortPushArg i) then 1 else 2
gcodeSize (PUSH_ZAP_ARG  i)    = if fst (shortPushArg i) then 1 else 2
gcodeSize (PUSH      i)    = if fst (shortPush i) then 1 else 1 + offsetSize i
gcodeSize (PUSH_HEAP)      = 1
gcodeSize (POP       i)    = if fst (shortPop i) then 1 else 1 + offsetSize i 
gcodeSize (SLIDE     i)    = 1 + offsetSize i 
gcodeSize (UNPACK    i)    = 2

-- selector
gcodeSize (SELECTOR_EVAL)  = 1
gcodeSize (SELECT     i)   = 2

-- evaluation
gcodeSize (APPLY     i) = 2
gcodeSize (EVAL)        = 1
gcodeSize (RETURN)      = 1
gcodeSize (RETURN_EVAL) = 1

-- Heap
gcodeSize (HEAP_CADR  i)   = 1 + offsetSize i
gcodeSize (HEAP_CVAL  i)   = if fst (shortHeapCval i) then 1 else 1 + offsetSize i
gcodeSize (HEAP_INT  i)    = 1 + offsetSize i
gcodeSize (HEAP_CHAR  i)   = 1 + offsetSize i
gcodeSize (HEAP_ARG  i)    = 2
gcodeSize (HEAP_ARG_ARG i j) = 3
gcodeSize (HEAP_ARG_ARG_RET_EVAL i j) = 3
gcodeSize (HEAP      i)    = if fst (shortHeap i) then 1 else 1 + offsetSize i
gcodeSize (HEAP_OFF  i)    = 1 + offsetSize i

gcodeSize (HEAP_CREATE) = 1
gcodeSize (HEAP_SPACE) = 1

gcodeSize (DATA_CREATE)     = wsize
gcodeSize (DATA_CAPITEM a b ) = 2
gcodeSize (DATA_CONSTHEADER a b)   = wsize
gcodeSize (DATA_W  i)       = wsize
gcodeSize (DATA_F  f)       = if floatIsDouble then 8 else 4
gcodeSize (DATA_S  s)       = wsize
gcodeSize (DATA_D  d)       = 8
gcodeSize (DATA_NOP)        = 0
gcodeSize (DATA_CLABEL i)   = wsize
gcodeSize (DATA_FLABEL i)   = wsize
gcodeSize (DATA_GLB s i)    = wsize
gcodeSize (DATA_VAP i)      = wsize
gcodeSize (DATA_CAP  i s)   = wsize
gcodeSize (DATA_CON  s c)   = wsize
gcodeSize (DATA_CONW s e)   = wsize
gcodeSize (DATA_CONP s e)   = wsize


gcodeStack g = fst (gcodeNeed 0 g)

gcodeNeed :: Int -> Gcode -> (Int,Int) 
gcodeNeed extra (PUSH_CADR  i) = ( 1,0)
gcodeNeed extra (PUSH_CVAL  i) = ( 1,0)
gcodeNeed extra (PUSH_INT  i)  = ( 1,0)
gcodeNeed extra (PUSH_CHAR  i) = ( 1,0)
gcodeNeed extra (PUSH_ARG  i)  = ( 1,0)
gcodeNeed extra (PUSH_ZAP_ARG  i)  = ( 1,0)
-- gcodeNeed extra (PUSH      i)  = ( 1,0)
gcodeNeed extra (PUSH_HEAP)    = ( 1,0)
gcodeNeed extra (POP       i)  = (-i,0)
-- gcodeNeed extra (SLIDE     i)  = (-i,0)
-- gcodeNeed extra (UNPACK    i)  = (i-1,0)
-- gcodeNeed extra (SELECTOR_EVAL)= ( 1,0)
-- gcodeNeed extra (RETURN)      = (-1,0)
-- gcodeNeed extra (RETURN_EVAL) = (-1,0)

-- gcodeNeed extra (APPLY     i)  = (-i,10+i*(3+extra))   -- Not always correct (10 is a large application but they can be larger)
gcodeNeed extra (HEAP_CADR  i) = (0,1)
gcodeNeed extra (HEAP_CVAL  i) = (0,1)
gcodeNeed extra (HEAP_INT  i)  = (0,1)
gcodeNeed extra (HEAP_CHAR  i) = (0,1)
gcodeNeed extra (HEAP_ARG  i)  = (0,1)
gcodeNeed extra (HEAP_ARG_ARG i j)  = (0,2)
gcodeNeed extra (HEAP_ARG_ARG_RET_EVAL i j)  = (0,2)
gcodeNeed extra (HEAP      i)  = (0,1)
gcodeNeed extra (HEAP_OFF  i)  = (0,1)
gcodeNeed extra (HEAP_CREATE)  = (0,1)
gcodeNeed extra (HEAP_SPACE)   = (0,1)

gcodeNeed extra (NEEDSTACK i)  = (0,0)
gcodeNeed extra (ALIGN )        = (0,0)
gcodeNeed extra (ALIGN_CONST)   = (0,0)
gcodeNeed extra (DATA_CREATE)   = (0,0)
gcodeNeed extra (DATA_CAPITEM _ _)=(0,0)
gcodeNeed extra (DATA_CONSTHEADER _ _)   = (0,0)
gcodeNeed extra (DATA_W  _)     = (0,0)
gcodeNeed extra (DATA_S  _)     = (0,0)
gcodeNeed extra (DATA_F  _)     = (0,0)
gcodeNeed extra (DATA_D  _)     = (0,0)
gcodeNeed extra (DATA_NOP)      = (0,0)    -- does not generate anything, used after DATA_D to keep 1 DATA/WORD
gcodeNeed extra (DATA_CLABEL _) = (0,0)
gcodeNeed extra (DATA_FLABEL _) = (0,0)
gcodeNeed extra (DATA_GLB _ _)  = (0,0)
gcodeNeed extra (DATA_VAP _)    = (0,0)
gcodeNeed extra (DATA_CAP _ _)  = (0,0)
gcodeNeed extra (DATA_CON  _ _) = (0,0)
gcodeNeed extra (DATA_CONW _ _) = (0,0)
gcodeNeed extra (DATA_CONP _ _) = (0,0)
-- gcodeNeed extra MATCHCON        = (0,0)	-- DAVID
-- gcodeNeed extra MATCHINT        = (0,0)	-- DAVID
gcodeNeed extra (MKIORETURN)	= (0,2)		-- MW
gcodeNeed extra g              = error ("gcodeNeed " ++ strGcode dummyIntState g) 

primStack prim = fst (primNeed 0 prim)

primNeed :: Int -> Prim -> (Int,Int)
primNeed extra (ADD	op) = (-1,opNeed extra op)
primNeed extra (SUB	op) = (-1,opNeed extra op)
primNeed extra (MUL	op) = (-1,opNeed extra op)
primNeed extra (ABS	op) = ( 0,opNeed extra op)
primNeed extra (SIGNUM  op) = ( 0,opNeed extra op)
primNeed extra (EXP	op) = ( 0,opNeed extra op)
primNeed extra (POW	op) = (-1,opNeed extra op)
primNeed extra (LOG	op) = ( 0,opNeed extra op)
primNeed extra (SQRT	op) = ( 0,opNeed extra op)
primNeed extra (SIN	op) = ( 0,opNeed extra op)
primNeed extra (COS	op) = ( 0,opNeed extra op)
primNeed extra (TAN	op) = ( 0,opNeed extra op)
primNeed extra (ASIN	op) = ( 0,opNeed extra op)
primNeed extra (ACOS	op) = ( 0,opNeed extra op)
primNeed extra (ATAN	op) = ( 0,opNeed extra op)
primNeed extra (SLASH	op) = (-1,opNeed extra op)
primNeed extra (CMP_EQ	op) = (-1,0)
primNeed extra (CMP_NE	op) = (-1,0)
primNeed extra (CMP_LT	op) = (-1,0)
primNeed extra (CMP_LE	op) = (-1,0)
primNeed extra (CMP_GT	op) = (-1,0)
primNeed extra (CMP_GE	op) = (-1,0)
primNeed extra (NEG	op) = ( 0,opNeed extra op)
primNeed extra (QUOT)     = (-1,2+extra)
primNeed extra (REM)      = (-1,2+extra)
primNeed extra (AND)      = (-1,0)
primNeed extra (OR)       = (-1,0)
primNeed extra (NOT)      = ( 0,0)
primNeed extra (ORD)      = ( 0,2+extra)
primNeed extra (CHR)      = ( 0,1+extra)
primNeed extra (SEQ)      = (-1,0)
primNeed extra (STRING)   = ( 0,3+2+3+3*extra)
primNeed extra (HGETS)   = (  0,3+2+3+3*extra )
primNeed extra (HGETC)   = (  0, 2+extra )
primNeed extra (HPUTC)   = ( -1, 2+extra )

opNeed :: Int -> PrimOp -> Int
opNeed extra OpWord   = 2+extra
opNeed extra OpFloat  = 2+extra
opNeed extra OpDouble = 3+extra


showId state i = fixStr (strIS state (toEnum i))

fixStr s
  | all isAlphaNum s = showString s
  | otherwise        = fixStr' s

fixStr' [] = id
fixStr' (c:cs)
  | isAlphaNum c = showChar c . fixStr' cs
  | otherwise    = showChar '_' . shows (fromEnum c) . fixStr' cs

showJump j i =
  showString " DB " . showString j . showChar ',' . shows l . showChar ',' . shows h . showChar '\n'
 where
  (h,l) = divMod i 256

showOp op =  showString " DB " . showString op . showChar '\n'

showOp1 op i   =  showString " DB " . showString op . showChar ',' . shows i . showChar '\n'
showOp2 op i j =  showString " DB " . showString op . showChar ',' . shows i . showChar ',' . shows j . showChar '\n'

showOp12 op i =
  if i < 0 then
    case (-i) `divMod` 256 of
      (0,l) -> showString " DB " . showString op . showString "_N1," . shows l . showChar '\n'
      (h,l) -> showString " DB " . showString op . showString "_N2," . shows l . showChar ',' . shows h . showChar '\n'
  else
    case i `divMod` 256 of
      (0,l) -> showString " DB " . showString op . showString "_P1," . shows l . showChar '\n'
      (h,l) -> showString " DB " . showString op . showString "_P2," . shows l . showChar ',' . shows h . showChar '\n'


gcodeHeader = showString "#include \"codemacros.h\"\n\n STARTBYTECODE\n AL\n"

shortQ pred defgen opstr arg  =
  case pred arg of
    (True,argstr) -> showOp (opstr ++ "_I" ++ argstr)
    _             -> defgen opstr arg

gcodeDump state (ALIGN)       = showString " AL\n"
-- gcodeDump state (ALIGN_CONST) = showString " AL_D\n"	-- DAVID
gcodeDump state (ALIGN_CONST) = showOp "ENDCODE" . showString " AL_D\n" --DAVID
gcodeDump state (NEEDHEAP i)  = shortQ shortNeedheap showOp12 "NEEDHEAP" i
gcodeDump state (NEEDSTACK i) = shortQ shortNeedstack showOp12 "NEEDSTACK" i
gcodeDump state (LABEL i)     = showString "DL(" . showId state i . showString ")\n"
gcodeDump state (LOCAL s i)    = showString "DL(" . showString s . showId state i . showString ")\n"
gcodeDump state (GLOBAL s i)   = let l = showString s . showId state i 
			       in showString "  EX L(" . l . showString ")\nDL(" . l . showString ")\n"
gcodeDump state (JUMP  i)    = showJump "JUMP" i
gcodeDump state (JUMPFALSE i) = showJump "JUMPFALSE" i		-- DAVID
gcodeDump state (PRIMITIVE)  = showOp "PRIMITIVE"

gcodeDump state (PRIM prim) = showOp (strPrim prim)

gcodeDump state (NOP)	     = showOp "NOP"

gcodeDump state (TABLESWITCH size pad ls) =		-- DAVID
    showOp1 "TABLESWITCH" size . someNops pad .
    someLabels ls
gcodeDump state (LOOKUPSWITCH size pad tls def) =	-- DAVID
    showOp1 "LOOKUPSWITCH" size . someNops pad .
    someLabels (concatMap (\(f,s) -> [f,s]) tls ++ [def])

gcodeDump state (MKIORETURN)     = showOp "MKIORETURN"	-- MW

{----------- DAVID ---------------
gcodeDump state (MATCHCON) = showOp "MATCHCON"
gcodeDump state (MATCHINT) = showOp "MATCHINT"
gcodeDump state (JUMPS_T)  = showOp "JUMPS_T"
gcodeDump state (JUMPTABLE l) = showString " JT(" . shows l . showString ")\n" 
gcodeDump state (JUMPS_L)  = showOp "JUMPS_L"
gcodeDump state (JUMPLENGTH v l) = showString " JT(" . shows v . showString ")\n JT(" . shows l . showString ")\n" 
gcodeDump state (JUMPLIST  v l) = showString " JT(" . shows v . showString ")\n JT(" . shows l . showString ")\n" 
------------ DAVID ---------------- -}

gcodeDump state (ZAP_ARG  i)    = shortQ shortZapArg showOp1  "ZAP_ARG" i
gcodeDump state (ZAP_STACK i)    = showOp12  "ZAP_STACK" i

-- Stack
gcodeDump state (PUSH_CADR  i)   = showOp12 "PUSH_CADR" i
gcodeDump state (PUSH_CVAL  i)   = showOp12 "PUSH_CVAL" i
gcodeDump state (PUSH_INT  i)    = showOp12 "PUSH_INT" i
gcodeDump state (PUSH_CHAR  i)   = showOp12 "PUSH_CHAR" i
gcodeDump state (PUSH_ARG  i)    = shortQ shortPushArg showOp1  "PUSH_ARG" i
gcodeDump state (PUSH_ZAP_ARG  i)= shortQ shortPushArg showOp1  "PUSH_ZAP_ARG" i
gcodeDump state (PUSH      i)    = shortQ shortPush showOp12 "PUSH" i
gcodeDump state (PUSH_HEAP)      = showOp "PUSH_HEAP"
gcodeDump state (POP       i)    = shortQ shortPop showOp12 "POP" i
gcodeDump state (SLIDE     i)    = showOp12  "SLIDE" i
gcodeDump state (UNPACK    i)    = showOp1  "UNPACK" i

-- selector
gcodeDump state (SELECTOR_EVAL)  = showOp "SELECTOR_EVAL"
gcodeDump state (SELECT     i) = showOp1 "SELECT" i

-- evaluation
gcodeDump state (APPLY     i) = showOp1 "APPLY" i
gcodeDump state (EVAL)        = showOp "EVAL"
gcodeDump state (RETURN)      = showOp "RETURN"
gcodeDump state (RETURN_EVAL) = showOp "RETURN_EVAL"

-- Heap
gcodeDump state (HEAP_CADR  i)   = showOp12 "HEAP_CADR" i
gcodeDump state (HEAP_CVAL  i)   = shortQ shortHeapCval showOp12 "HEAP_CVAL" i
gcodeDump state (HEAP_INT  i)    = showOp12 "HEAP_INT" i
gcodeDump state (HEAP_CHAR  i)   = showOp12 "HEAP_CHAR" i
gcodeDump state (HEAP_ARG  i)    = showOp1 "HEAP_ARG" i 
gcodeDump state (HEAP_ARG_ARG i j)  = showOp2 "HEAP_ARG_ARG" i j
gcodeDump state (HEAP_ARG_ARG_RET_EVAL i j)  = showOp2 "HEAP_ARG_ARG_RET_EVAL" i j
gcodeDump state (HEAP      i)    = shortQ shortHeap showOp12 "HEAP" i
gcodeDump state (HEAP_OFF  i)    = showOp12 "HEAP_OFF" i

gcodeDump state (HEAP_CREATE) = showOp "HEAP_CREATE"
gcodeDump state (HEAP_SPACE) = showOp "HEAP_SPACE"

gcodeDump state (DATA_CREATE)       = showString " DW 0\n"
gcodeDump state (DATA_CAPITEM a b) = showString " DB " . shows b . showChar ',' . shows a . showChar '\n'
gcodeDump state (DATA_CONSTHEADER a b) = showString " DW HW(" . shows a . showChar ',' . shows b . showString ")\n" 
gcodeDump state (DATA_W  i)       = showString " DW " . shows i . showChar '\n'
gcodeDump state (DATA_F  f)       = if floatIsDouble
                                    then showString " DD(" . shows f . showString ")\n"
                                    else showString " DF(" . shows f . showString ")\n"
gcodeDump state (DATA_S  s)       = chopString s
 where
  chopString "" = showString " DB 0\n AL\n"  -- DAVID
  chopString x  = case splitAt (40::Int) x of
		    (x,xs) -> showString " DS " . showString (strStr x) . showString "\n" . chopString xs
gcodeDump state (DATA_D  d)       = showString " DD(" . shows d . showString ")\n"
gcodeDump state (DATA_NOP)        = id
gcodeDump state (DATA_CLABEL i)   = showString " DW L(" . showCLabel state i . showString ")\n"
gcodeDump state (DATA_FLABEL i)   = showString " DW L(" . showString foreignfun . showId state i . showString ")\n"
gcodeDump state (DATA_GLB s 0)    = showString " DW L(" . showString s . showString ")\n"
gcodeDump state (DATA_GLB s i)    = showString " DW L(" . showString s . showId state i . showString ")\n"
gcodeDump state (DATA_VAP i)      = showString " DW VAPTAG(" . showString fun . showId state i . showString ")\n"
gcodeDump state (DATA_CAP  i s)   = showString " DW CAPTAG(" . showString fun . showId state i .  showChar ',' 
							     . shows s . showString ")\n"
gcodeDump state (DATA_CON  s c)   = showString " DW CONSTR(" . shows c .  showChar ','
							     . shows s .  showChar ','
							     . showChar '0' .  showString ")\n"
gcodeDump state (DATA_CONW s e)   = showString " DW CONSTRW(" . shows s .  showChar ','
					 		      . shows e .  showString ")\n"
gcodeDump state (DATA_CONP s e)   = showString " DW CONSTRP(" . shows s .  showChar ','
					 		      . shows e .  showString ")\n"


someNops :: Int -> String -> String		-- DAVID 
someNops pad = foldr (.) id (take pad (repeat (showOp "NOP")))

someLabels :: [ Int ] -> String -> String	-- DAVID
someLabels cls = foldr (.) id (map (\l -> showString " JT(" . shows l .
                                          showString ")\n") cls)
