{-
    This is the module ByteCode.Compile re-written to compile for Yhc Core instead of Pos Lambda.
-}
module ByteCode.CompileYhcCore where

import ByteCode.Type
import ByteCode.Metric
import Flags
import IntState hiding (getIntState, getFlags)
import Control.Monad.State
import Control.Monad(when)
import Core.Convert
import qualified Data.Map as Map
import Util.Extra(Pos, noPos)
import qualified Data.Set as Set
import Yhc.Core
import StrPos
import Prim
import Data.Maybe
import Data.List(isPrefixOf)
import ForeignCode
import TokenId
import SysDeps(unpackPS)
import NT
import Util.Extra
import Syntax(CallConv(..))

---------------------------------------------------------------------------------------------------------------

-- | a variable, just to save typing space
type Var = CoreVarName

-- | The state of the compilation process
data CState = CState {
        csFlags :: Flags,                           -- ^ the overal compilation flags

        -- FIXME: this probably isn't the right way to handle imports, instead we likely need to
        -- reparse all the .hi files ... blurk!
        csImports :: Map.Map String CoreImport,     -- ^ import definitions

        -- function level compiling
        csConsts :: Map.Map ConstItem CRef,         -- ^ the current constant table items
        csThisFunc :: String,                       -- ^ the name of the current func (for debugging the compiler)
        csNextConst :: CRef,                        -- ^ the next available constant reference
        csNextLabel :: Label,                       -- ^ the next available label
        csMaxDepth :: Int,                          -- ^ the maximum stack depth encountered
        csIns :: [UseIns],                          -- ^ the outputted instructions

        -- block level compiling
        csEnv :: Map.Map Var Where,                 -- ^ a mapping from variables to arg\/stack locations
        csDepth :: Int,                             -- ^ the current stack depth
        csEvals :: Set.Set Var,                     -- ^ the set of already evaluated variables
        csFails :: [(Label,Int)]                    -- ^ the stack of failure labels and stack depths
    }

-- | compiler mode (strict or lazy)
data CMode = Strict | Lazy deriving (Eq,Show)

-- | where a variable is stored
data Where = Stack Int            -- ^ on the stack
           | Arg Int              -- ^ as an argument
           deriving Show

-- | A case pattern
{-
data Pattern = PatCon CoreCtorName [Var]        -- ^ a constructor application with some variables
             | PatInt Int                       -- ^ an integer (or character)
             | PatDefault Var                   -- ^ a default with a variable (can be '_')
             deriving Show
-}

-- | A monad for compiling
type Compiler a = State CState a

---------------------------------------------------------------------------------------------------------------

-- | Compile Yhc.Core into bytecode, top-level function
bcCompile :: Flags               -- ^ compiler flags
          -> IntState            -- ^ internal state
          -> [CoreImport]        -- ^ items imported into core
          -> Core                -- ^ core to compile
          -> BCModule            -- ^ compiled bytecode
