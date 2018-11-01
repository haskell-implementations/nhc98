-- | Needs 'IdSupply'

module ForeignCode
  ( Foreign(..), toForeign, strForeign
  , ForeignMemo, foreignMemo
  , ImpExp(..)
  , Style(..)
  , Arg(..), Res
  , cTypename
  ) where

import Maybe (fromJust,isNothing)
import List (isPrefixOf,isSuffixOf,intersperse)
import SysDeps (unpackPS)
import Syntax
import Id
import Info
import NT
import TokenId
import qualified Data.Map as Map
import Util.Extra (mix,warning,Warning(..))
import GcodeLow (fun,foreignfun,fixStr)


data ImpExp  = Imported | Exported
data Style   = Ordinary | CCast | Address | FunAddress | Dynamic | Wrapper
             deriving Eq
data Foreign = Foreign  ImpExp  -- import or export?
                        Bool    -- generate C prototype?
                        Style   -- cast / address / dynamic etc
                        (Maybe FilePath) -- C header file (for proto checking)
                        String  -- foreign function name
                        TokenId -- Haskell function name
                        Int     -- arity
                        [Arg]   -- argument types
                        Res     -- result type

instance Show ImpExp where
  showsPrec _ Imported = showString "import"
  showsPrec _ Exported = showString "export"

instance Show Style where
  showsPrec _ Ordinary = showString "ccall"
  showsPrec _ CCast    = showString "cast"
  showsPrec _ Address  = showString "ccall &"
  showsPrec _ FunAddress  = showString "ccall &"
  showsPrec _ Dynamic  = showString "ccall dynamic"
  showsPrec _ Wrapper  = showString "ccall wrapper"

instance Show Foreign where
  showsPrec _ (Foreign ie _proto style incl cname hname arity args res) =
    word "foreign" . space . shows ie . space . shows style . space .
    showChar '"' . maybe id (\i-> word i . space) incl . word cname .
    showChar '"' . space .
    shows hname . space . shows arity . showString " :: " .
    showString (mix " -> " (map show args)) .
    showString " -> " . shows res

data Arg = Int8  | Int16  | Int32  | Int64
         | Word8 | Word16 | Word32 | Word64
         | Float | Double | Char   | Bool | Int
         | Ptr   | FunPtr [Arg] | StablePtr | ForeignPtr
         | Addr  | ForeignObj | Integer | PackedString
         | Unknown String | Unit | HaskellFun [Arg]

instance Show Arg where
  showsPrec _ Int8         = showString "FFI.Int8"
  showsPrec _ Int16        = showString "FFI.Int16"
  showsPrec _ Int32        = showString "FFI.Int32"
  showsPrec _ Int64        = showString "FFI.Int64"
  showsPrec _ Word8        = showString "FFI.Word8"
  showsPrec _ Word16       = showString "FFI.Word16"
  showsPrec _ Word32       = showString "FFI.Word32"
  showsPrec _ Word64       = showString "FFI.Word64"
  showsPrec _ Int          = showString "Prelude.Int"
  showsPrec _ Float        = showString "Prelude.Float"
  showsPrec _ Double       = showString "Prelude.Double"
  showsPrec _ Char         = showString "Prelude.Char"
  showsPrec _ Bool         = showString "Prelude.Bool"
  showsPrec _ Ptr          = showString "FFI.Ptr"
  showsPrec _ (FunPtr t)   = showString "FFI.FunPtr"
      . parens (showString (concat (intersperse " -> " (map show t))))
  showsPrec _ StablePtr    = showString "FFI.StablePtr"
  showsPrec _ ForeignPtr   = showString "FFI.ForeignPtr"
  showsPrec _ Addr         = showString "FFI.Addr"              -- deprecated
  showsPrec _ ForeignObj   = showString "FFI.ForeignObj"        -- deprecated
  showsPrec _ Integer      = showString "Prelude.Integer"       -- non-standard
  showsPrec _ PackedString = showString "PackedString.PackedString" -- non-std
  showsPrec _ Unit         = showString "Prelude.()"
  showsPrec _ (HaskellFun as)  =
      parens (showString (concat (intersperse " -> " (map show as))))
  showsPrec _ (Unknown s)  = showString s

