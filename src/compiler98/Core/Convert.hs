module Core.Convert(makeCore,CoreImport(..)) where

import Id
import TokenId
import Util.Extra(mixLine,mixSpace,mix)
import PosCode
import StrPos
import List
import Data.Char
import Util.Extra
import Error
import IntState
import Maybe
import NT
import ForeignCode
import Control.Monad.State
import qualified Data.Map as Map
import qualified Data.Set as Set
import SysDeps(unpackPS, packString)

import Yhc.Core

-- | internal compiler state
data CState = CState {
                csState :: IntState,
                csBinds :: Map.Map Id String,
                csBound :: Set.Set Id,
                csFail :: CoreExpr,
                csNextFail :: Int,
                csImports :: Set.Set CoreImport
              }

-- | a symbol imported to core
data CoreImport = CoreImportCtor {
                        coreImportName :: String,
                        coreImportCtorData :: CoreData
                } | CoreImportFunc {
                        coreImportName :: String,
                        coreImportFuncArity :: Int
                }
                deriving (Ord,Eq)

instance Show CoreImport where
    show (CoreImportCtor name dat) = name ++ " from " ++ show dat
    show (CoreImportFunc name arity) = name ++ " " ++ intersperse ' ' (replicate arity '_')

-- | compiler monad
type CMonad a = State CState a

-- | convert pos lambda to yhc core
makeCore :: [String] -> IntState -> [Id] -> [(Id,PosLambda)] -> (Core,[CoreImport])
makeCore imports state datas funcs = (core,coreimports)
    where
    modu          = getModuleId state
    (core,cstate) = runState (cProgram imports datas funcs) $ CState state Map.empty Set.empty nofail 0 Set.empty
    nofail        = error "makeCore: no failure on stack"
    coreimports   = builtinImports ++ (Set.toList $ csImports cstate)

-- | imports for Prelude.True and Prelude.False which are used internally in compiling ifs
-- | also includes the one tuple as that can't be expressed in Haskell
builtinImports :: [CoreImport]
builtinImports = dataToImp dataBool ++ dataToImp dataOne
    where
    dataToImp dat = map (\ctor -> CoreImportCtor (coreCtorName ctor) dat) $ coreDataCtors dat

    dataBool = CoreData "Prelude;Bool" [] [ CoreCtor "Prelude;True" [], CoreCtor "Prelude;False" [] ]
    dataOne  = CoreData "Prelude;1()" ["a"] [ CoreCtor "Prelude;1()" [("a",Nothing)] ]

-- | convert a program to a core program
cProgram :: [String] -> [Id] -> [(Id,PosLambda)] -> CMonad Core
cProgram imports datas funcs = do
    datas' <- mapM cData datas
    funcs' <- mapM cFunc funcs
    state  <- getState
    return $ Core (getModuleId state) imports datas' funcs'

-- | convert a data to a core data
cData :: Id -> CMonad CoreData
cData i = do
    state <- getState
    let (cdata,binds) = dataToCore state i
    mapM_ (uncurry bind) binds
    return cdata

-- | convert a data to a core data, pure version
dataToCore :: IntState -> Id -> (CoreData,[(Id,String)])
dataToCore state i = (cdata, (i,name) : map snd ctors)
    where
    name               = encodeName state i
    NewType free _ _ _ = typ
    (InfoData _ _ _ typ children) = fst $ getInfo i () state
    childs = case children of
                  (DataNewType _ x) -> x
                  (Data _ x) -> x
    ctors = map (constrToCore state) childs
    cdata = CoreData name (map strTVar free) (map fst ctors)

-- | convert a constructor to core, pure version
constrToCore :: IntState -> Id -> (CoreCtor,(Id,String))
constrToCore state i = (ctor,(i,name))
    where
    ctor                = CoreCtor name $ zip (map cType targs) (map cField fields)
    name                = encodeName state i
    NewType _ _ _ targs = typ
    (InfoConstr _ _  _ _ typ fields _) = fst $ getInfo i () state

    cField Nothing = Nothing
    cField (Just x) = Just $ dropModule $ strIS state x

    cType x = strNT (strIS state) strTVar x