bcCompile flags state imports core = BCModule (getModuleId state) decls
    where
    (decls,cs') = runState (cCore core) cs
    protos = Map.fromList $ map (\imp -> (coreImportName imp,imp)) $ imports ++ coreToImports core
    cs = CState flags protos Map.empty "_none_" 0 0 0 [] Map.empty 0 Set.empty []

-- | convert a core to a list of imports of the items within that core
coreToImports :: Core -> [CoreImport]
coreToImports core = ictors ++ ifuncs
    where
    ictors = concatMap dataToCore $ coreDatas core
    ifuncs = map funcToCore $ coreFuncs core

    dataToCore dat = map (\ctor -> CoreImportCtor (coreCtorName ctor) dat) $ coreDataCtors dat
    funcToCore fun = CoreImportFunc (coreFuncName fun) (coreFuncArity fun)

---------------------------------------------------------------------------------------------------------------
-- top-level compilation
---------------------------------------------------------------------------------------------------------------

-- | Compile the complete Yhc.Core into bytecode declarations
cCore :: Core -> Compiler [BCDecl]
cCore core = do
    core <- return $ reduceRecursiveLet core
    fdecls <- mapM cFunc (coreFuncs core)
    cdecls <- mapM cData (coreDatas core)
    return $ concat $ fdecls ++ cdecls

-- | Compile a Data declaration into bytecode declarations
cData :: CoreData -> Compiler [BCDecl]
cData cdata = zipWithM cCtor (coreDataCtors cdata) [0..]

-- | Compile a single constructor into a declaration
cCtor :: CoreCtor           -- ^ the constructor to compile
      -> Int                -- ^ the tag of the constructor
      -> Compiler BCDecl    -- ^ the geenrated declaration
cCtor ctor tag = do
    let arity = length $ coreCtorFields ctor
    return (Con (coreCtorName ctor) noPos arity tag)

-- | Compile a function declaration into a bytecode declaration
cFunc :: CoreFunc  -> Compiler [BCDecl]
cFunc func
    | isCorePrim func = cPrim func
    | otherwise = do
        modify $ \ cs -> cs { csThisFunc = coreFuncName func }
        let args = coreFuncArgs func
        (ins,cstate) <- makePure $ cBody (remCorePos $ coreFuncBody func) args
        let maxDepth  = csMaxDepth cstate
            consts    = Map.fromList $ map (\(x,y) -> (y,x)) $ Map.toList (csConsts cstate)
            pos       = noPos
        return [ Fun (coreFuncName func) pos (length args) args (CLinear ins) consts False maxDepth 0 [] ]

-- | compile the body of the a function and its arguments to bytecode instructions
cBody :: CoreExpr -> [Var] -> Compiler [UseIns]
cBody exp@(CoreCase (CoreVar v) [(PatCon c vs, CoreVar v2)]) args@[arg] = do
    only <- isOnlyCon c
    if only && v2 `elem` vs then do
        let no    = fromJust $ lookup v2 (zip vs [0..])
            selUS = UseSet 0 [] (Set.singleton arg)
            code  = [(NEED_HEAP 1,emptyUS), (SELECTOR_EVAL,selUS), (SELECT no,emptyUS), (RETURN,emptyUS)]
        return code
     else
        cBody' exp args
cBody exp args = cBody' exp args

-- | compile the body of a function that is definitely not a selector
cBody' :: CoreExpr -> [Var] -> Compiler [UseIns]
cBody' exp args = do
    zipWithM_ (\a n -> bind a (Arg n)) args [0..]
    cExpr Strict exp
    emit RETURN
    getIns

-- | compile a primitive function
cPrim :: CoreFunc -> Compiler [BCDecl]
cPrim prim = do
    let name     = coreFuncName prim
        xname    = name ++ "#X"
        arity    = corePrimArity prim
        cname    = corePrimExternal prim
        cconv    = corePrimConv prim
        types    = corePrimTypes prim

        ext name = External name noPos arity cname cconv types
    if cconv == "builtin" then
       return [ext name]
     else do
        let args     = [0..arity-1]
            argNames = map show args
            evals    = concat $ zipWith evalArg args argNames
            code     = evals ++ [ (PRIMITIVE, UseSet 0 argNames (Set.fromList argNames)),
                                  (EVAL,emptyUS),
                                  (RETURN,emptyUS) ]
            consts   = Map.singleton 0 (CGlobal xname GFUN)
            wrapper  = Fun name noPos arity [] (CLinear code) consts True 1 0 []

            evalArg i v = [ (PUSH_ARG i, UseSet 0 [v] (Set.singleton v)), (EVAL,emptyUS), (POP 1,emptyUS) ]
        return [wrapper, ext xname]

-- | decide whether a constructor is the only constructor in the datatype
isOnlyCon :: CoreCtorName -> Compiler Bool
isOnlyCon c = do
    dat <- lookupImportData c
    return $ length (coreDataCtors dat) == 1

---------------------------------------------------------------------------------------------------------------
-- expression compilation
---------------------------------------------------------------------------------------------------------------

-------------------------------------------------------------------------
-- | compile an expression (either strictly or lazily)
cExpr :: CMode -> CoreExpr -> Compiler ()

-- a simple zero arity constructor
cExpr mode (CoreCon name) = do
    pushConst (CGlobal name GZCON)

-- a simple variable
cExpr mode (CoreVar name) = do
    pushVar name
    evalVar mode name

-- a function (with no arguments applied)
cExpr mode (CoreFun name) = do
    arity <- lookupImportArity name
    if arity == 0 then
        pushConst (CGlobal name GCAF)
     else
        pushConst (CGlobal name GFUN0)
    eval mode

-- the special SEQ primitive
cExpr mode exp@(CoreApp (CoreFun "SEQ") [x,y]) = do
    cExpr Strict x
    emit (POP 1)
    cExpr mode y

-- application to no arguments
cExpr mode exp@(CoreApp f []) = cExpr mode f

-- an application to a function/constructor
cExpr mode exp@(CoreApp f as) = do
    let (f',as') = flattenCoreApp exp
        num      = length as'
    case f' of
        CoreCon c -> do
            cArgs Lazy as'
            ci <- addConst (CGlobal c GCON)
            emit (MK_CON ci num)

        CoreFun f ->
            case primForFunc f of
                Nothing -> do
                    cArgs Lazy as'
                    arity <- lookupImportArity f
                    cCallGlobal mode f num arity

                Just i -> do
                    cArgs Strict as'
                    emit i

        CoreVar v -> do
            cArgs Lazy as'
            pushVar v
            emit (APPLY num)
            eval mode
        
        CoreCase _ _ -> if mode /= Strict then error "cExpr: CoreApp to CoreCase in non-strict context!"
                        else do
                            cArgs Lazy as'
                            cExpr Strict f'
                            emit (APPLY num)
                            emit (EVAL)

-- a case statement that is really an if
cExpr Strict (CoreCase e as)
    | isJust asIf = do
        let (tcase,fcase) = fromJust asIf
        cExpr Strict e
        [false,after] <- newLabels 2
        emit (JUMP_FALSE false)

        let tbranch = do { cIfBranch tcase True false after }
            fbranch = do { cIfBranch fcase False false after }

        branchs after "If" [tbranch, fbranch]
        emit (LABEL after)
    where
    asIf = altsAsIf as

-- a case statement
cExpr Strict (CoreCase e as) = do
    cExpr Strict e
    las <- newLabels (length as)
    after <- newLabel
    let as' = zipWith (\(p,e) l -> (l,p,e)) as las
    (isInt,complete,ts,def) <- decomposeAlts as'
    emit (CASE isInt (zip ts las) def)
    let calts = map (cAlt after) as'
    branchs after "Case" calts
    emit (LABEL after)

-- a let statement used for a failure case
cExpr mode exp@(CoreLet [(name,bind)] e)
    | isFailure name = do
        lfail <- newLabel
        lexit <- newLabel
        let ce = withFailure lfail $ do { cExpr mode e ; emit (JUMP lexit) ; return True }
            cf = do { emit (LABEL lfail) ; cExpr mode bind ; return True }

        branchs lexit "Failure" [ce,cf]
        emit (LABEL lexit)

-- a let statement
cExpr mode exp@(CoreLet bs e)
    | isCoreLetRec exp = do
        emit (ALLOC n)
        zipWithM_ (\(v,_) n -> bind v (Stack n)) bs [0..]
        zipWithM_ (cBinding True) bs [0..]
        cExpr mode e
        emit (SLIDE n)

    | otherwise        = do
        zipWithM_ (cBinding False) bs [0..]
        cExpr mode e
        emit (SLIDE n)
    where
    n = length bs

-- an int
cExpr mode (CoreLit lit) =
    case lit of
        CoreInt i -> if isShort i then emit (PUSH_INT i)
                                  else pushConst (CInt i)
        CoreInteger i -> pushConst (CInteger i)
        CoreChr c -> emit (PUSH_CHAR $ fromEnum c)
        CoreStr s -> do { pushConst (CString s) ; emit P_STRING }
        CoreFloat f -> pushConst (CFloat f)
        CoreDouble d -> pushConst (CDouble d)
-------------------------------------------------------------------------

-- | compile the arguments to a function
cArgs :: CMode -> [CoreExpr] -> Compiler ()
cArgs mode args = mapM_ (cExpr mode) (reverse args)

-- | emit instructions to call a global function
cCallGlobal :: CMode        -- ^ mode to compile in (strict or lazy)
            -> Var          -- ^ the name of the function to call
            -> Int          -- ^ the number of arguments given
            -> Int          -- ^ the number of arguments expected
            -> Compiler ()
cCallGlobal mode f got expect
    -- saturated or super-saturated case
    | got >= expect = do
        let extra = got - expect
        -- do a MK_AP or PUSH_CONST depending on expected arity
        if expect > 0 then do
            fi <- addConst (CGlobal f GFUN)
            emit (MK_AP fi expect)
         else do
            fi <- addConst (CGlobal f GCAF)
            emit (PUSH_CONST fi)
        -- apply extra arguments if needed
        when (extra > 0) $ do
            emit (APPLY extra)
        -- eval the result if needed
        eval mode

    -- partial application
    | otherwise = do
        fi <- addConst (CGlobal f GFUN)
        emit (MK_PAP fi got)

-- | compile an if branch
cIfBranch :: CoreExpr -> Bool -> Label -> Label -> Compiler Bool
cIfBranch expr isTrue false after = do
    when (not isTrue) $ do
         emit (LABEL false)

    let failure = isCoreVar expr && isFailure (fromCoreVar expr)
    if failure then cFail
     else do
        cExpr Strict expr
        when isTrue $ emit (JUMP after)
        return True

-- | an internal alternative
type Alt = (Label,CorePat,CoreExpr)

-- | compile an alternative
cAlt :: Label ->                     -- the label for the end of the case statement
        Alt ->                       -- the label for the start, the pattern and the expression
        Compiler Bool                -- returns whether result was normal exit (non-failure)
cAlt after (label,pat,expr) = do
    emit (LABEL label)
    let failure = isCoreVar expr && isFailure (fromCoreVar expr)
    if failure then do
        cFail
     else do
        case pat of
            PatCon c vs -> do
                let n = length vs
                emitUse (UNPACK n) vs Set.empty
                zipWithM_ (\v n -> bind v (Stack n)) vs [0..]
                cExpr Strict expr
                emit (SLIDE n)

            _ -> do
                emit (POP 1)
                cExpr Strict expr

        emit (JUMP after)
        return True

-- | compile a let binding (either for recursive or non-recursive let)
cBinding :: Bool -> (CoreVarName,CoreExpr) -> Int -> Compiler ()
cBinding rec (v,e) n = do
    cExpr Lazy e
    if rec then do
        emitUse (UPDATE n) [] (Set.singleton v)
     else
        bind v (Stack 0)

-- | compile a failure
cFail :: Compiler Bool
cFail = do
   (lfail,fDepth) <- getFailure
   depth <- getDepth
   let err = error $ "cFail: failure: depth = "++show depth++", fail depth = "++show fDepth
       num = if depth < fDepth then err else depth - fDepth
   emit (POP num)
   emit (JUMP lfail)
   return False

-- | return the special primitive instruction associated with a function, or Nothing
primForFunc :: CoreFuncName -> Maybe Ins
primForFunc fun = lookup fun prims
    where
    ops = [ (ADD,P_ADD), (SUB,P_SUB), (MUL,P_MUL), (SLASH,P_DIV), (CMP_EQ,P_CMP_EQ), (CMP_NE,P_CMP_NE),
            (CMP_LE,P_CMP_LE), (CMP_LT,P_CMP_LT), (CMP_GE,P_CMP_GE), (CMP_GT,P_CMP_GT), (NEG,P_NEG) ]
    others = [ (ORD,P_FROM_ENUM), (STRING,P_STRING), (QUOT,P_DIV OpWord), (REM,P_MOD OpWord) ]
    prims = map prim $ [ (p k,i k) | (p,i) <- ops, k <- [OpWord,OpFloat,OpDouble] ] ++ others
    prim (prim,ins) = (strPrim prim,ins)

-- | turn a nested application of CoreApp into a function and list of arguments
flattenCoreApp :: CoreExpr -> (CoreExpr,[CoreExpr])
flattenCoreApp (CoreApp f as) = let (f',as') = flattenCoreApp f in (f',as'++as)
flattenCoreApp f              = (f,[])

-- | decompose a list of alternatives into (int-case,complete,tags,default)
--   where int-case is true if this is an int-case, complete is true if the case is complete,
--   tags is the list of constructor tag numbers and default is the default case (if there is one)
decomposeAlts :: [Alt] -> Compiler (Bool,Bool,[Tag],Maybe Label)
decomposeAlts as =
    case ndefs of
        (_,PatLit c,e):_ -> do
            let tagof (PatLit c) = case c of { CoreInt i -> i ; CoreChr c -> fromEnum c }
                tags = map (\(_,p,_) -> tagof p) ndefs
            return (True,False,tags,ldef)

        (_,PatCon c vs,e):_ -> do
            dat <- lookupImportData c
            let constrs  = map coreCtorName $ coreDataCtors dat
                ncons    = zip constrs [0..]
                complete = length as == length constrs
                tags     = map (\(_,PatCon c _, _) -> fromJust $ lookup c ncons) ndefs
            return (False,complete,tags,ldef)
    where
    (ndefs,defs) = break (\(_,p,_) -> isPatDefault p) as
    ldef         = case defs of
                        []            -> Nothing
                        (label,_,_):_ -> Just label

-- | decides whether a list of core alternatives are really an if
altsAsIf :: [(CorePat,CoreExpr)] -> Maybe (CoreExpr,CoreExpr)
altsAsIf alts =
        case boolalts of
            []     -> Nothing  -- this is not a boolean case

            [a]    -> let (abool,aexpr) = a
                      in if abool then Just (aexpr,def)
                                  else Just (def,aexpr)

            [a,b]  -> let (abool,aexpr) = a
                          (bbool,bexpr) = b
                      in if abool then Just (aexpr,bexpr)
                                  else Just (bexpr,aexpr)

            _      -> error $ "altsAsIf: more than 2 alternatives for something that is casing over booleans!?"
    where
    boolalts = concat $ map asBooleanPat alts

    def = head [ e | (PatDefault,e) <- alts ]

    asBooleanPat (pat,expr) = case pat of
                                  PatCon "Prelude;True" []  -> [(True,expr)]
                                  PatCon "Prelude;False" [] -> [(False,expr)]
                                  _                         -> []

-- | introduce instructions to push a constant
pushConst :: ConstItem -> Compiler ()
pushConst c = do
    i <- addConst c
    emit (PUSH_CONST i)

-- | push a variable on the stack
pushVar :: Var -> Compiler ()
pushVar v = do
    whr <- whereIsVar v
    case whr of
        Arg n -> emitUse (PUSH_ARG n) [v] (Set.singleton v)
        Stack n -> emitUse (PUSH n) [v] (Set.singleton v)

---------------------------------------------------------------------------------------------------------------
-- monadic helpers
---------------------------------------------------------------------------------------------------------------

-- | get the instructions
getIns :: Compiler [UseIns]
getIns = gets (reverse . csIns)

-- | get the current depth
getDepth :: Compiler Int
getDepth = gets csDepth

-- | emit an instruction
emit :: Ins -> Compiler ()
emit i = emitUse i [] Set.empty

-- | emit an instruction, with usage information
emitUse :: Ins -> [Var] -> Set.Set Var -> Compiler ()
emitUse i give need = do
    let d = imStack $ bcodeMetric i
    shiftStack d
    depth <- gets csDepth
    let ius = (i, UseSet depth give need)
    modify $ \ cs -> cs { csIns = ius : csIns cs }

-- | shift all the (Stack n) variables on the stack, also update the depth
shiftStack :: Int -> Compiler ()
shiftStack n = modify $ \ cs ->
        let depth    = csDepth cs + n
            maxDepth = max (csMaxDepth cs) depth
            env      = Map.map shiftWhere (csEnv cs)
        in cs { csEnv = env, csDepth = depth, csMaxDepth = maxDepth }
    where
    shiftWhere (Stack x) = Stack (x+n)
    shiftWhere w         = w

-- | evaluate a variable if it hasn't been evaluated already
evalVar :: CMode -> Var -> Compiler ()
evalVar Lazy v = return ()
evalVar Strict v = do
    evaled <- gets $ \ cs -> v `Set.member` (csEvals cs)
    when (not evaled) $ do
        emit EVAL
        modify $ \ cs -> cs { csEvals = Set.insert v (csEvals cs) }

-- | emit an EVAL instruction, if the mode is strict
eval :: CMode -> Compiler ()
eval Lazy = return ()
eval Strict = emit EVAL

-- | takes a compiler function and changes it so that it doesn't actually modify the state
makePure :: Compiler a -> Compiler (a,CState)
makePure f = do
    cs <- get
    return (runState f cs)

-- | takes a compiler and executes it as a new function body
asNewFunc :: Compiler a -> Compiler a
asNewFunc f = do { cs <- get ; x <- f ; modify (const cs) ; return x }

-- | take a list of compilers for different branches, run them all and then merge the results
--   the compiler returns a bool indicating whether it returns normally, if it doesn't return normally
--   then it doesn't need to have a depth matching the other branchs.
branchs :: Label -> String -> [Compiler Bool] -> Compiler ()
branchs label debug cs = do
        mcss <- mapM inNewEnv cs
        modify $ \ cs ->
            let css      = catMaybes mcss
                evs      = csEvals cs `Set.union` (intersectManySets $ map csEvals css)
                dps      = map csDepth css
                cs'      = cs { csEvals = evs, csDepth = head dps }
            in if dps == [] then cs
               else if all (== (head dps)) dps then cs'
                else error (csThisFunc cs' ++": L_"++show label++": "++debug++" depths not all equal"++show dps)
    where
    inNewEnv c = do
        cs <- get
        x <- c
        State $ \ cs' -> (if x then Just cs' else Nothing, cs' { csEnv = csEnv cs, csDepth = csDepth cs, csEvals = csEvals cs })

{-
-- | take a compiler for a branching operation and execute the compiler recording the stack depth on the way out
branch :: Compiler () -> Compiler Int
branch c = do
    cs <- get
    c
    State $ \ cs' -> let cs'' = cs' { csEnv = csEnv cs, csFails = csFails cs, csEvals = csEvals cs, csDepth = csDepth cs }
                     in (csDepth cs', cs'')

-- | merge together a list of depths taken from branching, checks they are all the same
-- and sets the depth to that
mergeDepths :: Label -> String -> [Int] -> Compiler ()
mergeDepths lab kind (i:is)
    | and (map (==i) is) = modify $ \ cs -> cs { csDepth = i }
    | otherwise          = trace ("L_" ++ show lab++":"++kind++" depths don't match on merge depths "++show (i:is)) $ return ()
-}

-- | bind a variable to a location
bind :: Var -> Where -> Compiler ()
bind var wh = modify $ \ cs -> cs { csEnv = Map.insert var wh (csEnv cs) }

-- | add a constant to the constant table (if not present) and return its reference
addConst :: ConstItem -> Compiler CRef
addConst item = do
    old <- gets $ \ cs -> Map.lookup item (csConsts cs)
    case old of
        Just ref -> return ref
        Nothing -> State $ \ cs -> let i   = csNextConst cs
                                       cs' = cs { csConsts = Map.insert item i (csConsts cs), csNextConst = i+1 }
                                   in (i,cs')

-- | allocate a new label
newLabel :: Compiler Label
newLabel = State $ \ cs -> let i   = csNextLabel cs
                           in (i, cs { csNextLabel = i+1 })

-- | allocate several new labels
newLabels :: Int -> Compiler [Label]
newLabels n = replicateM n newLabel

-- | run a compiler in a new failure block
withFailure :: Label -> Compiler a -> Compiler a
withFailure lfail comp = do
    modify $ \ cs -> cs { csFails = (lfail, csDepth cs) : csFails cs }
    x <- comp
    modify $ \ cs -> cs { csFails = tail (csFails cs) }
    return x

-- | get the most current failure
getFailure :: Compiler (Label,Int)
getFailure = gets $ \ cs -> case csFails cs of
                              (f:_) -> f
                              []    -> error "getFailure: fail called but no failure closure present!"

-- | return where a variable can be found
whereIsVar :: Var -> Compiler Where
whereIsVar v = gets $ \ cs ->
    case Map.lookup v (csEnv cs) of
        Just w -> w
        Nothing -> error $ "whereIsVar: no variable "++v++" in environment"

-- | lookup an import
lookupImport :: String -> Compiler CoreImport
lookupImport name = gets $ \ cs ->
    case Map.lookup name (csImports cs) of
        Just imp -> imp
        Nothing  -> error $ "Compiling Yhc.Core to bytecode: the name '"++name++
                            "' is referenced but is neither local nor specified as an import"

-- | lookup a data constructor
lookupImportData :: String -> Compiler CoreData
lookupImportData name = do
    imp <- lookupImport name
    case imp of
        CoreImportCtor{} -> return (coreImportCtorData imp)
        _                -> error $ "Compiling Yhc.Core to bytecode: the name '"++name++"' is used as a constructor, but it isn't one"

-- | lookup the arity of a name
lookupImportArity :: String -> Compiler Int
lookupImportArity name = do
    imp <- lookupImport name
    case imp of
        CoreImportFunc{} -> return $ coreImportFuncArity imp
        CoreImportCtor{} ->
            let ctors = coreDataCtors $ coreImportCtorData imp
            in case lookup name $ map (\ctor -> (coreCtorName ctor,ctor)) ctors of
                Just ctor -> return $ length $ coreCtorFields ctor

-- | test whether an expression a failure variable
isFailure :: Var -> Bool
isFailure = ("v_fail_" `isPrefixOf`)

-- | calculate the intersection of many sets (analogous to unionManySets)
intersectManySets :: Ord a => [Set.Set a] -> Set.Set a
intersectManySets [] = Set.empty
intersectManySets xs = foldr1 Set.intersection xs