-- Note: as of 2000-10-18, the result can never have an IO type - pure only.
-- (IO results are created by wrapping auxiliary _mkIOokN around a pure call.)
type Res = Arg

foreignname, localname, profname :: TokenId -> ShowS
foreignname hname = showString foreignfun . fixStr (show hname)
localname   hname = showString fun        . fixStr (show hname)
profname    hname = showString "pf_"      . fixStr (show hname)
----

toForeign :: (String->Warning) -> Map.Map Id Info -> ForeignMemo
              -> CallConv -> ImpExp -> String -> Int -> Id -> Foreign
-- toForeign _symboltable _memo (Other callconv) _ie _cname _arity _var
  -- callconv `notElem` ["primitive","fastccall","faststdcall","builtin"] =
  --  error ("Foreign calling convention \""++callconv++"\" not supported.")
toForeign warn symboltable memo callconv ie cname arity var =
    Foreign ie proto style include cfunc hname arity' args res
  where
    info = fromJust (Map.lookup var symboltable)
    hname = tidI info
    hnameStr = (reverse . (\w->if head w=='#' then tail w else w)
               . unpackPS . extractV) hname
    (args,res) = searchType style symboltable memo info warn
    (cfunc,style,include) = case callconv of Cast -> (hnameStr,CCast,Nothing)
                                             _    -> parseEntity cname hnameStr
    proto = (callconv/=Noproto) && (isNothing include)
    arity' = if arity==length args then arity
             else error ("foreign function: arity does not match: "
                         ++hnameStr++" has "++show arity
                         ++" args, expected "++show (length args)++"\n")

parseEntity :: String -> String -> (String,Style,Maybe FilePath)
parseEntity entity hname =
    case words entity of
      ("dynamic":_) -> (hname, Dynamic, Nothing)
      ("wrapper":_) -> (hname, Wrapper, Nothing)
      ("static":ws) -> filename ws
      ws            -> filename ws
  where
    filename []     = (hname, Ordinary, Nothing)
    filename (w:ws) | ".h" `isSuffixOf` w = address (Just w) ws
                    | otherwise           = address Nothing  (w:ws)
    address file ("&":ws) = lib file Address  ws
    address file (w:ws)   | "&" `isPrefixOf` w = lib file Address (tail w:ws)
    address file    ws    = lib file Ordinary ws
    lib file style []     = (hname, style, file)
    lib file style (w:ws) | "[" `isPrefixOf` w && "]" `isSuffixOf` w
                                      = cfunc file style ws
                          | otherwise = cfunc file style (w:ws)
    cfunc file style []      = (hname, style, file)
    cfunc file style [cname] = (cname, style, file)
    cfunc _file _style _ws      =
        error ("Couldn't parse entity string in foreign import: "++entity)


searchType :: Style -> Map.Map Id Info -> ForeignMemo -> Info
              -> (String->Warning) -> ([Arg],Res)