-- | convert a function to core
cFunc :: (Id,PosLambda) -> CMonad CoreFunc
cFunc (i, PosLambda pos int fvs bvs e) = do
        name <- bindGlobal i
        args <- mapM (bindLocal . snd) bvs
        e' <- cExpr e
        return $ CoreFunc name args (wrapPos pos e')
    where
    wrapPos pos x | pos == noPos = x
                  | otherwise    = CorePos (show pos) x

-- | convert a foreign function
cFunc (i, PosForeign pos id arity cname cc Imported) = do
    state <- getState
    name <- bindGlobal i
    let arity                         = arityIS state i
        (InfoVar un tok ex fix nt ar) = fromJust $ lookupIS state i
        cname'                        = if cname == "" then getUnqualified tok else cname
        cconv                         = show cc
        syms                          = getSymbolTable state
        memo                          = foreignMemo syms
        forn                          = toForeign FFIWarn syms memo cc Imported cname arity i
    case forn of
        Foreign ie proto style mpath _ htok arity args res -> do
            let types = map foreignArgType args ++ [foreignArgType res]
            return $ CorePrim name arity cname' cconv True types

-- | calculate the type name for a foreign arg
foreignArgType :: Arg -> String
foreignArgType x =
    case x of
        Int8 -> "Data.Int;Int8"
        Int16 -> "Data.Int;Int16"
        Int32 -> "Data.Int;Int32"
        Int64 -> "Data.Int;Int64"
        Word8 -> "Data.Word;Word8"
        Word16 -> "Data.Word;Word16"
        Word32 -> "Data.Word;Word32"
        Word64 -> "Data.Word;Word64"
        Int -> "Prelude;Int"
        Float -> "Prelude;Float"
        Double -> "Prelude;Double"
        Char -> "Prelude;Char"
        Bool -> "Prelude;Bool"
        Ptr -> "Foreign.Ptr;Ptr"
        (FunPtr _) -> "Foreign.Ptr;FunPtr"
        StablePtr -> "Foreign.StablePtr;StablePtr"
        ForeignPtr -> "Foreign.ForeignPtr;ForeignPtr"
        PackedString -> "Data.PackedString;PackedString"
        Integer -> "Prelude;Integer"
        (HaskellFun _) -> "Prelude;->"
        (Unknown _) -> "Prelude;a"
        Unit -> "Prelude;()"

-- | convert an expression to core
cExpr :: PosExp -> CMonad CoreExpr
cExpr x = case x of
    -- literals
    PosInt _ i -> return $ CoreLit $ CoreInt i
    PosInteger _ i -> return $ CoreLit $ CoreInteger i
    PosChar _ c -> return $ CoreLit $ CoreChr (chr c)
    PosString _ s -> return $ CoreLit $ CoreStr s
    PosFloat _ f -> return $ CoreLit $ CoreFloat f
    PosDouble _ d -> return $ CoreLit $ CoreDouble d

    -- simple expressions
    PosExpDict e -> cExpr e
    PosExpThunk p _ args -> cExpr (PosExpApp p args)
    PosCon _ i -> liftM CoreCon $ bindGlobal i
    PosPrim _ prim _ -> return $ CoreFun $ strPrim prim
    PosVar _ i -> do
        free <- isFree i
        if free then do
            name <- bindGlobal i
            return (CoreFun name)
         else do
            name <- bindLocal i
            return (CoreVar name)

    PosExpApp _ (a:as) -> do
        a' <- cExpr a
        if a' == CoreFun "STRING" then cExpr (head as)
         else do
            as' <- mapM cExpr as
            return (CoreApp a' as')

    -- let bindings
    PosExpLet _ _ [] e -> cExpr e
    PosExpLet _ _ bs e -> inNewEnv $ do
        ns <- mapM (\(i,_) -> bindLocal i) bs
        binds <- zipWithM (\(i,PosLambda _ _ _ _ e) n -> do { x <- cExpr e ; return (n,x) }) bs ns
        e' <- cExpr e
        return (CoreLet binds e')

    -- If and Case
    PosExpIf pos g e1 e2 e3 -> do
        e1' <- cExpr e1
        e2' <- cExpr e2
        e3' <- cExpr e3
        let true = PatCon "Prelude;True" []
            false = PatCon "Prelude;False" []
        return $ CoreCase e1' [(true, e2'),(false,e3')]

    PosExpCase pos e alts -> do
        e' <- cExpr e
        alts' <- mapM cAlt alts
        return $ CoreCase e' alts'
        where
        cAlt (PosAltInt pos i False e) = do { x <- cExpr e ; return (PatLit $ CoreChr (chr i), x) }
        cAlt (PosAltInt pos i True e) = do { x <- cExpr e ; return (PatLit $ CoreInt i, x) }
        cAlt (PosAltCon pos c vars e) = inNewEnv $ do
            vs <- mapM (bindLocal . snd) vars
            con <- bindCon c
            e' <- cExpr e
            return (PatCon con vs, e')

    -- fat bar and fail
    PosExpFatBar _ e1@(PosExpCase {}) PosExpFail -> do
        CoreCase a b <- cExpr e1
        failExp <- getFailExpr
        return $ CoreCase a (b ++ [(PatDefault,failExp)])

    PosExpFatBar _ e1 PosExpFail -> cExpr e1
    PosExpFatBar pos e1 e2 -> do
        e2' <- cExpr e2
        inNewFailure (\v -> CoreVar $ "v_fail_"++show v) $ \ var -> do
            e1' <- cExpr (PosExpFatBar pos e1 PosExpFail)
            return $ CoreLet [(fromCoreVar var, e2')] e1'

    PosExpFail -> getFailExpr
    other -> do
        state <- getState
        raiseError $ ErrorInternal "Core.Core.cExpr" (strPExp (strIS state) "" other)

-- | perform computation inside a new environment
inNewEnv :: CMonad a -> CMonad a
inNewEnv f = do
    cs <- get
    x <- f
    modify $ \ cs' -> cs' { csBound = csBound cs }
    return x

-- | perform computation inside new failure group
inNewFailure :: (Int -> CoreExpr) -> (CoreExpr -> CMonad a) -> CMonad a
inNewFailure fexp f = do
    fnum <- State $ \ cs -> let n = csNextFail cs in (n,cs {csNextFail = n+1})
    let exp = fexp fnum
    oldFail <- State $ \ cs -> (csFail cs, cs { csFail = exp  })
    x <- f exp
    modify $ \ cs -> cs { csFail = oldFail }
    return x

-- | retrieve the current failure
getFailExpr :: CMonad CoreExpr
getFailExpr = gets csFail

-- | add a variable to the list of bound variables
addBound :: Id -> CMonad ()
addBound id = modify $ \ cs -> cs { csBound = Set.insert id (csBound cs) }

-- | test whether a variable is free
isFree :: Id -> CMonad Bool
isFree id = gets $ \ cs -> not (Set.member id (csBound cs))

-- | bind a variable to a name
bind :: Id -> String -> CMonad Bool
bind i s = State $ \ cs ->
    let binds = csBinds cs
    in case Map.lookup i binds of
        Just s' -> if s /= s' then error $ "bind: rebind mismatch '"++s++"' '"++s'++"'"
                                else (False,cs)
        Nothing ->
            let cs'   = cs { csBinds = Map.insert i s binds }
            in (True,cs')

-- | build an import item from an identifier and its core name
buildImportItem :: IntState -> Id -> String -> CoreImport
buildImportItem state id name
    | isConstr info = CoreImportCtor name coredata
    | otherwise     =
        case info of
            -- ermm I really wonder why tuple uses InfoName? [TS]
            InfoName _ (TupleId n) _ _ _ -> CoreImportCtor name (tupleData n)
            _                            -> CoreImportFunc name arity
    where
    info         = fromJust $ lookupIS state id
    tid          = tidI info
    dataid       = belongstoI info
    (coredata,_) = dataToCore state dataid
    arity        = arityIS state id

    -- build a datatype for a tuple ...
    tupleData n = CoreData name types [ctor]
        where
        ctor  = CoreCtor name $ map (\t -> (t,Nothing)) types
        types = map (\x -> [x]) $ take n ['a'..]


-- | bind a global, this fixes issues with lambdas
bindGlobal :: Id -> CMonad String
bindGlobal i = do
    (mod,item) <- gets $ \ cs -> encodeNamePair (csState cs) i
    let name = mod ++ ";" ++ item
    newBind <- bind i name
    when newBind $ do
        state <- getState
        case lookupIS state i of
            Nothing -> return ()
            Just info -> do
                -- if this is an import then build an import item
                when (getModuleId state /= mod) $ do
                    let imp = buildImportItem state i name
                    modify $ \ cs -> cs { csImports = Set.insert imp (csImports cs) }
    return name

-- | bind a local name, also adds to the list of bound variables
bindLocal :: Id -> CMonad String
bindLocal i = do
    name <- gets $ \ cs ->
        let (mod,item) = encodeNamePair (csState cs) i
            thismod    = getModuleId (csState cs)
        in if mod /= thismod then error $ "bindLocal: ("++mod++";"++item++") in "++thismod
                             else item
    bind i name
    addBound i
    return name

-- | bind a constructor
bindCon :: Id -> CMonad CoreCtorName
bindCon i = bindGlobal i

-- | get the state
getState :: CMonad IntState
getState = gets csState

-- | encode a name to a string
encodeName :: IntState -> Id -> String
encodeName state id = mod ++ ";" ++ item
    where (mod,item) = encodeNamePair state id

-- | encode a name into a (module,item) pair
encodeNamePair :: IntState -> Id -> (String,String)
encodeNamePair state id =
    case lookupIS state id of
        Just info -> encode (tidI info)
        Nothing   -> encode (Visible $ packString $ reverse $ "v"++show id)
    where
    encode tok =
        case tok of
            TupleId n -> ("Prelude",tupleName n)
            Visible rps -> (getModuleId state, unpackRPS rps)
            Qualified mrps irps -> (unpackRPS mrps, unpackRPS irps)
            Qualified2 mrps ctok ttok -> (unpackRPS mrps, encode' ttok ++ ";" ++ encode' ctok)
            Qualified3 mrps ctok ttok mtok ->
                case fromJust $ lookupIS state id of
                    InfoVar{} -> localFun
                    InfoName _ _ _ _ True -> localFun
                    _                     -> (unpackRPS mrps, encode' ttok ++ ";" ++ encode' ctok ++ ";" ++ getUnqualified mtok)
                where
                localFun = case ttok of
                                TupleId n -> (unpackRPS mrps, show n ++ "_" ++ getUnqualified mtok)
                                _         -> error $ "encodeNamePair: '"++show tok++"' marked as local function!"

    encode' tok = show tok -- does this work? let (mod,item) = encode tok in mod ++ "." ++ item
    isDataType tok = isUpper $ head $ getUnqualified tok
    unpackRPS rps = reverse $ unpackPS rps

-- | get the name of a tuple
tupleName :: Int -> String
tupleName 1 = "1()"
tupleName n = "("++replicate (n-1) ','++")"

