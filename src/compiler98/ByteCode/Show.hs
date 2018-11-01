-- | Functions to convert bytecode into strings
module ByteCode.Show (strBCode,strIns) where

import Util.Extra
import ByteCode.Type
import qualified Data.Map as Map
import Prim
import Id(Id)
import Maybe(isJust, fromJust)
import Data.List(intersperse)
import qualified Data.Set as Set

-- | Convert a list of bytecode declarations into a human-readable string
strBCode :: (Id -> String) -- ^ A function to print identifiers
         -> BCModule       -- ^ The declarations to print
         -> String

strBCode p m = mixLine (map (strBDecl p) $ bcmDecls m)


strBDecl :: (Id -> String) -> BCDecl -> String
strBDecl p (Fun name pos arity args code consts pr stack numDict fl) =
   (if pr then "PRIMITIVE " else "") ++

   "FUN " ++ name ++ "{" ++ show name ++"}(" ++ show arity ++ "/" ++ show numDict ++ ") " ++ show args ++ "\n" ++
   " STACK " ++ show stack ++ "\n" ++
             strCode "   " p code ++
   "\n FLAGS " ++ show fl ++
   "\n---- ConstTable ---------------\n" ++
   mix "\n" (map (strConst p) (Map.toList consts)) ++
   "\n-------------------------------\n"
strBDecl p (Prim name pos) = "PRIM " ++ name ++ "\n"
strBDecl p (Con name pos arity tag) =
   "CON " ++ name ++ " " ++ show tag ++ "(" ++ show arity ++ ")\n"

strBDecl p (External name pos arity cname cc fl) = "EXTERNAL " ++ name ++ "[" ++ cname ++ "]("++ show arity ++") flags="++show fl++"\n"


strCode :: String -> a -> Code -> String
strCode o p (CLinear is) = o ++ "{\n" ++ strLinear (' ':o) p is ++ o ++ "}"
strCode o p (CGraph start graph jump) =
    o ++ "start "++strGLabel start++"\n" ++
      concatMap (strGraph (' ':o) p jump) (Map.toList graph) ++ "\n"
strCode o p (CWrites ws) =
    "[" ++ mix ", " (map strWrite ws) ++ "]"

strGraph :: String -> a -> Map.Map GLabel (Set.Set GLabel) -> (GLabel,GraphNode) -> String
strGraph o p jump (label, graph) =
    strGLabel label ++ " " ++ strJumpers o p jump label ++ "\n" ++
    strGraph' o p graph


strGraph' :: String -> a -> GraphNode -> String
strGraph' o p (GLinear ins isEval next) =
    (if isEval then "[eval]\n" else "") ++
    strLinear o p ins ++
    o ++ "jump " ++ strGLabel next ++ "\n"