searchType style st (arrow,io) info w =
  let
    toList (NTcons c _ nts) | c==arrow  = let [a,b] = nts in a: toList b
    toList (NTcons c _ nts) | c==io     = let [a]   = nts in [a] -- within FunPtr
    toList (NTstrict nt)  = toList nt
    toList nt             = [nt]

    toTid (NTcons c _ nts)  =
      case Map.lookup c st of
        Just i | isRealData i ->
                   case toArg (tidI i) of
                     FunPtr _ -> FunPtr (map toTid (toList (head nts)))
                     HaskellFun _ -> HaskellFun (map toTid (toList (head nts)))
                     t        -> t
               | otherwise -> toTid (getNT (isRenamingFor st i))
    toTid (NTapp t1 _t2)  = toTid t1
    toTid (NTstrict t)    = toTid t
    toTid t = Unknown (show t)  -- error ("Unrecognised NT: "++show t)
                -- 'Unknown' lets polymorphic heap-values across unmolested

    toArg t | t==tInt           = Int
         --   t==tWord          = Word32
            | t==tBool          = Bool
            | t==tChar          = Char
            | t==tFloat         = Float
            | t==tDouble        = Double
            | t==tPtr           = Ptr
            | t==tPtrBC         = Ptr
            | t==tFunPtr        = FunPtr []
            | t==tFunPtrBC      = FunPtr []
            | t==tStablePtr     = StablePtr
            | t==tStablePtrBC   = StablePtr
            | t==tForeignPtr    = ForeignPtr
            | t==tForeignPtrBC  = ForeignPtr
            | t==tAddr          = Addr          -- deprecated
            | t==tAddrBC        = Addr          -- deprecated
            | t==tForeignObj    = ForeignObj    -- deprecated
            | t==tForeignObjBC  = ForeignObj    -- deprecated
            | t==(t_Tuple 0)    = Unit  -- no void args, but need void results
            | t==tInt8          = Int8
            | t==tInt8BC        = Int8
            | t==tInt16         = Int16
            | t==tInt16BC       = Int8
            | t==tInt32         = Int32
            | t==tInt32BC       = Int32
            | t==tInt64         = Int64
            | t==tInt64BC       = Int64
            | t==tWord8         = Word8
            | t==tWord8BC       = Word8
            | t==tWord16        = Word16
            | t==tWord16BC      = Word16
            | t==tWord32        = Word32
            | t==tWord32BC      = Word32
            | t==tWord64        = Word64
            | t==tWord64BC      = Word64
            | t==tPackedString  = PackedString  -- non-standard
            | t==tInteger       = Integer               -- non-standard
            | style==Wrapper
              && t==t_Arrow     = HaskellFun [] -- foreign export "wrapper"
            | otherwise         =
                    warning (w $ "has non-primitive type: "
                                 ++show t++"\n") (Unknown (show t))

    getNT (NewType _ _ _ [nt]) = nt
    getNT (NewType _ _ _ (nt:_)) = nt
    getNT _                    = error ("Unable to retrieve newtype info.")

    splitRes args = (init args, last args)

  in
    (splitRes . map toTid . toList . getNT . ntI) info

----
type ForeignMemo = (Id,Id)

foreignMemo :: Map.Map Id Info -> ForeignMemo
foreignMemo st =
--    (findFirst (check t_Arrow . flip Map.lookup st) [1..]
--    ,findFirst (check tIO     . flip Map.lookup st) [1..])
    (findFirst (check t_Arrow) minfos
    ,findFirst (check tIO    ) minfos)
  where
    minfos = map (Just . snd) (Map.toList st) ++ [Nothing]
    check tid (Just info) | cmpTid tid info  = Just (uniqueI info)
                          | otherwise        = Nothing
        -- If the ident doesn't exist after typecheck, it won't be used!
    check _tid Nothing                       = error "ForeignCode.foreignMemo: used unused identifier?"

findFirst :: (a->Maybe b) -> [a] -> b
-- specification:   findFirst = head . catMaybes . map
findFirst _ [] = error "findFirst failed"
findFirst f (x:xs) =
    case f x of
      Just b  -> b
      Nothing -> findFirst f xs

----

