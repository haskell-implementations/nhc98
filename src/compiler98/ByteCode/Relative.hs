-- | Convert absolute labeled jumps to relative offset jumps, also
--   converts bytecode into \"write\" format
module ByteCode.Relative (bcRelative) where

import ByteCode.Type
import qualified Data.Map as Map
import Maybe(fromJust)
import Util.Extra

---------------------------------------------------------------------------------------------------

type Labels = Map.Map Label Int
type Writes = [Write] -> [Write]

---------------------------------------------------------------------------------------------------

type CodePosn = Int

-- | Convert to relative jumps and convert to \"write\" format
bcRelative :: BCModule -> BCModule
bcRelative m = m { bcmDecls = map relative $ bcmDecls m }

relative :: BCDecl -> BCDecl
relative (Fun n p z as (CLinear is) cn pr st nd fl) = Fun n p z as (CWrites ws') cn pr st nd fl
    where
    (ws,ls) = lCode (map fst is) 0 Map.empty
    ws'     = patch (ws []) ls
relative x                           = x

lCode :: [Ins] -> CodePosn -> Labels -> (Writes, Labels)
lCode []           n ls = (id, ls)
lCode (LABEL j:is) n ls = lCode is n (Map.insert j n ls)
lCode (i:is)       n ls = ((ws++) . wss, ls')
    where
    ws        = lIns i n
    (wss,ls') = lCode is (n+wSize ws) ls


wSize :: [Write] -> Int
wSize ws = sum $ map wSizeOf ws

wSizeOf :: Write -> Int
wSizeOf (WUByte _)      = 1
wSizeOf (WUShort _)     = 2
wSizeOf (WLabel _ _ )   = 2
wSizeOf (WByte _)       = 1
wSizeOf (WShort _)    = 2

divUp :: Int -> Int -> Int
divUp x y | m == 0    = d
          | otherwise = d + 1
   where (d,m) = x `divMod` y

lIns :: Ins -> CodePosn -> [Write]
lIns (START_FUN)           p = []
lIns (END_CODE)            p = lOp tEndCode
lIns (NEED_HEAP n)         p = lOpLt tNeedHeap             32 n
lIns (NEED_STACK n)        p = lOpLt tNeedStack            16 n
lIns (PUSH n)              p = lOp12i tPush             iPush n
lIns (PUSH_ZAP n)          p = lOp12i tPushZap       iPushZap n
lIns (ZAP_STACK n)         p = lOp12i tZapStack             0 n
lIns (PUSH_ARG n)          p = lOp1i tPushArg        iPushArg n
lIns (PUSH_ZAP_ARG n)      p = lOp1i tPushZapArg  iPushZapArg n
lIns (ZAP_ARG n)           p = lOp1i tZapArg                0 n
lIns (PUSH_INT n)          p = lOp12iS tPushInt      iPushInt n
lIns (PUSH_CHAR n)         p = lOp1i tPushChar              0 n
lIns (PUSH_CONST n)        p = lOp12i tPushConst   iPushConst n
lIns (MK_AP n _)           p = lOp12i tMkAp             iMkAp n
lIns (MK_PAP f n)          p = lOp12i_1 tMkPap              0 f n
lIns (APPLY n)             p = lOp1i' 1 tApply         iApply n
lIns (MK_CON n _)          p = lOp12i tMkCon           iMkCon n
lIns (UNPACK _)            p = lOp tUnpack
lIns (SLIDE n)             p = lOp12i' 1 tSlide        iSlide n
lIns (POP n)               p = lOp12i tPop                  0 n
lIns (ALLOC n)             p = lOp12i tAlloc                0 n
lIns (UPDATE n)            p = lOp12i tUpdate               0 n
lIns (SELECT n)            p = lOp12i tSelect         iSelect n
lIns (RETURN)              p = lOp tReturn
lIns (EVAL)                p = lOp tEval
lIns (RETURN_EVAL)         p = lOp tReturnEval
lIns (TABLE_SWITCH as)     p = lOpTable tTableSwitch      p as
lIns (LOOKUP_SWITCH as md) p = lOpLookup tLookupSwitch    p WUShort as md
lIns (INT_SWITCH as md)    p = lOpLookup tIntSwitch       p WShort as md
lIns (JUMP_FALSE j)        p = lOpJ tJumpFalse            p j
lIns (JUMP j)              p = lOpJ tJump                 p j
lIns (P_ADD op)            p = lOpPrim tAdd               op
lIns (P_SUB op)            p = lOpPrim tSub               op
lIns (P_MUL op)            p = lOpPrim tMul               op
lIns (P_DIV op)            p = lOpPrim tDiv               op
lIns (P_MOD op)            p = lOpPrim tMod               op
lIns (P_CMP_EQ op)         p = lOpPrim tEq                op
lIns (P_CMP_NE op)         p = lOpPrim tNe                op
lIns (P_CMP_LE op)         p = lOpPrim tLe                op
lIns (P_CMP_LT op)         p = lOpPrim tLt                op
lIns (P_CMP_GE op)         p = lOpPrim tGe                op
lIns (P_CMP_GT op)         p = lOpPrim tGt                op
lIns (P_NEG op)            p = lOpPrim tNeg               op
lIns (P_STRING)            p = lOp tString
lIns (P_FROM_ENUM)         p = lOp tFromEnum
lIns (PRIMITIVE)           p = lOp tPrimitive
lIns (EXTERNAL)            p = lOp tExternal
lIns (SELECTOR_EVAL)       p = lOp tSelectorEval

lIns (TAP i)               p = lOp12i tTAp                0 i
lIns (TCON i)              p = lOp12i tTCon               0 i
lIns (TPRIMCON i)          p = lOp12i tTPrimCon           0 i
lIns (TAPPLY i n)          p = lOp12i_1 tTApply           0 i n
lIns (TIF i)               p = lOp12i tTIf                0 i
lIns (TGUARD i)            p = lOp12i tTGuard             0 i
lIns (TCASE i)             p = lOp12i tTCase              0 i
lIns (TRETURN)             p = lOp tTReturn
lIns (TPRIMAP i n)         p = lOp12i tTPrimAp            0 i
lIns (TPRIMRESULT i)       p = lOp12i tTPrimResult        0 i
lIns (TPUSH)               p = lOp tTPush
lIns (TPUSHVAR i)          p = lOp12i tTPushVar           0 i
lIns (TPROJECT i)          p = lOp12i tTProject           0 i

lIns x                     p = error $ "lIns no code for "++show x

lOp :: Int -> [Write]
lOp t
    | isUByte t = [ WUByte t ]
    | otherwise = error $ "lOp: tag is too big!" ++ show t


lOpLt :: Int -> Int -> Int -> [Write]
lOpLt t i n
    | n <= i    = lOp t
    | otherwise = lOp (t+1) ++ [ WUByte (n `divUp` i) ]

lOp1i' :: Int -> Int -> Int -> Int -> [Write]
lOp1i' x t i n
    | n < i && n >= x = lOp (t+1+(n-x))
    | otherwise       = lOp t ++ [ WUByte n ]

lOp1i :: Int -> Int -> Int -> [Write]
lOp1i = lOp1i' 0

lOp12i' :: Int -> Int -> Int -> Int -> [Write]
lOp12i' x t i n
    | n < i && n >= x = lOp (t+2+(n-x))
    | isUByte n       = lOp t     ++ [ WUByte n ]
    | otherwise       = lOp (t+1) ++ [ WUShort n ]

lOp12i :: Int -> Int -> Int -> [Write]
lOp12i = lOp12i' 0

lOp12iS :: Int -> Int -> Int -> [Write]
lOp12iS t i n
    | n < i && n >= 0  = lOp (t+2+n)
    | isByte n         = lOp t    ++ [ WByte n ]
    | otherwise        = lOp (t+1)++ [ WShort n ]

lOp12i_1 :: Int -> Int -> Int -> Int -> [Write]
lOp12i_1 t i n m = lOp12i t i n ++ [ WUByte m ]

lOpJ :: Int -> CodePosn -> Label -> [Write]
lOpJ t p j = lOp t ++ [ WLabel (p+1) j ]

lOpPrim :: Int -> PrimOp -> [Write]
lOpPrim t OpWord   = lOp t
lOpPrim t OpFloat  = lOp (t+1)
lOpPrim t OpDouble = lOp (t+2)

lOpTable :: Int -> CodePosn -> [Label] -> [Write]
lOpTable t p as = lOp t ++ [WUShort (length as)] ++ map (WLabel (p+1)) as

lOpLookup :: Int -> CodePosn -> (Int->Write) -> [(Tag,Label)] -> Label -> [Write]
lOpLookup t p tag as j =
    lOp t ++ [WUShort (length as)] ++ [WLabel (p+1) j] ++ concatMap (\(t,j) -> [ tag t, WLabel (p+1) j ]) as

lPad :: Int -> [Write]
lPad n = replicate ((4 - (n `mod` 4)) `mod` 4) (WUByte 0)

---------------------------------------------------------------------------------------------------

patch :: [Write] -> Labels -> [Write]
patch ws ls = pWrites ls 0 ws

pWrites :: Labels -> Int -> [Write] -> [Write]
pWrites ls n []              = []
pWrites ls n ((WLabel p j):ws) = pWrites ls n (WUShort r : ws)
    where
    r = (fromJust $ Map.lookup j ls) - p
pWrites ls n (w:ws)          = w : pWrites ls n' ws
    where
    n' = n + wSizeOf w

---------------------------------------------------------------------------------------------------

iPush, iPushZap, iPushArg, iPushZapArg
 , iZapArg, iPushInt, iPushConst, iMkAp, iApply, iMkCon, iSlide, iSelect
    :: Int
iPush = 2 :: Int
iPushZap = 4 :: Int
iPushArg = 4 :: Int
iPushZapArg = 4 :: Int
iZapArg = 2 :: Int
iPushInt = 2 :: Int
iPushConst = 8 :: Int
iMkAp = 16 :: Int
iApply = 2 :: Int
iMkCon = 4 :: Int
iSlide = 2 :: Int
iSelect = 2 :: Int

tEndCode :: Int
tEndCode         = 0

tNeedHeap, tNeedStack, tPush, tPushZap, tZapStack, tPushArg, tPushZapArg
  , tZapArg, tPushInt, tPushChar, tPushConst, tMkAp, tMkPap, tApply, tMkCon, tUnpack
  , tSlide, tPop, tAlloc, tUpdate, tSelect, tReturn, tEval, tReturnEval, tTableSwitch, tLookupSwitch
  , tIntSwitch, tJumpFalse, tJump, tAdd, tSub, tMul, tDiv, tMod, tEq, tNe, tLe, tLt, tGe, tGt, tNeg
  , tString, tFromEnum, tPrimitive, tSelectorEval, tExternal, tTAp, tTCon, tTPrimCon, tTApply, tTIf
  , tTGuard, tTCase, tTPrimAp, tTPrimResult, tTReturn, tTPush, tTPushVar, tTProject, tLast :: Int
tNeedHeap        = tEndCode      + 1
tNeedStack       = tNeedHeap     + 2
tPush            = tNeedStack    + 2
tPushZap         = tPush         + 2 + iPush
tZapStack        = tPushZap      + 2 + iPushZap
tPushArg         = tZapStack     + 2
tPushZapArg      = tPushArg      + 1 + iPushArg
tZapArg          = tPushZapArg   + 1 + iPushZapArg
tPushInt         = tZapArg       + 1 + iZapArg
tPushChar        = tPushInt      + 2 + iPushInt
tPushConst       = tPushChar     + 1
tMkAp            = tPushConst    + 2 + iPushConst
tMkPap           = tMkAp         + 2 + iMkAp
tApply           = tMkPap        + 2
tMkCon           = tApply        + 1 + iApply
tUnpack          = tMkCon        + 2 + iMkCon
tSlide           = tUnpack       + 1
tPop             = tSlide        + 2 + iSlide
tAlloc           = tPop          + 2
tUpdate          = tAlloc        + 2
tSelect          = tUpdate       + 2
tReturn          = tSelect       + 2 + iSelect
tEval            = tReturn       + 1
tReturnEval      = tEval         + 1
tTableSwitch     = tReturnEval   + 1
tLookupSwitch    = tTableSwitch  + 1
tIntSwitch       = tLookupSwitch + 1
tJumpFalse       = tIntSwitch    + 1
tJump            = tJumpFalse    + 1
tAdd             = tJump         + 1
tSub             = tAdd          + 3
tMul             = tSub          + 3
tDiv             = tMul          + 3
tMod             = tDiv          + 3
tEq              = tMod          + 3
tNe              = tEq           + 3
tLe              = tNe           + 3
tLt              = tLe           + 3
tGe              = tLt           + 3
tGt              = tGe           + 3
tNeg             = tGt           + 3
tString          = tNeg          + 3
tFromEnum        = tString       + 1
tPrimitive       = tFromEnum     + 1
tSelectorEval    = tPrimitive    + 1
tExternal        = tSelectorEval + 1
tTAp             = tExternal     + 1
tTCon            = tTAp          + 2
tTPrimCon        = tTCon         + 2
tTApply          = tTPrimCon     + 2
tTIf             = tTApply       + 2
tTGuard          = tTIf          + 2
tTCase           = tTGuard       + 2
tTPrimAp         = tTCase        + 2
tTPrimResult     = tTPrimAp      + 2
tTReturn         = tTPrimResult  + 2
tTPush           = tTReturn      + 1
tTPushVar        = tTPush        + 1
tTProject        = tTPushVar     + 2
tLast            = tTProject     + 2






