{- |
Defines data type TokenId for names of all kinds of identifiers.
Also defines tokenIds for identifiers that are hardcoded into the compiler.

You might as well just read the source if you want to know about
those, they are *far* to numerous to document here.
-}
module TokenId(module TokenId) where

import Char(isUpper)
import Util.Extra(Pos,strPos)
import SysDeps(PackedString, unpackPS, packString, trace)
import Building (Compiler(..),compiler)

-- * 'TokenId' and functions

visible :: String -> TokenId
visible rtoken = Visible (packString rtoken)
qualify :: String -> String -> TokenId
qualify rmodule rtoken = Qualified (packString rmodule) (packString rtoken)


data TokenId =
     TupleId Int -- ^ no distinction between the type and the value constructor?
   | Visible   PackedString     -- ^ unqualified name
   | Qualified PackedString PackedString
     -- ^ token for qualified name: module name, variable name
   | Qualified2 PackedString TokenId TokenId
     -- ^ token with: module name, class token, type token for a dictionary?
   | Qualified3 PackedString TokenId TokenId TokenId
     -- ^ token for method in instance: module name, class token, type token, method token
   deriving (Eq,Ord)


instance Show TokenId where
  showsPrec d (TupleId s) = if s == 0
                            then showString "()"
                            else showString "Prelude." . shows s
  showsPrec d (Visible n) = showString (reverse (unpackPS n))
  showsPrec d (Qualified m n) =
    showString (reverse (unpackPS m)) . showChar '.' .
    showString (reverse (unpackPS n))
  showsPrec d (Qualified2 m t1 t2) =
    ( if compiler==Yhc then (showString (reverse (unpackPS m)) . showChar '.')
                       else id ) .
    shows t1 . showChar '.' . shows t2
  showsPrec d (Qualified3 m t1 t2 t3) =
    ( if compiler==Yhc then showString (reverse (unpackPS m)) . showChar '.'
                       else id ) .
    (shows t1 . showChar '.' . shows t2 . showChar '.' . shows t3)

mkUnqualifiedTokenId :: String -> TokenId
mkUnqualifiedTokenId = visible . reverse

mkQualifiedTokenId :: String -> String -> TokenId
mkQualifiedTokenId mod name = qualify (reverse mod) (reverse name)

getUnqualified :: TokenId -> String
getUnqualified = reverse . unpackPS . extractV

isTidOp :: TokenId -> Bool
isTidOp (TupleId s) = False
isTidOp tid = case (dropWhile (=='_') . reverse . unpackPS . extractV) tid of
                  (x:xs) -> isNhcOp x
                  _ -> False

isTidCon :: TokenId -> Bool
isTidCon tid = isTupleId tid
               || (let x@(s:_) = (reverse . unpackPS . extractV) tid in
                   isUpper s || s==':' || x=="[]")

isTupleId :: TokenId -> Bool
isTupleId (TupleId _)          = True
isTupleId (Qualified2 _ _ t)   = isTupleId t
isTupleId (Qualified3 _ _ _ t) = isTupleId t
isTupleId _                    = False

--notPrelude (Qualified tid n) = tid /= rpsDPrelude && tid /= rpsPrelude
notPrelude :: TokenId -> Bool
notPrelude (Qualified tid n) = (tid /= rpsPrelude) -- && (tid /= rpsInternal)
notPrelude (Qualified2 m t1 t2) = notPrelude t1 && notPrelude t2
notPrelude (Qualified3 m t1 t2 t3) = notPrelude t1 && notPrelude t2
notPrelude (TupleId _) = False
notPrelude _           = True -- FIXME: really?


{- | construct Qualified2 token from given two tokens -}
mkQual2 :: PackedString -> TokenId -> TokenId -> TokenId
mkQual2 m cls cls_typ = Qualified2 m cls cls_typ