strForeign :: (String->Warning) -> Foreign -> ShowS
strForeign w f@(Foreign Imported proto style incl cname hname arity args res) =
    nl . comment (shows f) . nl .
    maybe id
          (\i-> word "#include " . showChar '"' . word i . showChar '"' . nl)
          incl .
    (if proto then genProto style else id) .
    word "#ifdef PROFILE" . nl .
    word "static SInfo" . space . profinfo . space . equals . space .
      opencurly . strquote (word modname) . comma .
                  strquote (shows hname) . comma .
                  strquote (shows res) .
      closecurly . semi .
    word "#endif" . nl .
    word "C_HEADER" . parens (foreignname hname) . space .
    opencurly . nl .
      indent . word "NodePtr nodeptr" . semi .
      cResDecl res .
      listsep semi (zipWith cArg args [1..]) . semi .
      foldr (.) id (zipWith cArgDefn args [1..]) . nl .
      (case style of
         CCast -> cCast arity res
         Address -> cAddr cname res
         FunAddress -> cFunAddr cname
         Dynamic -> cDynamic arity res
         _ -> if length args == 1 && noarg (head args)
              then cCall cname 0 res
              else cCall cname arity res) . nl .
      cFooter w profinfo res .
    closecurly . nl
  where
    genProto :: Style -> ShowS
    genProto Ordinary =
      case res of
        FunPtr t ->
          word "extern" . space . cResType (last t)
          . parens (star . word cname
                   . parens (listsep comma (map cTypename args)))
          . parens (listsep comma (map cTypename (init t))) . semi
        _ ->
          word "extern" . space . cResType res . space . word cname
          . parens (listsep comma (map cTypename args)) . semi
    genProto FunAddress =
          word "extern" . space . cResType res . space . word cname
          . parens id . semi
    genProto CCast   = id
    genProto Address = id
    genProto Dynamic = id
    genProto Wrapper = error "foreign import wrapper not yet supported."

    cArg a n = indent . cArgDecl a n
    modname  = (reverse . unpackPS . extractM) hname
    profinfo = profname hname
    noarg Unit = True
    noarg _    = False

strForeign w f@(Foreign Exported _ _ _ cname hname arity args res) =
    nl . comment (shows f) . nl .
    cCodeDecl cname args res . space .
    opencurly . nl .
      --cResDecl res .
      hCall w arity hname args .
      hResult res .
    closecurly . nl


---- foreign import ----

cArgDecl :: Arg -> Int -> ShowS
cArgDecl (FunPtr t) n = cResType (last t) . parens (star . narg n)
                        . parens (listsep comma (map cTypename (init t)))
cArgDecl Unit       n = comment (cTypename Unit . space . narg n)
cArgDecl arg        n = cTypename arg . space . narg n

cArgDefn :: Arg -> Int -> ShowS
cArgDefn Unit _n =
    id
cArgDefn arg n =
    indent . word "nodeptr = C_GETARG1" . parens (shows n) . semi .
    indent . word "IND_REMOVE(nodeptr)" . semi .
    indent . narg n . showString " = " .
    parens (cTypename arg) . cConvert arg . semi

cResDecl :: Res -> ShowS
cResDecl (FunPtr t) = indent . cResType (last t) . parens (star . word "result")
                      . parens (listsep comma (map cTypename (init t))) . semi
cResDecl Unit = id
cResDecl arg  = indent . cTypename arg . space . word "result" . semi

cCall :: String -> Int -> Res -> ShowS
cCall cname arity res =
      indent . (case res of
                    Unit -> id
                    _    -> word "result = ") .
      word cname .  parens (listsep comma (map narg [1..arity])) . semi

cCast :: Int -> Res -> ShowS
cCast arity res =
    if arity /= 1 then
      error ("\"foreign import cast\" has wrong arity.")
    else
      indent . word "result = " . parens (cResType res) . parens (narg 1) . semi

cAddr :: String -> Res -> ShowS
cAddr cname res =
    indent . word "result = " . parens (cResType res) . word "&" .
    word cname . semi

cFunAddr :: String -> ShowS
cFunAddr cname =
    indent . word "result = " . word cname . semi

cDynamic :: Int -> Res -> ShowS
cDynamic arity res =
      indent . (case res of
                    Unit -> id
                    _    -> word "result = ") .
      word "(*arg1)" .  parens (listsep comma (map narg [2..arity])) . semi

