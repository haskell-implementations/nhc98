-- | Function to compile core code into bytecode
module ByteCode.Compile (bcCompile) where

import ByteCode.Type
import ByteCode.Metric
import ByteCode.CompileLib
import Flags
import IntState hiding (getIntState, getFlags)
import StateMonad
import Control.Monad.State
import qualified Data.Map as Map
import Util.Extra(Pos, noPos)
import Id(Id)
import qualified Data.Set as Set
import PosCode
import StrPos
import Maybe(fromJust, isNothing, isJust)
import ForeignCode(ImpExp(..))
import TokenId
import SysDeps(unpackPS)
import NT
import Util.Extra
import Syntax(CallConv(..))

------------------------------------------------------------------------------------------------
-- compiler
------------------------------------------------------------------------------------------------

-- | Compile core code into bytecode
bcCompile :: Flags               -- ^ compiler flags
          -> IntState            -- ^ internal compiler state generated in earlier stages
          -> [(Id,PosLambda)]    -- ^ list of functions to compile
          -> [Id]                -- ^ list of constructors to compile
          -> (BCModule,IntState) -- ^ compiled bytecode and modified internal compiler state

bcCompile flags state funs cons = undefined

{- FIXME:!!!


(BCModule modu ds, cState st')
    where
    st = initCompileState flags state
    (ds,st') = runState (compile funs cons) st
    modu = getModuleId state


compile :: [(Id,PosLambda)] -> [Id] -> STCompiler [BCDecl]
compile funs cons = do cs <- mapM cCon cons
                       fs <- mapM cFun funs
                       return $ concat cs ++ concat fs

cCon :: Id -> STCompiler [BCDecl]
cCon d =
    do state <- readState cState
       let dataInfo = (fromJust . lookupIS state) d
           cons     = map mkCon (zip (constrsI dataInfo) [0..])

           mkCon (c,n) = Con c noPos (arityIS state c) n
       return cons

cFun :: (Id, PosLambda) -> STCompiler [BCDecl]
cFun (i, PosLambda pos fl [] [arg]
  exp@(PosExpCase cpos (PosVar vpos var) [PosAltCon apoc con posargs (PosVar vpos2 var2)])) =
    do only <- cOnlyCon con
       numDicts <- numDictArgs i
       if only && any ((var2 ==).snd) posargs then -- selector function
          let no   = fromJust $ lookup var2 $ (zip (map snd posargs) [0..])
              selUS = UseSet 0 [] (Set.singleton (snd arg))
              code =  [ (NEED_HEAP 1,emptyUS), (SELECTOR_EVAL,selUS), (SELECT no,emptyUS), (RETURN,emptyUS)]
              flags = [fl]
          in return [ Fun i pos 1 [snd arg] (CLinear code) Map.empty False 1 numDicts flags ]
        else
          cFun' (i, PosLambda pos fl [] [arg] exp)
cFun (i, PosLambda pos int env args exp) =
   cFun' (i, PosLambda pos int env args exp)
cFun (i, PosPrimitive pos id) = cPrimFun i i GPRIM pos

cFun (i, PosForeign pos id arity name cc Imported) = do
           state <- readState cState
           let (unique,state1)               = uniqueIS state
               arity                         = arityIS state i
               (InfoVar un tok ex fix nt ar) = fromJust $ lookupIS state i
               tok'                          = mkExt tok
               info'                         = InfoVar unique tok' ex fix nt ar
               name'                         = if name == "" then getUnqualified tok else name
               state2                        = addIS unique info' state1
           if cc == Other "builtin" then
                warning ("name of builtin = "++name++" c-name = "++name') $
                return [External i pos arity name' cc nt]
            else do
                prim <- cPrimFun i unique GFUN pos
                writeState_ $ \ s -> s { cState = state2 }
                return $ prim ++ [External unique pos arity name' cc nt ]

-- | I don't know what it is *supposed* to do, but it *definately*
-- screws with 'Id's and 'Int's. Someone should sort it out. [SamB]
cPrimFun :: Id -> Id -> GType -> Pos -> STCompiler [BCDecl]
cPrimFun i call gtype pos =
    do state <- readState cState
       numDicts <- numDictArgs i
       let arity  = arityIS state i
           args   :: [Id]
           args   = map toEnum [0..arity-1] -- what is with this using 'Id's? okay so they were Ints,
                                            -- but if I used actual 'Id's, I'd have to use toEnum so
                                            -- many times it isn't funny... [SamB]
           evals  = concatMap (\i -> [ (PUSH_ARG (fromEnum i),UseSet 0 [i] (Set.singleton i)),
                                       (EVAL,emptyUS),
                                       (POP 1,emptyUS)]) args
           code   = evals ++ [ (PRIMITIVE, UseSet 0 (args) (Set.fromList args)),
                               (EVAL,emptyUS),
                               (RETURN,emptyUS) ]
           consts = Map.singleton 0 (CGlobal call gtype)
       return [ Fun i pos arity [] (CLinear code) consts True 1 numDicts [LamFLNone] ]

cFun' :: (Id, PosLambda) -> STCompiler [BCDecl]
cFun' (i, PosLambda pos fl env args exp) =
    do let args' = map snd args
       numDicts      <- numDictArgs i
       (state, code) <- innerMonad (cBody exp args')
       let maxDepth = cMaxDepth state
           consts   = Map.fromList $ map (\(x,y) -> (y,x)) $ Map.toList (cConsts state)
           flags    = [fl]
       return [ Fun i pos (length args) args' code consts False maxDepth numDicts flags ]

cBody :: PosExp -> [Id] -> STCompiler Code
cBody e args = do (cs,()) <- comp
                  return $ CLinear (cs [])
    where
    comp = bindArgs args =>>
           cExpr (CMode True True True) e =>>
           ins RETURN

cOnlyCon :: Id -> STCompiler Bool
cOnlyCon con = do state <- readState cState
                  let owner   = (belongstoI . fromJust . lookupIS state) con
                      constrs = (constrsI . fromJust . lookupIS state) owner
                  return (length constrs == 1)

numDictArgs :: Id -> STCompiler Int
numDictArgs i = do state <- readState cState
                   let info = (fromJust . lookupIS state) i
                   case maybeNtI info of
                       Just (NewType _ _ ctxs _) -> return (length ctxs)
                       _                         -> return 0


------------------------------------------------------------------------------------------------
-- expression compiler
------------------------------------------------------------------------------------------------

cExpr :: CMode -> PosExp -> Compiler ()

cExpr m      (PosInt p i)
    | isShort i = ins (PUSH_INT i) =>> whenHat m (tracePos TPRIMCON p)
    | otherwise = pushConst (CInt i) =>> whenHat m (tracePos TPRIMCON p)
cExpr m      (PosChar p c) = ins (PUSH_CHAR c) =>> whenHat m (tracePos TPRIMCON p)
cExpr m      (PosFloat p f) = pushConst (CFloat f) =>> whenHat m (tracePos TPRIMCON p)
cExpr m      (PosDouble p f) = pushConst (CDouble f) =>> whenHat m (tracePos TPRIMCON p)
cExpr m      (PosInteger p i) = pushConst (CInteger i) =>> whenHat m (tracePos TPRIMCON p)
cExpr m      (PosString p s) = pushConst (CString s) =>> whenHat m (tracePos TPRIMCON p)
cExpr m      (PosCon p c) = pushVar m p c

cExpr m      (PosVar p v) =
    pushVar m p v =>>
    isEvaled v =>>= \ isEv ->
    whenC (isStrict m && not isEv) (evaled v =>> insEval m)


cExpr m (PosExpIf p g c t f)
    | isStrict m =
        cExpr (cUnproject m) c =>>
        newLabel =>>= \ fail ->
        newLabel =>>= \ after ->
        whenHat m (
            addConst (CPos p) =>>= \ pi ->
            if g then ins (TGUARD pi)
                 else ins (TIF pi)
        ) =>>
        ins (JUMP_FALSE fail) =>>
        branch (cExpr m t) =>>= \ dt ->
        ins (JUMP after) =>>
        ins (LABEL fail) =>>
        branch (cExpr m f) =>>= \ df ->
        (if isFail f then mergeDepths after "If" [dt]
                    else mergeDepths after "If" [dt,df]) =>>
        ins (LABEL after)


cExpr m (PosExpCase p c as)
    | isStrict m =
        cExpr (cUnproject m) c =>>
        newLabels (length as) =>>= \ las ->
        newLabel =>>= \ after ->
        newLabel =>>= \ def ->
        whenHat m (
            addConst (CPos p) =>>= \ pi ->
            ins (TCASE pi)
        ) =>>
        getIntState =>>= \ is ->
        let (isInt,complete,ts) = altTags is as
            tslas               = zip ts las
            def'                = if complete then Nothing else Just def

            alts                = map (cAlt m after) (zip as las) in

        ins (CASE isInt tslas def') =>>
        mapC (\a -> branch (cAlt m after a)) (zip as las) =>>= \ das ->
        whenC (not complete) (
              branch (cDefault def) =>>= \ _ ->
              nop
        ) =>>
        mergeDepths after "Case" das =>>
        ins (LABEL after)


cExpr m      (PosExpLet _ p [] e) = cExpr m e

cExpr m      (PosExpLet False p bs e) =
    mapC_ (cBinding m False) (zip bs [0..]) =>>
    cExpr m e =>>
    ins (SLIDE (length bs))

cExpr m      (PosExpLet True p bs e) =
    let n = length bs in
    ins (ALLOC n) =>>
    mapC_ (\((i,_),n) -> bind False i n) (zip bs [0..]) =>>
    mapC_ (cBinding m True) (zip bs [0..]) =>>
    cExpr m e =>>
    ins (SLIDE n)

cExpr m      (PosExpThunk p ap [a]) = cExpr m a

cExpr m      (PosExpThunk p ap [PosPrim _ SEQ _, x, y]) =
    cExpr (cUnproject $ cStrict m) x =>>
    ins (POP 1) =>>
    cExpr m y

cExpr m      (PosExpThunk p ap (f@(PosExpIf _ _ _ _ _):as)) =
    let m' = cUnproject $ cStrict m in
    cExpr m' f =>>
    mapC_ (cExpr m') (reverse as) =>>
    ins (APPLY (length as)) =>>
    insEval (cStrict m)

cExpr m      (PosExpThunk p ap (f:as)) =
    isStrictFun f =>>= \ strict ->
    let m'  = cUnproject m
        m'' = if strict then cStrict m' else cLazy m' in
    mapC_ (cExpr m'') (reverse as) =>>
    cCall m' f (length as) ap

cExpr m      (PosExpApp p as) = cExpr m (PosExpThunk p False as)

cExpr m      (PosExpFatBar esc e f) =
    newLabel =>>= \ fail ->
    newLabel =>>= \ after ->
    pushFail fail =>>
    branch (cExpr m e) =>>= \ de ->
    popFail =>>
    ins (JUMP after) =>>
    ins (LABEL fail) =>>
    branch (cExpr m f) =>>= \ df ->
    (if esc then mergeDepths after "Escapable Fatbar" [de]
            else mergeDepths after "Fatbar" [de,df]) =>>
    ins (LABEL after)


cExpr m      (PosExpFail) = cFail

cExpr m      e =
    getIntState =>>= \ is ->
    error $ "cExpr: no code for '"++strPExp (strIS is) "" e ++""

-- compile a default branch
cDefault :: Label -> Compiler ()
cDefault label =
    ins (LABEL label) =>>
    cFail

-- compile a failure case
cFail :: Compiler ()
cFail =
    getFail =>>= \ (fail,fDepth) ->
    getDepth =>>= \ depth ->
    let err = error $ "cExpr PosExpFail: depth = "++show depth++", fail depth = "++show fDepth
        num = if depth < fDepth then err else depth - fDepth in
    ins (POP num) =>>
    ins (JUMP fail)

-- compile a list of alternatives paired with their labels,
-- using a specific point to jump to
-- cAlts :: [(PosAlt,Label)] -> Label -> Compiler [Int]
-- cAlts las after = mapC (\a -> branch (cAlt after a)) las

-- compile a single a alternative and label, jumping to the
--   specified place
cAlt :: CMode -> Label -> (PosAlt,Label) -> Compiler ()
cAlt m after (PosAltCon p t vs e,lab) =
    ins (LABEL lab) =>>
    let ids = map snd vs
        n   = length vs in
    useIns (UNPACK n) ids Set.empty =>>
    mapC_ (uncurry (bind True)) (zipWith (\(p,i) n -> (i,n)) vs [0..]) =>>
    cExpr (cStrict m) e =>>
    ins (SLIDE n) =>>
    ins (JUMP after)

cAlt m after (PosAltInt p t b e, lab) =
    ins (LABEL lab) =>>
    ins (POP 1) =>>
    cExpr (cStrict m) e =>>
    ins (JUMP after)

-- compile a let binding and the slot it occupies, boolean indicates whether recursive or not
cBinding :: CMode -> Bool -> (PosBinding,Int) -> Compiler ()
cBinding m True  ((i,PosLambda p _ _ [] e),n) =
    cExpr (cLazy m) e =>>
    useIns (UPDATE n) [] (Set.singleton i)
cBinding m False ((i,PosLambda p _ _ [] e),n) =
    cExpr (cLazy m) e =>>
    bind False i 0

-- compile a call to a function, with some number of arguments given
cCall :: CMode -> PosExp -> Int ->  Bool -> Compiler ()
cCall m (PosPrim p c i) got ap =
    (case c of
       STRING -> simply Nothing
       _      -> ifHat m (addConst (CGlobal i GFUN0) =>>= \ ii ->
                          addConst (CPos p) =>>= \ pi ->
                          ins (PUSH_CONST ii) =>>
                          ins (TPRIMAP pi got) =>>
                          simply (Just pi))
                      -- else
                         (simply Nothing)
    ) =>>= \ pi ->
    cCallPrim c =>>
    case c of
       STRING -> simply ()
       _      -> whenHat m (ins (TPRIMRESULT (fromJust pi)))

cCall m (PosCon p c) got ap =
    addConst (CGlobal c GCON) =>>= \ ci ->
    ins (MK_CON ci got) =>>
    whenHat m (tracePos TCON p)

cCall m (PosVar p v) got ap =
    isGlobal v =>>= \ glob ->
    if glob then getIntState =>>= \ is ->
                 cCallGlobal m p v got (arityIS is v) ap
            else pushVar m p v =>>
                 ins (APPLY got) =>>
                 whenHat m (addConst (CPos p) =>>= \ pi ->
                            ins (TAPPLY pi got)) =>>
                 insEval m

cCall m e@(PosExpThunk p _ es) got ap =
    cExpr m e =>>
    ins (APPLY got) =>>
    whenHat m (addConst (CPos p) =>>= \ pi ->
               ins (TAPPLY pi got)) =>>
    insEval m

cCall m e got ap =
    getIntState =>>= \ is ->
    error $ "cCall: no code for '"++strPExp (strIS is) "" e++"'"


-- call a global function, comparing the number of arguments we have with
--  the number of arguments we were expecting, and thus generating the right code
cCallGlobal :: CMode -> Pos -> Id -> Int -> Int -> Bool -> Compiler ()
cCallGlobal m p v got expect ap
    -- saturated or super-saturated case
    | got >= expect = let extra = got - expect in
                      -- do a MK_AP or PUSH_CONST depending on the expected arity
                      (if expect > 0 then addConst (CGlobal v GFUN) =>>= \ vi ->
                                          ins (MK_AP vi expect) =>>
                                          whenHat m (if ap then tracePos (\pi -> TAPPLY pi (got-1)) p
                                                           else tracePos TAP p)
                                     else addConst (CGlobal v GCAF) =>>= \ vi ->
                                          ins (PUSH_CONST vi)
                      ) =>>
                      -- apply extra arguments if needed
                      whenC (extra > 0) (
                          ins (APPLY extra) =>>
                          whenHat m (addConst (CPos p) =>>= \ pi ->
                          ins (TAPPLY pi extra))
                      ) =>>
                      -- eval the result if needed
                      insEval m
    -- partial application
    | otherwise    = addConst (CGlobal v GFUN) =>>= \ vi ->
                     ins (MK_PAP vi got) =>>
                     whenHat m (tracePos TAP p)


-- compile a call to a primitive function
cCallPrim :: Prim -> Compiler ()
cCallPrim (ADD op)    = ins (P_ADD op)
cCallPrim (SUB op)    = ins (P_SUB op)
cCallPrim (MUL op)    = ins (P_MUL op)
cCallPrim (QUOT)      = ins (P_DIV OpWord)
cCallPrim (REM)       = ins (P_MOD OpWord)
cCallPrim (SLASH op)  = ins (P_DIV op)
cCallPrim (CMP_EQ op) = ins (P_CMP_EQ op)
cCallPrim (CMP_NE op) = ins (P_CMP_NE op)
cCallPrim (CMP_LE op) = ins (P_CMP_LE op)
cCallPrim (CMP_LT op) = ins (P_CMP_LT op)
cCallPrim (CMP_GE op) = ins (P_CMP_GE op)
cCallPrim (CMP_GT op) = ins (P_CMP_GT op)
cCallPrim (NEG op)    = ins (P_NEG op)
cCallPrim (ORD)       = ins (P_FROM_ENUM)
cCallPrim (STRING)    = ins P_STRING
cCallPrim i           = error $ "cCallPrim " ++ strPrim i

-----------------------------------------------------------------------------------
-- helper functions
-----------------------------------------------------------------------------------

-- returns whether an expression should be considered strict or lazy
isStrictFun :: PosExp -> Compiler Bool
isStrictFun (PosVar _ _) = simply False
isStrictFun (PosCon _ _) = simply False
isStrictFun (PosPrim p _ _) = simply True
isStrictFun (PosExpThunk _ _ _) = simply False
isStrictFun (PosExpIf _ _ _ _ _) = simply True
isStrictFun (PosExpCase _ _  _) = simply True
isStrictFun e =
    getIntState =>>= \ is ->
    error $ "isStrict: no code for '"++strPExp (strIS is) "" e++"'"

-- for a list of alternatives: returns whether this is an int-case, whether it is complete or not
--   and the list of tags properly translated if necessary
altTags :: IntState -> [PosAlt] -> (Bool, Bool, [Tag])
altTags state as@(PosAltInt{} : _)   =
    (True, False, map (\(PosAltInt _ i _ _) -> i) as)
altTags state as@(PosAltCon _ i _ _ : _) =
    (False, complete, map tag as)
    where
    info     = fromJust $ lookupIS state i
    typeInfo = fromJust $ lookupIS state (belongstoI info)
    constrs  = constrsI typeInfo
    ncons    = zip constrs [0..]
    complete = length as == length constrs

    tag (PosAltCon _ t _ _) = fromJust $ lookup t ncons

-- decides whether something is a failure expression
isFail :: PosExp -> Bool
isFail PosExpFail = True
isFail _          = False

-----------------------------------------------------------------------------------
-- instruction generation functions
-----------------------------------------------------------------------------------

-- issue a non instruction
nop :: Compiler ()
nop = simply ()

-- issue a full instruction
useIns :: Ins -> [Id] -> Set.Set Id -> Compiler ()
useIns i give need =
    let d   = imStack $ bcodeMetric i in
    shiftStack d =>>
    getDepth =>>= \ depth ->
    let ius = (i,UseSet depth give need) in
    return ((ius :) , ())

-- issue a simplified instruction
ins :: Ins -> Compiler ()
ins i = useIns i [] Set.empty

-- issue an eval instruction if needed
insEval :: CMode -> Compiler ()
insEval m = whenC (isStrict m) (ins EVAL)

-- allocate a constant item and push it on the stack
pushConst :: ConstItem -> Compiler ()
pushConst c =
    addConst c =>>= \ ci ->
    ins (PUSH_CONST ci)

-- returns whether the given identifier is global or not
isGlobal :: Id -> Compiler Bool
isGlobal i =
    whereIs i =>>= \ w ->
    let b = isNothing w in
    simply b

-- push a variable on the stack
pushVar :: CMode -> Pos -> Id -> Compiler ()
pushVar m pos i =
    whereIs i =>>= \ w ->
    case w of
        Just (Arg n)   -> useIns (PUSH_ARG n) [i] (Set.singleton i) =>>
                          whenHat m (ins TPUSH) =>>
                          project m pos
        Just (Stack n pm) -> useIns (PUSH n)     [i] (Set.singleton i) =>>
                             whenHat m (
                                getIntState =>>= \ is ->
                                if (isJust (lookupIS is i)) then
                                    let tid  = tidIS is i
                                        name = unpackPS (extractV tid) in
                                    addConst (CVarDesc name pos) =>>= \ ci ->
                                    ins (TPUSHVAR ci)
                                else
                                    ins TPUSH
                             ) =>>
                             whenC pm (project m pos)

        Nothing        -> getIntState =>>= \ is ->
                          (let ar = arityIS is i in
                           if isConstr $ fromJust $ lookupIS is i then
                              if ar == 0 then
                                 pushConst (CGlobal i GZCON)
                              else
                                 error "pushVar: pushing non zcon?"
                           else
                              if ar == 0 then
                                 pushConst (CGlobal i GCAF)
                              else
                                 pushConst (CGlobal i GFUN0)) =>>
                          whenHat m (ins TPUSH)


-- add code for projection, if appropriate
project :: CMode -> Pos -> Compiler ()
project m pos =
  whenHat m (
      whenC (isProjected m) (
          addConst (CPos pos) =>>= \ pi ->
          ins (TPROJECT pi)
      )
  )

-- conditional on hat compliation
ifHat :: CMode -> Compiler a -> Compiler a -> Compiler a
ifHat m hc oc =
  getFlags =>>= \ flags ->
  if sHat flags && isTraced m then hc
                              else oc

-- only run a compiler whenC hat is enabled
whenHat :: CMode -> Compiler () -> Compiler ()
whenHat m c = ifHat m c (simply ())

-- trace a position
tracePos :: (CRef -> Ins) -> Pos -> Compiler ()
tracePos f p = addConst (CPos p) =>>= \ pi ->
               ins (f pi)

whenC :: Bool -> Compiler () -> Compiler ()
whenC c e = if c then e else nop

  -}