strGraph' o p (GCase int tas def) =
    o ++ (if int then " case_int" else " case") ++ " {" ++ mix ", " (map strAlt tas') ++ ", _ -> " ++
          sdef  ++ "}\n"
    where
    sdef = maybe "" strGLabel def
    tas' = map (\(tag,GLabel label) -> (tag,label)) tas

strGraph' o p (GIf true false) =
    o ++ "if " ++ strGLabel true ++ ", " ++ strGLabel false ++ "\n"

strGraph' o p (GReturn) =
    o ++ "return\n"
strGraph' o p (GDead) =
    o ++ "dead\n"

strJumpers :: Ord a => b -> c -> Map.Map a (Set.Set GLabel) -> a -> String
strJumpers o p jump to =
    case Map.lookup to jump of
        Nothing -> "{}"
        Just froms -> "<- {" ++ mix ", " (Set.toList $  Set.map strGLabel froms) ++ "}"

strGLabel :: GLabel -> String
strGLabel (GLabel label) = strLabel label

{-
strCode o p code = mix "\n" (map (strBlock o p) code)

strBlock o p (BLinear is)  = o ++ "{\n" ++ strLinear (' ':o) p is ++ o ++ "}"
strBlock o p (BCase i as)  = o ++ "case ["++show i++"]\n" ++ strAlts (' ':o) p as
strBlock o p (BIf t f)     = o ++ "if\n" ++ strCode (' ':o) p t ++ o ++ "else\n" ++ o ++ strCode (' ':o) p f
strBlock o p (BFatBar esc e f) = o ++ esc' ++ "fatbar {\n" ++ strCode (' ':o) p e ++ "\n" ++ o ++ " |\n" ++ o ++
                                 strCode (' ':o) p f ++ o ++ "\n" ++ o ++ "}"
    where
    esc' = if esc then "escaping " else ""

strBlock o p (BWrite ws)   = o ++ "writes [" ++ mix "," (map strWrite ws) ++ "]"
strBlock o p (BFail)       = o ++ "fail"

strWrite (WUByte n)        = "UB " ++ show n
strWrite (WUShort n)       = "US " ++ show n
strWrite (WLabel j)        = "L " ++ show j
strWrite (WByte n)         = "B" ++ show n
strWrite (WShort n)        = "S" ++ show n
-}

strLinear :: String -> a -> [(Ins,UseSet)] -> String
strLinear o p []          = ""
strLinear o p ((i,us):is) =
    case i of
        LABEL n -> strLabel n ++ "\t\t\t" ++ strSet o p us ++ "\n"
        _       -> o ++ strIns i ++ "\t\t" ++ strSet o p us ++ "\n"
    ++ strLinear o p is

strAlts o p []            = ""
strAlts o p ((t,c):as)    =
    o ++ show t ++ " -> \n" ++ strCode (' ':o) p c ++ "\n" ++ strAlts o p as

strSet o p (UseSet d gs ns) = show d ++ " <" ++ (concat $ intersperse "," gs) ++ " | " ++ (concat $ intersperse "," $ Set.toList ns) ++ ">"

strConst p (n, CGlobal i t)  = show n ++ " " ++ strType t ++ " " ++ i
strConst p (n, CInt i)       = show n ++ " INT " ++ show i
strConst p (n, CInteger i)   = show n ++ " INTEGER " ++ show i
strConst p (n, CFloat i)     = show n ++ " FLOAT " ++ show i
strConst p (n, CDouble i)    = show n ++ " DOUBLE " ++ show i
strConst p (n, CString s)    = show n ++ " STRING '"++s++"'"
strConst p (n, CPos x)       = show n ++ " POS "++show x
strConst p (n, CVarDesc s x) = show n ++ " VAR_DESC '"++s++"' "++show x

strType GCAF = "CAF"
strType GFUN = "FUN"
strType GFUN0 = "FUN0"
strType GCON = "CON"
strType GZCON = "ZCON"
strType GPRIM = "PRIM"

-- | Convert a single bytecode instruction into a string
strIns :: Ins -> String

strIns (END_CODE)      = "END_CODE"
strIns (START_FUN)     = "START_FUN"
strIns (NEED_STACK n)  = "NEED_STACK " ++ show n
strIns (NEED_HEAP n)   = "NEED_HEAP " ++ show n
strIns (PUSH n)        = "PUSH " ++ show n
strIns (PUSH_ZAP n)    = "PUSH_ZAP " ++ show n
strIns (ZAP_STACK n)   = "ZAP_STACK " ++show n
strIns (PUSH_ARG n)    = "PUSH_ARG " ++ show n
strIns (PUSH_ZAP_ARG n)= "PUSH_ZAP_ARG " ++ show n
strIns (ZAP_ARG n)     = "ZAP_ARG "++show n
strIns (PUSH_INT n)    = "PUSH_INT " ++ show n
strIns (PUSH_CHAR n)   = "PUSH_CHAR " ++ show n
strIns (PUSH_CONST n)  = "PUSH_CONST " ++ show n
strIns (MK_AP r n)     = "MK_AP " ++ show r ++ " " ++ show n
strIns (MK_PAP r n)    = "MK_PAP " ++ show r ++ " " ++ show n
--strIns (CALL r n)      = "CALL " ++ show r ++ " " ++ show n
--strIns (TAIL_CALL r n) = "TAIL_CALL " ++ show r ++ " " ++ show n
strIns (MK_CON r n)    = "MK_CON " ++ show r ++ " " ++ show n
strIns (APPLY n)       = "APPLY " ++ show n
strIns (UNPACK n)      = "UNPACK " ++ show n
strIns (SLIDE n)       = "SLIDE " ++ show n
strIns (POP n)         = "POP " ++ show n
strIns (ALLOC n)       = "ALLOC "++ show n
strIns (UPDATE n)      = "UPDATE "++ show n
strIns (RETURN)        = "RETURN"
strIns (EVAL)          = "EVAL"
strIns (RETURN_EVAL)   = "RETURN_EVAL"
strIns (NOP)           = "NOP"
strIns (P_ADD op)      = "ADD" ++ strOp op
strIns (P_SUB op)      = "SUB" ++ strOp op
strIns (P_MUL op)      = "MUL" ++ strOp op
strIns (P_DIV op)      = "DIV" ++ strOp op
strIns (P_MOD op)      = "MOD" ++ strOp op
strIns (P_CMP_EQ op)   = "CMP_EQ" ++ strOp op
strIns (P_CMP_NE op)   = "CMP_NE" ++ strOp op
strIns (P_CMP_LE op)   = "CMP_LE" ++ strOp op
strIns (P_CMP_LT op)   = "CMP_LT" ++ strOp op
strIns (P_CMP_GE op)   = "CMP_GE" ++ strOp op
strIns (P_CMP_GT op)   = "CMP_GT" ++ strOp op
strIns (P_NEG op)      = "NEG" ++ strOp op
strIns (P_STRING)      = "STRING"
strIns (P_FROM_ENUM)   = "FROM_ENUM"
strIns (PRIMITIVE)     = "PRIMITIVE"
strIns (EXTERNAL)      = "EXTERNAL"
strIns (SELECTOR_EVAL) = "SELECTOR_EVAL"
strIns (SELECT n)      = "SELECT " ++ show n

strIns (CASE i as df)  = icase ++" {" ++ mix ", " (map strAlt as) ++ sdf ++ "}"
    where
    sdf = if isJust df then ", _ -> " ++ strLabel (fromJust df) else ""
    icase = if i then "INT_CASE" else "CASE"
strIns (STOP)          = "STOP"

strIns (LOOKUP_SWITCH as md) = "LOOKUP_SWITCH {" ++ mix ", " (map strAlt as) ++ ", _ -> " ++ strLabel md ++ "}"
strIns (INT_SWITCH as md)    = "INT_SWITCH {" ++ mix ", " (map strAlt as) ++ ", _ -> " ++ strLabel md ++ "}"
strIns (TABLE_SWITCH as)     = "TABLE_SWITCH {" ++ mix ", " (map strLabel as) ++ "}"


strIns (JUMP_FALSE f)  = "JUMP_FALSE " ++ strLabel f
strIns (JUMP f)        = "JUMP " ++ strLabel f
strIns (LABEL f)       = "LABEL " ++ strLabel f

strIns (TAP p)         = "TAP " ++ show p
strIns (TCON p)        = "TCON " ++ show p
strIns (TPRIMCON p)    = "TPRIMCON " ++ show p
strIns (TAPPLY p n)    = "TAPPLY "++show p++" "++show n
strIns (TIF p)         = "TIF " ++ show p
strIns (TGUARD p)      = "TGUARD " ++ show p
strIns (TCASE p)       = "TCASE " ++ show p
strIns (TPRIMAP p n)   = "TPRIMAP "++show p++" "++show n
strIns (TPRIMRESULT p) = "TPRIMRESULT " ++show p
strIns (TRETURN)       = "TRETURN"
strIns (TPUSH)         = "TPUSH"
strIns (TPUSHVAR p)    = "TPUSHVAR "++show p
strIns (TPROJECT p)    = "TPROJECT "++show p

strIns (COMMENT c)     = "-- "++c

strOp (OpWord) = "_W"
strOp (OpFloat) = "_F"
strOp (OpDouble) = "_D"

strAlt (t,l) = show t ++ " -> " ++ strLabel l

strWrite (WUByte n) = "UB" ++ show n
strWrite (WUShort n) = "US" ++ show n
strWrite (WLabel n j) = "(L"++show n++" "++strLabel j++")"
strWrite (WByte n)  = "B"++ show n
strWrite (WShort n) = "S" ++ show n


strLabel i = "L_"++show i