cFooter :: (String->Warning) -> ShowS -> Arg -> ShowS
cFooter warn profinfo arg =
    indent . word "nodeptr = " . hConvert warn arg (word "result") . semi .
    indent . word "INIT_PROFINFO(nodeptr,&" . profinfo . word ")" . semi .
    indent . word "C_RETURN(nodeptr)" . semi


---- foreign export ----

cCodeDecl :: String -> [Arg] -> Res -> ShowS
cCodeDecl cname args res =
    cResType res . space . word cname . space .
      parens (listsep comma (zipWith cArgDecl args [1..]))

cResType :: Res -> ShowS
cResType res = cTypename res

hCall :: (String->Warning) -> Int -> TokenId -> [Arg] -> ShowS
hCall warn arity hname args =
    indent . word "NodePtr nodeptr, vap, args" . squares (shows arity) . semi .
    indent . word "C_CHECK" .
        parens (parens (shows (arity+1) . word "+EXTRA") . word "*2") . semi .
    foldr (.) id (zipWith hArg1 args [1..]) .
    indent . word "vap = Hp" . semi .
    indent . word "*Hp = " . parens (word "Node") .
        word "C_VAPTAG" . parens (localname hname) . semi .
    indent . word "Hp += 1+EXTRA" . semi .
    foldr (.) id (zipWith hArg2 args [1 :: Int ..]) .
    indent . word "nodeptr = evalExport(vap)" . semi .
    indent . word "IND_REMOVE(nodeptr)" . semi
  where
    hArg1 arg n = indent . word "args" . squares (shows (n-1)) . space .
                  equals . space . hConvert warn arg (narg n) . semi
    hArg2 _   n = indent . word "*Hp++ = (Node)args" . squares (shows (n-1)) . semi

hResult :: Res -> ShowS
hResult Unit = id       -- allow for IO ()
hResult res  = indent . word "return" . space . cConvert res . semi


---- shared between foreign import/export ----

cTypename :: Arg -> ShowS
cTypename Int8         = word "HsInt8"
cTypename Int16        = word "HsInt16"
cTypename Int32        = word "HsInt32"
cTypename Int64        = word "HsInt64"
cTypename Word8        = word "HsWord8"
cTypename Word16       = word "HsWord16"
cTypename Word32       = word "HsWord32"
cTypename Word64       = word "HsWord64"
cTypename Int          = word "HsInt"
cTypename Bool         = word "HsBool"
cTypename Char         = word "char"
cTypename Float        = word "float"
cTypename Double       = word "double"
cTypename Ptr          = word "void*"
cTypename (FunPtr t)   = cResType (last t) . parens star
                         . parens (listsep comma (map cTypename (init t)))
cTypename StablePtr    = word "StablePtr"
cTypename ForeignPtr   = word "void*"
cTypename Unit         = word "void"
cTypename Addr         = word "void*"   -- deprecated
cTypename ForeignObj   = word "void*"   -- deprecated
cTypename PackedString = word "char*"   -- non-standard
cTypename Integer      = word "Node*" -- non-standard
cTypename (Unknown _)  = word "Node*" -- for passing Haskell heap values
-- cTypename x = error ("*** cTypename [" ++ show x ++ "]")

