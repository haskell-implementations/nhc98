module Gcode
	( GALT(..),Gcode(..),showCLabel,strGcode,strGcodeRel
	, IntState, Prim(..), PrimOp(..),Pos) where

import Prim(Prim(..),PrimOp(..),strPrim)
import IntState(tidIS,strIS,IntState)
import TokenId(dropM)
import Util.Extra(Pos)

data GALT = GALT_CON Int | GALT_INT Int deriving (Eq)

data Gcode 
  = STARTFUN Int Int
  | NEEDHEAP Int
  | NEEDSTACK Int
  | LABEL Int
  | LOCAL String Int
  | GLOBAL String Int
  | JUMP  Int
  | JUMPFALSE Int				-- DAVID 
  | PRIMITIVE
  | CASE  [(GALT,Int)] (Maybe (Int,Int)) -- alt and maybe default
  | PRIM Prim

  | NOP

  | TABLESWITCH  Int Int [Int]           -- size, pad, labels             DAVID
  | LOOKUPSWITCH Int Int [(Int,Int)] Int -- size, pad, [(tag,label)] def  DAVID
  | MKIORETURN					-- for FFI, added by MW
 
{---------------- DAVID ------------------
  | MATCHCON    	-- set matchreg to constructor of value on top of stack
  | MATCHINT    	-- set matchreg to int on top of stack
  | JUMPS_T
  | JUMPTABLE Int       -- label 2 bytes
  | JUMPS_L
  | JUMPLENGTH Int Int  -- size default
  | JUMPLIST  Int Int   -- if matchreg == first int jump to label in second int
----------------- DAVID -------------------}

  | ZAP_STACK  Int
  | ZAP_ARG   Int

-- Stack
  | PUSH_CADR  Int
  | PUSH_CVAL  Int
  | PUSH_INT  Int
  | PUSH_CHAR  Int
  | PUSH_INTEGER  Integer
  | PUSH_FLOAT  Float
  | PUSH_DOUBLE  Double
  | PUSH_STRING  String
  | PUSH_ARG  Int	-- arg(1..)
  | PUSH_ZAP_ARG  Int	-- arg(1..)
  | PUSH      Int	-- stackoffset(0..)
  | PUSH_HEAP
  | PUSH_GLB  String Int

  | POP       Int	-- size
  | SLIDE     Int	-- remove
  | UNPACK    Int

-- selector functions
  | SELECTOR_EVAL	-- push the first (and only) argument and evaluate is
  | SELECT    Int       -- TOS is a constructor, replace it with it's i:th argument

-- evaluation
  | APPLY     Int	-- extra arguments on the stack (1..)
  | EVAL
  | EVALUATED	        -- message from FixGcode to GcodeOp1 that tos i evaluated

  | RETURN
  | RETURN_EVAL

-- Heap
  | HEAP_CADR  Int
  | HEAP_CVAL  Int
  | HEAP_INT  Int
  | HEAP_CHAR  Int
  | HEAP_INTEGER  Integer
  | HEAP_FLOAT  Float
  | HEAP_DOUBLE  Double
  | HEAP_STRING  String
  | HEAP_ARG  Int	-- arg(1..)
  | HEAP_ARG_ARG Int Int-- arg(1..) arg(1..)
  | HEAP_ARG_ARG_RET_EVAL Int Int-- arg(1..) arg(1..) then RETURN_EVAL
  | HEAP      Int	-- stackoffset(0..)
  | HEAP_GLB  String Int

  | HEAP_CON  Int	-- ident
  | HEAP_VAP  Int	-- ident
  | HEAP_CAP  Int Int   -- ident size
  | HEAP_OFF  Int	-- hpoffset

  | HEAP_STATIC   Int Int -- Producer Construction (Module and Type is easy to get later)
  | HEAP_CREATE         -- Initiate dynamic
  | HEAP_SPACE          -- empty word, used for retainer and enumeration fields

  | ALIGN               -- pointer
  | ALIGN_CONST         -- double
  | DATA_CREATE
  | DATA_CAPITEM Int Int -- little endian
  | DATA_CONSTHEADER Int Int
  | DATA_W  Int
  | DATA_S  String
  | DATA_F  Float
  | DATA_D  Double
  | DATA_NOP    -- does not generate anything, used after DATA_D to keep 1 DATA/WORD
  | DATA_CLABEL Int	-- call primitive C function
  | DATA_FLABEL Int	-- call foreign imported function
  | DATA_GLB String Int
  | DATA_VAP Int
  | DATA_CAP Int Int
  | DATA_CON  Int Int   -- size cno
  | DATA_CONW Int Int   -- size extra
  | DATA_CONP Int Int   -- size extra
  deriving (Eq)