{- | construct Qualified3 token from given three tokens -}
mkQual3 :: PackedString -> TokenId -> TokenId -> TokenId -> TokenId
mkQual3 m cls typ met = Qualified3 m cls typ (dropM met)


{- -}
mkQualD :: PackedString -> TokenId -> TokenId
mkQualD rps v@(Visible n)     =
    let m = reverse $ unpackPS rps
        n' = reverse $ unpackPS n
    in Qualified3 rps (Visible rps) t_underscore v
mkQualD rps (Qualified m v) = Qualified3 m (Visible m) t_underscore (Visible v)


{- | if token is not qualified make it qualified with given module name -}
ensureM :: PackedString -> TokenId -> TokenId
ensureM tid (Visible n) = Qualified tid n
ensureM tid q = q


{- | make token into qualified token with given module name -}
forceM :: PackedString -> TokenId -> TokenId
forceM m (Qualified _ n) = Qualified m n
forceM m (Visible n)       = Qualified m n
forceM m tid = tid


{- | drop all qualification (module names) from token -}
dropM :: TokenId -> TokenId
dropM (Qualified tid n) = Visible n
dropM (Qualified2 m t1 t2) = t2
dropM (Qualified3 m t1 t2 t3) = t3
dropM v = v

{- | get module name from token, correct for Visible? -}
extractM :: TokenId -> PackedString
extractM v = maybe rpsPrelude id (extractM' v)

extractM' :: TokenId -> Maybe PackedString
extractM' (Qualified tid n) = Just $ tid
extractM' (Qualified2 m t1 t2) = extractM' t1
extractM' (Qualified3 m t1 t2 t3) = extractM' t1
extractM' _ = Nothing

{- | split a token -}

splitM :: TokenId -> (String, String)
splitM (TupleId n) = (unpack rpsPrelude, if n == 0 then "()" else show n)
splitM (Visible n) = ("", unpack n)
splitM (Qualified m v) = (sepM $ unpack m, unpack v)
splitM (Qualified2 m c t) = (sepM $ unpack m, show c ++ "." ++ show t)
splitM (Qualified3 m c t i) = (sepM $ unpack m, show c ++ "." ++ show t ++ "." ++ show i)

sepM :: String -> String
sepM xs = map (\c -> if c == '.' then ';' else c) xs

unpack :: PackedString -> String
unpack = reverse . unpackPS

{- | make an external token -}
mkExt :: TokenId -> TokenId
mkExt (Visible n) = Visible $ packString $ reverse $ unpack n ++ "#X"
mkExt (Qualified m v) = Qualified m $ packString $ reverse $ unpack v ++ "#X"

{- | get identifier name from token, without qualification -}
extractV :: TokenId -> PackedString
extractV (TupleId n) = packString ('(' : foldr (:) ")" (replicate n ','))
extractV (Visible v) = v
extractV (Qualified m v) =  v
extractV (Qualified2 m t1 t2) = extractV t2
extractV (Qualified3 m t1 t2 t3) = extractV t3


{- | extend token by adding position to the identifier name -}
tidPos :: TokenId -> Pos -> TokenId
tidPos (TupleId s) pos = if s == 0
                         then visImport ("():" ++ (strPos pos))
                         else visImport (shows s (':' : strPos pos))
tidPos (Visible n)           pos =
  Visible (packString (reverse (strPos pos) ++ ':' : unpackPS n))
tidPos (Qualified m n)      pos =
  Qualified m (packString (reverse (strPos pos) ++ ':' : unpackPS n))
tidPos (Qualified2 m t1 t2)    pos =
  Qualified2 m t1 (tidPos t2 pos)
tidPos (Qualified3 m t1 t2 t3) pos =
  Qualified3 m t1 t2 (tidPos t3 pos)


{- | append given string to module name of qualified token -}
add2M :: String -> TokenId -> TokenId
add2M str (Qualified m v) =
  Qualified (packString (reverse str ++ unpackPS m)) v

visImport, qualImpPrel, qualImpNHC, qualImpBin, qualImpRat, qualImpIx, qualImpFFI :: String -> TokenId
qualImpPS, qualImpPrim, qualImpDyn                                                :: String -> TokenId
visImport = Visible . packString . reverse
qualImpPrel = Qualified rpsPrelude . packString . reverse
qualImpNHC = Qualified rpsInternal . packString . reverse
qualImpBin = Qualified rpsBinary  . packString . reverse
qualImpRat = Qualified rpsRatio   . packString . reverse
qualImpIx  = Qualified rpsIx      . packString . reverse
qualImpFFI = Qualified rpsFFI     . packString . reverse
qualImpPS  = Qualified rpsPS      . packString . reverse
qualImpIOE = Qualified rpsIOE     . packString . reverse
qualImpPrim = Qualified rpsPrimitive . packString . reverse
qualImpDyn = Qualified rpsYhcDynamic . packString . reverse

qualImpFFIBC :: String -> String -> TokenId
qualImpFFIBC mod it =
    let rps = (reverse $ unpackPS rpsFFI) ++ "." ++ mod
    in Qualified (packString $ reverse rps)
                    (packString $ reverse it)


rpsPrelude, rpsInternal, rpsRatio, rpsIx, rpsFFI, rpsPS, rpsBinary, rpsPrimitive, rpsYhcDynamic
    :: PackedString
rpsPrelude      = (packString . reverse ) "Prelude"
rpsInternal | compiler==Nhc98  = (packString . reverse ) "NHC.Internal"
            | compiler==Yhc    = (packString . reverse ) "YHC.Internal"
rpsRatio    | compiler==Nhc98  = (packString . reverse ) "Ratio"
            | compiler==Yhc    = (packString . reverse ) "Data.Ratio"
rpsIx       | compiler==Nhc98  = (packString . reverse ) "Ix"
            | compiler==Yhc    = (packString . reverse ) "Data.Ix"
rpsFFI      | compiler==Nhc98  = (packString . reverse ) "NHC.FFI"
            | compiler==Yhc    = (packString . reverse ) "Foreign"
rpsPS       | compiler==Nhc98  = (packString . reverse ) "NHC.PackedString"
            | compiler==Yhc    = (packString . reverse ) "Data.PackedString"
rpsIOE          = (packString . reverse ) "NHC.IOExtras"
rpsBinary       = (packString . reverse ) "NHC.Binary"
rpsHatHack      = (packString . reverse ) "Hat.Hack"
rpsPrimitive    = (packString . reverse ) "YHC.Primitive"
rpsYhcDynamic   = (packString . reverse ) "YHC.Dynamic"

isUnit :: TokenId -> Bool
isUnit (TupleId 0) = True
isUnit _ = False


{- | make token for tuple of given size -}
t_Tuple :: Int -> TokenId
t_Tuple  size   = TupleId size

-- * Hardcoded names
tmain :: TokenId
tmain = Qualified (packString (reverse "Main")) (packString (reverse "main"))

tPrelude, tNHCInternal, tYHCDynamic :: TokenId
tPrelude        = Visible rpsPrelude
tHatHack        = Visible rpsHatHack
tNHCInternal    = Visible rpsInternal
tRatioMod       = Visible rpsRatio
tYHCDynamic     = Visible rpsYhcDynamic

t_underscore, t_Bang, tprefix, tqualified, thiding, tas, tinterface, tforall, tdot :: TokenId
tunboxed, tprimitive, tMain :: TokenId
t_underscore    = visImport "_"
t_Bang          = visImport "!"
t_Assign        = visImport ":="
tprefix         = visImport "prefix"
tqualified      = visImport "qualified"
thiding         = visImport "hiding"
tas             = visImport "as"
tinterface      = visImport "interface"
tforall         = visImport "forall"
tdot            = visImport "."        
  -- an unqualified dot, used in types, e.g., "forall a . [a]"
tunboxed        = visImport "unboxed"
tprimitive      = visImport "primitive"
tMain           = visImport  "Main"

tUnknown :: Show a => a -> TokenId
tUnknown u      = visImport  ("Unexported.Constr_"++show u)

t_gtgteq, t_gtgt, tfail, t_error, t_undef, tfromInteger, tNum, tIntegral, tInt, tIntHash :: TokenId
t_flip, tminus, tnegate, tTrue, tFalse, tunknown, terror, tIO, tBool, tFloatHash :: TokenId
tFloat, tChar, t_List                                                                    :: TokenId
t_gtgteq        = qualImpPrel  ">>="
t_gtgt          = qualImpPrel  ">>"
tfail           = qualImpPrel  "fail"
t_error         = qualImpPrel  "error"
t_undef         = qualImpPrel  "undefined"
tfromInteger    = qualImpPrel  "fromInteger"
tNum            = qualImpPrel  "Num"
tIntegral       = qualImpPrel  "Integral"
tInt            = qualImpPrel  "Int"
tIntHash        = qualImpPrel  "Int#"

t_noMethodError, t_patternMatchFail, t_recConError, t_recSelError, t_recUpdError :: TokenId
t_noMethodError    | compiler==Yhc   = qualImpPrel "_noMethodError"
                   | compiler==Nhc98 = qualImpNHC  "_noMethodError"
t_patternMatchFail | compiler==Yhc   = qualImpPrel "_patternMatchFail"
                   | compiler==Nhc98 = qualImpNHC  "_patternMatchFail"
t_recConError      | compiler==Yhc   = qualImpPrel "_recConError"
                   | compiler==Nhc98 = qualImpNHC  "_recConError"
t_recSelError      | compiler==Yhc   = qualImpPrel "_recSelError"
                   | compiler==Nhc98 = qualImpNHC  "_recSelError"
t_recUpdError      | compiler==Yhc   = qualImpPrel "_recUpdError"
                   | compiler==Nhc98 = qualImpNHC  "_recUpdError"

t_Arrow, tString, t_filter, t_foldr, t_Colon, t_x, t_y, t_apply1                         :: TokenId
t_apply2, t_apply3, t_apply4, tInteger, tDouble, tDoubleHash, tfromRational, t_fromEnum  :: TokenId
t_toEnum, tEq, tOrd, tEnum, tIx, tShow, tRead, t_andand, t_pipepipe, tcompare, tLT, tEQ  :: TokenId
tGT, t_equalequal, t_lessequal, t_lessthan, t_greater, t_greaterequal                    :: TokenId
t_flip          = qualImpPrel  "flip"
tminus          = qualImpPrel  "-"
t_minus         = visImport    "-"
tnegate         = qualImpPrel  "negate"
tTrue           = qualImpPrel  "True"
tFalse          = qualImpPrel  "False"
tunknown        = visImport    "Unknown.variable"
terror          = qualImpPrel  "error"
tIO             = qualImpNHC   "IO"
tBool           = qualImpPrel  "Bool"
tFloatHash      = qualImpPrel  "Float#"
tFloat          = qualImpPrel  "Float"
tChar           = qualImpPrel  "Char"
t_List          = qualImpPrel  "[]"
t_ListNQ        = visImport    "[]"
t_Arrow         = qualImpPrel  "->"
t_Pair          = qualImpPrel  "(,"
tString         = qualImpPrel  "String"
t_filter        = qualImpPrel  "_filter"
t_foldr         = qualImpPrel  "_foldr" -- be careful, non-standard signature
t_Colon         = qualImpPrel  ":"
t_ColonNQ       = visImport    ":"
t_x             = visImport    "_x"
t_y             = visImport    "_y"
t_equalstring	= qualImpPrel  "_equalstring"
t_guardstring	= qualImpPrel  "_guardstring"
t_fail		= qualImpPrel  "_fail"
t_fatbar	= qualImpPrel  "_fatbar"
t_select	= qualImpPrel  "_select"
t_patbindupdate = qualImpPrel  "_patbindupdate"
t_callpatbindupdate = qualImpPrel  "_callpatbindupdate"
tDialogue       = qualImpPrel  "Dialogue"
t_apply1        = qualImpNHC  "_apply1"
t_apply2        = qualImpNHC  "_apply2"
t_apply3        = qualImpNHC  "_apply3"
t_apply4        = qualImpNHC  "_apply4"
t_used          = qualImpPrel  "used!"
tInteger        = qualImpPrel  "Integer"
tDouble         = qualImpPrel  "Double"
tDoubleHash     = qualImpPrel  "Double#"
tfromRational   = qualImpPrel  "fromRational"
t_equalinteger	= qualImpPrel  "_equalinteger"
t_guardinteger	= qualImpPrel  "_guardinteger"
t_nopos 	= qualImpPrel  "<no pos>"
t_fromEnum      = qualImpPrel  "_fromEnum"
t_toEnum        = qualImpPrel  "_toEnum"
--tEval           = qualImpPrel  "Eval"		-- Removed in Haskell 98
tEq             = qualImpPrel  "Eq"
tOrd            = qualImpPrel  "Ord"
tEnum           = qualImpPrel  "Enum"
tIx             = qualImpIx    "Ix"
tShow           = qualImpPrel  "Show"
tRead           = qualImpPrel  "Read"
t_andand        = qualImpPrel  "&&"
t_pipepipe      = qualImpPrel  "||"
tcompare        = qualImpPrel  "compare"
tLT             = qualImpPrel  "LT"
tEQ             = qualImpPrel  "EQ"
tGT             = qualImpPrel  "GT"
t_equalequal    = qualImpPrel  "=="
t_lessequal     = qualImpPrel  "<="
t_lessthan      = qualImpPrel  "<"
t_greater       = qualImpPrel  ">"
t_greaterequal  = qualImpPrel  ">="

tseq :: TokenId
tseq            = qualImpPrel  "seq"

trange, tindex, tinRange, t_tupleRange, t_tupleIndex, t_enumRange, t_enumIndex, t_enumInRange :: TokenId
trange          = qualImpIx  "range"
tindex          = qualImpIx  "index"
tinRange        = qualImpIx  "inRange"
t_tupleRange    = qualImpIx  "_tupleRange"
t_tupleIndex    = qualImpIx  "_tupleIndex"
t_enumRange     = qualImpPrel  "_enumRange"
t_enumIndex     = qualImpPrel  "_enumIndex"
t_enumInRange   = qualImpPrel  "_enumInRange"

tfromEnum, ttoEnum, tenumFrom, tenumFromTo, tenumFromThen, tenumFromThenTo :: TokenId
t_enumFromTo, t_enumFromThenTo                                             :: TokenId
tfromEnum       = qualImpPrel  "fromEnum"
ttoEnum         = qualImpPrel  "toEnum"
tenumFrom       = qualImpPrel  "enumFrom"
tenumFromTo     = qualImpPrel  "enumFromTo"
tenumFromThen   = qualImpPrel  "enumFromThen"
tenumFromThenTo = qualImpPrel  "enumFromThenTo"
t_enumFromTo    = qualImpPrel  "_enumFromTo"
t_enumFromThenTo= qualImpPrel  "_enumFromThenTo"

tBounded, tminBound, tmaxBound :: TokenId
tBounded        = qualImpPrel  "Bounded"
tminBound       = qualImpPrel  "minBound"
tmaxBound       = qualImpPrel  "maxBound"

t_append, t_readCon0, t_readConInfix, t_readCon, t_readConArg, t_readField, t_readFinal :: TokenId
t_append        = qualImpPrel  "++"
t_readCon0      = qualImpPrel  "_readCon0"
t_readConInfix  = qualImpPrel  "_readConInfix"
t_readCon       = qualImpPrel  "_readCon"
t_readConArg    = qualImpPrel  "_readConArg"
t_readField     = qualImpPrel  "_readField"
t_readFinal     = qualImpPrel  "_readFinal"

tshowsPrec, tshowsType, treadsPrec, t_dot, tshowString, tshowChar, tshowParen, treadParen :: TokenId
tFractional, tRational, tRatio, tRatioCon, tNEED, t_eqInteger, t_eqDouble, t_eqFloat      :: TokenId
t_otherwise :: TokenId
tshowsPrec      = qualImpPrel  "showsPrec"
tshowsType      = qualImpPrel  "showsType"
treadsPrec      = qualImpPrel  "readsPrec"
t_dot           = qualImpPrel  "."
tshowString     = qualImpPrel  "showString"
tshowChar       = qualImpPrel  "showChar"
tshowParen      = qualImpPrel  "showParen"
treadParen      = qualImpPrel  "readParen"
tFractional     = qualImpPrel  "Fractional"
tRational       = qualImpRat  "Rational"    -- Changed in Haskell 98
tRatio          = qualImpRat  "Ratio"       -- Changed in Haskell 98
tRatioCon | compiler==Nhc98 = qualImpRat  "%"     -- Changed in Haskell 98
          | compiler==Yhc   = qualImpRat  ":%"    -- not strictly correct
visRational     = visImport  "Rational"    -- Changed in Haskell 98
visRatio        = visImport  "Ratio"       -- Changed in Haskell 98
visRatioCon | compiler==Nhc98 = visImport  "%"     -- Changed in Haskell 98
            | compiler==Yhc   = visImport  ":%"    -- not strictly correct
tPRIMITIVE      = visImport "PRIMITIVE"
tNEED           = visImport "NEED"
t_primitive     = visImport "primitive"
t_Lambda        = qualImpPrel  "\\"
t_eqInteger     = qualImpNHC  "_eqInteger"
t_eqDouble      = qualImpNHC  "_eqDouble"
t_eqFloat       = qualImpNHC  "_eqFloat"
t_otherwise     = tTrue

t_id :: TokenId
t_id            = qualImpNHC  "_id"
  -- identity function that is not modified by the tracing transformation


{- * Malcolm's additions from here on -}

{- ** class + instances of Binary -}
tBinary, t_put, t_get, t_getF, t_sizeOf, t_putBits, t_getBits, t_getBitsF, t_ltlt, t_return, t_plus
    :: TokenId
tBinary         = qualImpBin  "Binary"
t_put           = qualImpBin  "put"
t_get           = qualImpBin  "get"
t_getF          = qualImpBin  "getF"
t_sizeOf        = qualImpBin  "sizeOf"
t_putBits       = qualImpBin  "putBits"
t_getBits       = qualImpBin  "getBits"
t_getBitsF      = qualImpBin  "getBitsF"
t_ltlt          = qualImpBin  "<<"
t_return        = qualImpPrel  "return"
t_plus          = qualImpPrel  "+"

{- ** (N+K) patterns -}
t_nplusk, t_subtract :: TokenId
t_nplusk        = visImport   "+"
t_subtract      = qualImpPrel  "subtract"

{- ** FFI -}
t_foreign, t_export, t_ccall, t_stdcall, t_fastccall, t_faststdcall, t_builtin, t_haskell, t_noproto  :: TokenId
t_cplusplus, t_dotnet, t_jvm, t_cast, t_safe, t_unsafe, tAddr, tPtr, tFunPtr, tForeignObj  :: TokenId
tForeignPtr, tStablePtr, tInt8, tInt16, tInt32, tInt64, tWord8, tWord16, tWord32, tWord64  :: TokenId
tPackedString                                                                              :: TokenId
t_foreign       = visImport   "foreign"
t_export        = visImport   "export"
t_ccall         = visImport   "ccall"
t_stdcall       = visImport   "stdcall"
t_fastccall     = visImport   "fastccall"
t_faststdcall   = visImport   "faststdcall"
t_builtin       = visImport   "builtin"
t_haskell       = visImport   "haskell"
t_noproto       = visImport   "noproto"
t_cplusplus     = visImport   "cplusplus"
t_dotnet        = visImport   "dotnet"
t_jvm           = visImport   "jvm"
t_cast          = visImport   "cast"
t_safe          = visImport   "safe"
t_unsafe        = visImport   "unsafe"
tAddr           = qualImpFFI  "Addr"
tPtr            = qualImpFFI  "Ptr"
tFunPtr         = qualImpFFI  "FunPtr"
tForeignObj     = qualImpFFI  "ForeignObj"
tForeignPtr     = qualImpFFI  "ForeignPtr"
tStablePtr      = qualImpFFI  "StablePtr"
--tWord         = qualImpFFI  "Word"
tInt8           = qualImpFFI  "Int8"
tInt16          = qualImpFFI  "Int16"
tInt32          = qualImpFFI  "Int32"
tInt64          = qualImpFFI  "Int64"
tWord8          = qualImpFFI  "Word8"
tWord16         = qualImpFFI  "Word16"
tWord32         = qualImpFFI  "Word32"
tWord64         = qualImpFFI  "Word64"

tAddrBC, tPtrBC, tFunPtrBC, tForeignObjBC, tForeignPtrBC, tStablePtrBC :: TokenId
tInt8BC, tInt16BC, tInt32BC, tInt64BC, tWord8BC, tWord16BC, tWord32BC, tWord64BC :: TokenId
tPackedString | compiler==Yhc    = qualImpPrim "PackedString"
              | compiler==Nhc98  = qualImpPS   "PackedString"
tAddrBC         = qualImpPrim  "Addr"
tPtrBC          = qualImpPrim  "Ptr"
tFunPtrBC       = qualImpPrim  "FunPtr"
tForeignObjBC   = qualImpPrim  "ForeignObj"
tForeignPtrBC   = qualImpPrim  "ForeignPtr"
tStablePtrBC    = qualImpPrim  "StablePtr"
--tWordBC       = qualImpPrim  "Word"
tInt8BC         = qualImpPrim  "Int8"
tInt16BC        = qualImpPrim  "Int16"
tInt32BC        = qualImpPrim  "Int32"
tInt64BC        = qualImpPrim  "Int64"
tWord8BC        = qualImpPrim  "Word8"
tWord16BC       = qualImpPrim  "Word16"
tWord32BC       = qualImpPrim  "Word32"
tWord64BC       = qualImpPrim  "Word64"

tunsafePerformIO :: TokenId
tunsafePerformIO= qualImpNHC  "unsafePerformIO"

{- ** more FFI -}
t_mkIOok :: Int -> TokenId
t_mkIOok n      = qualImpNHC  ("_mkIOok"++show (n::Int))

{- ** YHC.Dynamic -}
ttypeRep, tTyCon, tTyGeneric :: TokenId
ttypeRep       = qualImpNHC "typeRep"
tTyCon         = qualImpNHC "_tyCon"
tTyGeneric     = qualImpNHC "_tyGen"

-- * Not hardcoded names
-- | Is a certain character an operator
isNhcOp :: Char -> Bool
isNhcOp '~' = True; isNhcOp '=' = True; isNhcOp '*' = True
isNhcOp '%' = True; isNhcOp '/' = True; isNhcOp ':' = True
isNhcOp '+' = True; isNhcOp '@' = True; isNhcOp '.' = True
isNhcOp '>' = True; isNhcOp '&' = True; isNhcOp '$' = True
isNhcOp '|' = True; isNhcOp '-' = True
isNhcOp '!' = True; isNhcOp '<' = True
isNhcOp '^' = True; isNhcOp '#' = True; isNhcOp '?' = True
isNhcOp '\\' = True
isNhcOp _ = False


{- End TokenId -------------------------------------------------------------}