cConvert :: Arg -> ShowS
cConvert Int          = word "GET_INT_VALUE(nodeptr)"
cConvert Bool         = word "GET_BOOL_VALUE(nodeptr)"
cConvert Char         = word "GET_CHAR_VALUE(nodeptr)"
cConvert Float        = word "get_float_value(nodeptr)"
cConvert Double       = word "get_double_value(nodeptr)"
cConvert Int8         = word "GET_8BIT_VALUE(nodeptr)"
cConvert Int16        = word "GET_16BIT_VALUE(nodeptr)"
cConvert Int32        = word "GET_32BIT_VALUE(nodeptr)"
cConvert Int64        = word "nhc_get_64bit_value(nodeptr)"
cConvert Word8        = word "GET_8BIT_VALUE(nodeptr)"
cConvert Word16       = word "GET_16BIT_VALUE(nodeptr)"
cConvert Word32       = word "GET_32BIT_VALUE(nodeptr)"
cConvert Word64       = word "nhc_get_64bit_value(nodeptr)"
cConvert Ptr          = word "GET_INT_VALUE(nodeptr)"
cConvert (FunPtr _)   = word "GET_INT_VALUE(nodeptr)"
cConvert StablePtr    = word "GET_INT_VALUE(nodeptr)"
cConvert ForeignPtr   = word "derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr))"
cConvert Addr         = word "GET_INT_VALUE(nodeptr)"
cConvert ForeignObj   = word "derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr))"
cConvert PackedString = word "nhc_getPackedString(nodeptr)"
cConvert Integer      = word "nodeptr"
cConvert Unit         = word "0"
cConvert (Unknown _)  = word "nodeptr"

hConvert :: (String->Warning) -> Arg -> ShowS -> ShowS
hConvert w Int          s = word "nhc_mkInt" . parens s
hConvert w Bool         s = word "nhc_mkBool" . parens s
hConvert w Char         s = word "nhc_mkChar" . parens s
hConvert w Float        s = word "nhc_mkFloat" . parens s
hConvert w Double       s = word "nhc_mkDouble" . parens s
hConvert w Int8         s = word "nhc_mkInt8" . parens s
hConvert w Int16        s = word "nhc_mkInt16" . parens s
hConvert w Int32        s = word "nhc_mkInt32" . parens s
hConvert w Int64        s = word "nhc_mkInt64" . parens s
hConvert w Word8        s = word "nhc_mkWord8" . parens s
hConvert w Word16       s = word "nhc_mkWord16" . parens s
hConvert w Word32       s = word "nhc_mkWord32" . parens s
hConvert w Word64       s = word "nhc_mkWord64" . parens s
hConvert w Ptr          s = word "nhc_mkInt" . parens (word "(int)" . s)
hConvert w (FunPtr _)   s = word "nhc_mkInt" . parens (word "(int)" . s)
hConvert w StablePtr    s = word "nhc_mkInt" . parens (word "(int)" . s)
{- Returning ForeignPtr's to Haskell is usually illegal: -}
hConvert w ForeignPtr   s = warning (w "should not return ForeignPtr type.\n") s
hConvert w Addr         s = word "nhc_mkInt" . parens (word "(int)" . s)
{- Returning ForeignObj's to Haskell is usually illegal: -}
hConvert w ForeignObj   s = warning (w "should not return ForeignObj type.\n") s
hConvert w PackedString s = word "nhc_mkString" . parens (word "(char*)" . s)
hConvert w Integer      s = s
hConvert w Unit         _ = word "nhc_mkUnit()"
hConvert w (Unknown _)  s = s	-- for passing Haskell heap values untouched

openparen, closeparen, opencurly, closecurly, semi,
   nl, space, equals, comma, star, indent :: ShowS
openparen  = showChar '('
closeparen = showChar ')'
opencurly  = showChar '{'
closecurly = showChar '}'
semi       = showChar ';' . nl
nl         = showChar '\n'
space      = showChar ' '
equals     = showChar '='
comma      = showChar ','
star       = showChar '*'
indent     = space . space

parens, squares, strquote, comment :: ShowS -> ShowS
parens   s = openparen . s . closeparen
squares  s = showChar '[' . s . showChar ']'
strquote s = showChar '"' . s . showChar '"'
comment  s = word "/*" . space . s . space . word "*/"

word :: String -> ShowS
word = showString

narg :: Int -> ShowS
narg n = word "arg" . shows n

listsep :: ShowS -> [ShowS] -> ShowS
listsep s x = if length x > 0 then foldr1 (\l r -> l . s . r) x else id