showsL l s = "L_" ++ shows l s

showsR l s = shows l s

strGcode state g = strGcodePrim showsL state g
strGcodeRel state g = strGcodePrim showsR state g


strGcodePrim sL state (STARTFUN pos i) = "STARTFUN  " ++ shows i "(" ++ strIS state (toEnum i) ++ ")\n" 
strGcodePrim sL state (NEEDHEAP i) = "  NEEDHEAP " ++ shows i "\n"
strGcodePrim sL state (NEEDSTACK i) = "  NEEDSTACK " ++ shows i "\n"
strGcodePrim sL state (LABEL i)    = showsL i ":\n"
strGcodePrim sL state (LOCAL s i)    =  s++strIS state (toEnum i) ++ ":\n" 
strGcodePrim sL state (GLOBAL s i) = let str = s++strIS state (toEnum i) in "  EXPORT " ++ str ++ "\n" ++ str ++ ":\n" 
strGcodePrim sL state (JUMP  i)    = "  JUMP  " ++ sL i "\n"
strGcodePrim sL state (JUMPFALSE i)  = "  JUMPFALSE " ++ sL i "\n"
strGcodePrim sL state (PRIMITIVE)    = "  PRIMITIVE\n"

strGcodePrim sL state (PRIM prim) = "  " ++ strPrim prim ++ "\n"
strGcodePrim sL state (CASE alts def) = "  CASE\n" ++ concatMap (strGalt state) alts 
				++ (case def of
                                     Just (def,pop) -> "    _ => " ++ sL def "  (pop " ++ shows pop ")"
                                     Nothing -> "") ++ "\n"

strGcodePrim sL state (NOP) = "  NOP\n"

strGcodePrim sL state (TABLESWITCH size pad ls) =       -- DAVID
        "  TABLESWITCH " ++ show size ++ " " ++ show pad ++
        " { " ++ foldr (\i s -> sL i (' ' : s)) "}\n" ls

strGcodePrim sL state (LOOKUPSWITCH size pad tls def) = -- DAVID
        "  LOOKUPSWITCH " ++ show size ++ " " ++ show pad ++
        " { " ++ foldr (\(t,i) s -> '(' : show t ++ "," ++ sL i (") " ++ s))
                       (show def ++ "}\n") tls
strGcodePrim sL state (MKIORETURN) = "  MKIORETURN\n"	-- MW

{------------ DAVID ----------------
strGcodePrim sL state (MATCHCON) = "  MATCHCON\n"
strGcodePrim sL state (MATCHINT) = "  MATCHINT\n"
strGcodePrim sL state (JUMPS_T)  = "  JUMPS_T\n"
strGcodePrim sL state (JUMPTABLE l) = "    JUMPTABLE " ++ sL l "\n"
strGcodePrim sL state (JUMPS_L)  = "  JUMPS_L\n"
strGcodePrim sL state (JUMPLENGTH s l) = "    JUMPLENGTH " ++ shows s ( " def " ++ sL l "\n")
strGcodePrim sL state (JUMPLIST  v l)  = "    JUMPLIST    con:" ++ shows v ( " => " ++ sL l "\n")
------------ DAVID -------------- -}

strGcodePrim sL state (ZAP_STACK  i)  = "  ZAP_STACK " ++ shows i "\n"
strGcodePrim sL state (ZAP_ARG  i)   = "  ZAP_ARG " ++ shows i "\n"

-- Stack
strGcodePrim sL state (PUSH_CADR  i)   = "  PUSH_CADR " ++ shows i "\n"
strGcodePrim sL state (PUSH_CVAL  i)   = "  PUSH_CVAL " ++ shows i "\n"
strGcodePrim sL state (PUSH_INT  i)    = "  PUSH_INT " ++ shows i "\n"
strGcodePrim sL state (PUSH_CHAR  i)   = "  PUSH_CHAR " ++ shows i "\n"
strGcodePrim sL state (PUSH_STRING  i) = "  PUSH_STRING " ++ shows i "\n"
strGcodePrim sL state (PUSH_INTEGER  i)= "  PUSH_INTEGER " ++ shows i "\n"
strGcodePrim sL state (PUSH_FLOAT  i)  = "  PUSH_FLOAT " ++ shows i "\n"
strGcodePrim sL state (PUSH_DOUBLE  i) = "  PUSH_DOUBLE " ++ shows i "\n"
strGcodePrim sL state (PUSH_ARG  i)    = "  PUSH_ARG " ++ shows i "\n"
strGcodePrim sL state (PUSH_ZAP_ARG  i)    = "  PUSH_ZAP_ARG " ++ shows i "\n"
strGcodePrim sL state (PUSH      i)    = "  PUSH " ++ shows i "\n"
strGcodePrim sL state (PUSH_HEAP)      = "  PUSH_HEAP\n"
strGcodePrim sL state (PUSH_GLB  s i)  = "  PUSH_GLB " ++ s ++ strIS state (toEnum i) ++ " (" ++ shows i ")\n"
strGcodePrim sL state (POP       i)    = "  POP " ++ shows i "\n"
strGcodePrim sL state (SLIDE     i)    = "  SLIDE " ++ shows i "\n"
strGcodePrim sL state (UNPACK    i)    = "  UNPACK " ++ shows i "\n"

-- selector
strGcodePrim sL state (SELECTOR_EVAL)  = "  SELECTOR_EVAL\n"
strGcodePrim sL state (SELECT    i)    = "  SELECT " ++ shows i "\n"

-- evaluation
strGcodePrim sL state (APPLY     i) = "  APPLY " ++ shows i "\n"
strGcodePrim sL state (EVAL)        = "  EVAL\n"
strGcodePrim sL state (EVALUATED)   = "  EVALUATED\n"
strGcodePrim sL state (RETURN)      = "  RETURN\n"
strGcodePrim sL state (RETURN_EVAL) = "  RETURN_EVAL\n"

-- Heap
strGcodePrim sL state (HEAP_CADR  i)   = "  HEAP_CADR " ++ shows i "\n"
strGcodePrim sL state (HEAP_CVAL  i)   = "  HEAP_CVAL " ++ shows i "\n"
strGcodePrim sL state (HEAP_INT  i)    = "  HEAP_INT " ++ shows i "\n"
strGcodePrim sL state (HEAP_CHAR  i)   = "  HEAP_CHAR " ++ shows i "\n"
strGcodePrim sL state (HEAP_STRING  i) = "  HEAP_STRING " ++ shows i "\n"
strGcodePrim sL state (HEAP_INTEGER  i)= "  HEAP_INTEGER " ++ shows i "\n"
strGcodePrim sL state (HEAP_FLOAT  i)  = "  HEAP_FLOAT " ++ shows i "\n"
strGcodePrim sL state (HEAP_DOUBLE  i) = "  HEAP_DOUBLE " ++ shows i "\n"
strGcodePrim sL state (HEAP_ARG  i)    = "  HEAP_ARG " ++ shows i "\n"
strGcodePrim sL state (HEAP_ARG_ARG i j)="  HEAP_ARG_ARG " ++ shows i " " ++ shows j "\n"
strGcodePrim sL state (HEAP_ARG_ARG_RET_EVAL i j)="  HEAP_ARG_ARG_RET_EVAL " ++ shows i " " ++ shows j "\n"
strGcodePrim sL state (HEAP      i)    = "  HEAP " ++ shows i "\n"
strGcodePrim sL state (HEAP_GLB  s i)    = "  HEAP_GLB " ++ s ++ strIS state (toEnum i) ++ " (" ++ shows i ")\n"
strGcodePrim sL state (HEAP_CON  i)    = "  HEAP_CON " ++ shows i (" (" ++ strIS state (toEnum i) ++ ")\n")
strGcodePrim sL state (HEAP_VAP  i)    = "  HEAP_VAP " ++ shows i (" (" ++ strIS state (toEnum i) ++ ")\n")
strGcodePrim sL state (HEAP_CAP  i s)  = "  HEAP_CAP " ++ strIS state (toEnum i) ++ ":" ++ shows s (" (" ++ shows i ")\n" )
strGcodePrim sL state (HEAP_OFF  i)    = "  HEAP_OFF " ++ shows i "\n"

strGcodePrim sL state (HEAP_STATIC p c) = "  HEAP_STATIC " ++ strIS state (toEnum p) ++ " " ++ strIS state (toEnum c) ++ "\n"
strGcodePrim sL state (HEAP_CREATE)     = "  HEAP_CREATE\n"
strGcodePrim sL state (HEAP_SPACE)      = "  HEAP_SPACE\n"

strGcodePrim sL state (DATA_CREATE)     = "  DATA_CREATE\n"
strGcodePrim sL state (DATA_CAPITEM a b) = "  DATA_CAPITEM " ++ shows a (' ':shows b "\n")
strGcodePrim sL state (DATA_CONSTHEADER a b)     = "  DATA_CONSTHEADER " ++ shows a (' ':shows b "\n")
strGcodePrim sL state (DATA_W  i)       = "  DATA_W " ++ shows i "\n"
strGcodePrim sL state (DATA_F  f)       = "  DATA_F " ++ shows f "\n"
strGcodePrim sL state (DATA_S  s)       = "  DATA_S " ++ shows s "\n"
strGcodePrim sL state (DATA_D  d)       = "  DATA_D " ++ shows d "\n"
strGcodePrim sL state (DATA_NOP)        = "  DATA_NOP\n"
strGcodePrim sL state (DATA_CLABEL i)   = "  DATA_CLABEL " ++ showCLabel state i ( " (" ++ shows i ")\n")
strGcodePrim sL state (DATA_FLABEL i)   = "  DATA_FLABEL " ++ showCLabel state i ( " (" ++ shows i ")\n")
strGcodePrim sL state (DATA_GLB s i)    = "  DATA_GLB " ++ s ++ strIS state (toEnum i) ++ " (" ++ shows i ")\n"
strGcodePrim sL state (DATA_VAP i)      = "  DATA_VAP " ++ shows i "(" ++ strIS state (toEnum i) ++ ")\n" 
strGcodePrim sL state (DATA_CAP  i s)   = "  DATA_CAP " ++ strIS state (toEnum i) ++ ":" ++ shows s (" (" ++ shows i ")\n" )
strGcodePrim sL state (DATA_CON  s c)   = "  DATA_CON " ++ shows s (' ':shows c "\n")
strGcodePrim sL state (DATA_CONW s e)   = "  DATA_CONW " ++ shows s (' ':shows e "\n")
strGcodePrim sL state (DATA_CONP s e)   = "  DATA_CONP " ++ shows s (' ':shows e "\n")

strGcodePrim sL state (ALIGN) = "\n\n  ALIGN\n"
strGcodePrim sL state (ALIGN_CONST) = "\n\n  ALIGN_CONST\n"


strGalt state (GALT_CON i,l) = "    " ++ shows i " (" ++ strIS state (toEnum i) ++ ")=> " ++ showsL l "\n"  
strGalt state (GALT_INT i,l) = "    " ++ shows i " => " ++ showsL l "\n"

showCLabel state i =  shows (dropM (tidIS state (toEnum i)))
