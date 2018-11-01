module DotNet.Compile (ilCompile) where

import DotNet.IL as IL
import Flags
import IntState hiding (getIntState)
import StateMonad
import Control.Monad.State
import qualified Data.Map as Map
import Util.Extra(Pos, noPos)
import Id(Id)
import qualified Data.Set as Set
import PosCode as P
import StrPos
import Maybe(fromJust, isNothing, isJust)
import ForeignCode(ImpExp(..))
import TokenId
import SysDeps(PackedString, packString, unpackPS)
import NT
import Data.Char
import Data.List(intersperse)

--------------------------------------------------------------
-- state and types
--------------------------------------------------------------

-- the internal compiler state
--    flags,state         - saved external items
--    labels              - the list of free labels
--
--    env                 - where each variable can be found
--    fails               - a list of fail handlers (still used?)
--    evals               - the set of variables that we know to be evaluated

data CState = S { -- global state parameters
                 cState :: IntState,

                 -- local state parameters
                 cCurrId   :: Id,
                 cEnv      :: Map.Map Id Where,
                 cLabels   :: Label,
                 cLocals   :: Int,
                 cLocalEnv :: [TypeSignature] }

type STCompiler a = State CState a
type InsCode = [ILInstruction] -> [ILInstruction]
type Compiler a = STCompiler (InsCode,a)

{- whether we should be compiling strictly or lazily -}

data SMode = PrimStrict PrimOp | Strict | Lazy
           deriving Eq

{- where we can find a variable -}
data Where = This
           | Local Int Bool
           | Field Where TypeSignature String
           deriving Show

data BranchAfter = Return
                 | Continue
                 | ContinueTo Label
                 | Goto       Label

------------------------------------------------------------------------------------------------
-- compiler
------------------------------------------------------------------------------------------------

ilCompile :: Flags -> IntState -> [(Id,PosLambda)] -> [Id] -> ([ILDecl],IntState)
ilCompile flags state funs cons = ([Namespace (getModuleId state) ds], cState st')
    where
    st = S state (toEnum 0) Map.empty 0 0 []
    (ds,st') = runState (compile funs cons) st


compile :: [(Id,PosLambda)] -> [Id] -> STCompiler [ILDecl]
compile funs cons = do cs <- mapM cCon cons
                       fs <- mapM cFun funs
                       return $ concat cs ++ concat fs

cCon :: Id -> STCompiler [ILDecl]
cCon d = do
  state <- readState cState
  let dataInfo = (fromJust . lookupIS state) d
  mapM (mkCon state) (constrsI dataInfo)
  where
    mkCon state c = do
      (ns,lname,class_sig) <- getIdLocalSignature c
      let arity = arityIS state c
      caf_decls <- mkCAFDecls class_sig arity
      (field_decls,args,stcode) <- mkCode class_sig 1 arity
      let class_decl =
              Class lname sigClosure (  field_decls
                                     ++ caf_decls
                                     ++ [ILClassConstr ILPublic ILInstance args []
                                                   ( LDARG 0
                                                   : CALL VoidSignature sigClosure ".ctor" []
                                                   : stcode
                                                   )]
                                     )
      return $! if null ns then class_decl else Namespace ns [class_decl]

    mkCAFDecls class_sig arity
      | arity == 0 = return [ ILClassField  ILPublic  ILStatic sigClosure "indirection"
                            , ILClassConstr ILPrivate ILStatic [] []
                                        ( NEWOBJ     class_sig []
    	                                : STSFLD     sigClosure class_sig "indirection"
    	                                : RET
    	                                : []
                                        )
                            ]
      | otherwise  = return []

    mkCode class_sig i n
      | i > n     = return ([], [], [RET])
      | otherwise = do
          (fields,args,stcode) <- mkCode class_sig (i+1) n
          let name = 'c':show i
          return ( (ILClassField ILPublic ILInstance sigClosure name)
                 : fields
                 , (ILMethodArg sigClosure name)
                 : args
                 , LDARG 0
		 : LDARG i
		 : STFLD sigClosure class_sig name
	         : stcode
                 )

cFun :: (Id, PosLambda) -> STCompiler [ILDecl]
cFun (i, PosLambda pos int env args exp) = do
  setCurrentId i
  (ns,lname,class_sig) <- getIdLocalSignature i
  let args' = map snd args
  field_decls <- mkFieldDecls class_sig args' 1
  caf_decls   <- mkCAFDecls   class_sig args'
  thunk_decls <- mkThunkDecls class_sig args'
  let class_decl = Class lname sigBaseClass (field_decls ++ caf_decls ++ thunk_decls)
  return $! if null ns then [class_decl] else [Namespace ns [class_decl]]
  where
    sigBaseClass
      | length args == 0 = sigCAFClosure
      | otherwise        = sigThunkClosure

    mkCAFDecls class_sig args
      | length args == 0 = return [ ILClassField  ILPublic  ILStatic sigClosure "indirection"
                                  , ILClassConstr ILPrivate ILStatic [] []
                                              ( NEWOBJ     class_sig []
	                                      : STSFLD     sigClosure class_sig "indirection"
	                                      : RET
	                                      : []
                                              )
                                  ]
      | otherwise        = return []

    mkThunkDecls class_sig args = do
      (ilargs,stcode) <- toArgsSTCode args 1
      (state, code)   <- innerMonad (cBody exp >>= \(cs,()) -> return (cs []))
      return [ ILClassConstr ILPublic ILInstance ilargs []
                         ( LDARG 0
                         : CALL VoidSignature sigBaseClass ".ctor" []
                         : stcode
                         )
             , ILClassMethod ILPublic ILVirtual sigClosure "Eval" [] (reverse (cLocalEnv state)) code
             ]
      where
        toArgsSTCode         [] n = return ([], [RET])
	toArgsSTCode (arg:args) n = do
	  let name = 'c':show n
	  (ilargs,stcode) <- toArgsSTCode args $! n+1
	  return ( (ILMethodArg sigClosure name)
	         : ilargs
	         , LDARG 0
	         : LDARG n
	         : STFLD sigClosure class_sig name
	         : stcode
	         )

        cBody exp =
	  newLabel =>>= \lab ->
	  ins (LDARG 0) =>>
	  (if length args == 0
	     then ins (LDSFLD sigClosure class_sig "indirection") =>>
	          ins (BEQ lab) =>>
	          ins (LDSFLD sigClosure class_sig "indirection") =>>
	          ins (TAIL) =>>
	          insEval Strict =>>
	          ins (RET) =>>
	          ins (LABEL lab) =>>
	          ins (LDSFLD sigClosure sigBlackHoleClosure "indirection") =>>
	          ins (STSFLD sigClosure class_sig "indirection")
	     else ins (DUP) =>>
	          ins (LDFLD sigClosure sigThunkClosure "indirection") =>>
	          ins (BRFALSE lab) =>>
	          ins (LDFLD sigClosure sigThunkClosure "indirection") =>>
	          ins (TAIL) =>>
	          insEval Strict =>>
	          ins (RET) =>>
	          ins (LABEL lab) =>>
	          ins (LDSFLD sigClosure sigBlackHoleClosure "indirection") =>>
	          ins (STFLD  sigClosure sigThunkClosure "indirection") =>>
	          ins (LDARG 0)) =>>
	  newLabel =>>= \fail ->
	  cExpr Strict fail Return exp =>>= \canFail ->
	  (if canFail
	     then ins (LABEL fail) =>>
                  ins (NEWOBJ sigPaternMatchException []) =>>
	          ins (THROW)
	     else nop)

    mkFieldDecls class_sig []         n = return []
    mkFieldDecls class_sig (arg:args) n = do
      let name = 'c':show n
      bindField arg This class_sig name
      fields   <- mkFieldDecls class_sig args $! n+1
      return ((ILClassField ILPrivate ILInstance sigClosure name):fields)

cFun (i, PosPrimitive pos id)        = do
  setCurrentId i
  state <- readState cState
  (ns,lname,class_sig) <- getIdLocalSignature i
  let arity = arityIS state i
      (field_decls, ilargs,stcode,evcode) = toArgsSTCode class_sig arity 1
      sigBaseClass
         | arity == 0 = sigCAFClosure
         | otherwise  = sigThunkClosure
      thunk_decls =
         [ ILClassConstr ILPublic ILInstance ilargs []
                     ( LDARG 0
                     : CALL VoidSignature sigThunkClosure ".ctor" []
                     : stcode
                     )
         , ILClassMethod ILPublic ILVirtual sigClosure "Eval" [] []
                     ( evcode ++
                     [ CALLCLASS sigClosure sigPrimitives lname (mkClosureArgs arity)
                     , RET
                     ])
         ]
      caf_decls  = mkCAFDecls class_sig arity
      class_decl = Class lname sigBaseClass (field_decls ++ caf_decls ++ thunk_decls)
  return $! if null ns then [class_decl] else [Namespace ns [class_decl]]
  where
    mkCAFDecls class_sig arity
      | arity == 0 = [ ILClassField  ILPublic  ILStatic sigClosure "indirection"
                     , ILClassConstr ILPrivate ILStatic [] []
                                 ( NEWOBJ     class_sig []
	                         : STSFLD     sigClosure class_sig "indirection"
	                         : RET
	                         : []
                                 )
                     ]
      | otherwise  = []

    toArgsSTCode class_sig arity n
      | n > arity = ([], [], [RET], [])
      | otherwise =
	  let name = 'c':show n
	      (fldecls, ilargs,stcode,evcode) = toArgsSTCode class_sig arity $! n+1
	  in ( ILClassField ILPrivate ILInstance sigClosure name
	     : fldecls
	     , ILMethodArg sigClosure name
	     : ilargs
	     , LDARG 0
	     : LDARG n
	     : STFLD sigClosure class_sig name
	     : stcode
	     , LDARG 0
	     : LDFLD sigClosure class_sig name
	     : CALLVIRT sigClosure sigClosure "Eval" []
	     : evcode
	     )

cFun (i, PosForeign pos id arity name cc Imported) =
    do state <- readState cState
       let (unique,state1)               = uniqueIS state
           arity                         = arityIS state i
           (InfoVar un tok ex fix nt ar) = fromJust $ lookupIS state i
           tok'                          = mkExt tok
           info'                         = InfoVar unique tok' ex fix nt ar
           name'                         = if name == "" then getUnqualified tok else name
           state2                        = addIS unique info' state1

       writeState_ $ \ s -> s { cState = state2 }
       return $ [External unique pos arity name' cc nt ]

--------------------------------------------------------------
-- monadic plumbing
--
-- the underlying state of the compiler, recording stack depth, environment
-- etc. is monadic, ontop of this combinators are provided to plug together
-- the outputted code, which are also monad like in nature.
--
-- needless to say the internal details of how this works are complicated,
-- however, conceptually it's quite easy.
--
-- p =>> q
--
-- runs the monad for compiler p, then the one for compiler q and then
-- joins the instructions generated together.
--
-- p =>>= \ x -> q
--
-- does the same as the above but this time it's assumed p is returning something
-- besides just the code that is generated, which is then used as a local variable
-- in defining q.
--
-- for example:
--   newLabel =>>= \ j ->
--   ins (BR j)
--
-- calls the monad to generate a new internal label, and joins its code (i.e. none)
-- with the code for a BR to address provided by newLabel.
--------------------------------------------------------------

(=>>=) :: Compiler a -> (a -> Compiler b) -> Compiler b
c =>>= d = do (cs,a) <- c
              (ds,b) <- d a
              return (cs . ds, b)

(=>>) :: Compiler () -> Compiler a -> Compiler a
c =>> d = c =>>= \ () -> d

mapC :: (a -> Compiler b) -> [a] -> Compiler [b]
mapC f []     = simply []
mapC f (c:cs) = f c =>>= \ b ->
                mapC f cs =>>= \ bs ->
                simply (b:bs)

mapC_ :: (a -> Compiler ()) -> [a] -> Compiler ()
mapC_ f cs = mapC f cs =>>= \ _ -> simply ()

simply :: a -> Compiler a
simply a = return (id, a)

liftC :: STCompiler a -> Compiler a
liftC s = do a <- s
             simply a

block :: InsCode -> Compiler ()
block is = return (is, ())

--------------------------------------------------------------
-- state manipulation functions
--------------------------------------------------------------

{- bind an identifier to a stack location -}
bindField :: Id -> Where -> TypeSignature -> ILName -> Compiler ()
bindField i wh sig name = liftC $ writeState_ $ \s -> s { cEnv = Map.insert i (Field wh sig name) (cEnv s) }

{- bind an identifier to a stack location -}
bindLocal :: Maybe Id -> Bool -> TypeSignature -> Compiler Int
bindLocal mb_i isEval sig = liftC $ writeState $ \s ->
  let s' = s { cEnv = case mb_i of
                        Just i  -> Map.insert i (Local (cLocals s) isEval) (cEnv s)
                        Nothing -> cEnv s
             , cLocals   = cLocals s+1
             , cLocalEnv = sig : cLocalEnv s
             }
  in (s', cLocals s)

{- find out where an identifier is stored -}
whereIs :: Id -> Compiler (Maybe Where)
whereIs i = liftC $ readState $ \s -> Map.lookup i (cEnv s)

{- allocate a new compiler label and return it -}
newLabel :: Compiler Label
newLabel = liftC $ writeState $ \s -> let ls = cLabels s
                                      in (s{cLabels = ls+1}, ls)

-- take a compiler and compile it in its own environment,
-- saving and restoring the appropriate local state elements
-- give the depth on return.
branch :: Compiler a -> Compiler a
branch c =
  liftC get =>>= \ state ->
  let (r,state1) = runState c state in
  liftC (put state1{cEnv = cEnv state}) =>>
  return r

-- get the internal state
getIntState :: Compiler IntState
getIntState = liftC $ readState cState

------------------------------------------------------------------------------------------------
-- expression compiler
------------------------------------------------------------------------------------------------

cExpr :: SMode -> Label -> BranchAfter -> PosExp -> Compiler Bool

cExpr m      fail after (PosInt     p i) =
  ins (LDC_I4 i) =>>
  insBox m OpWord =>>
  cBranchAfter False Lazy after

cExpr m      fail after (PosChar    p c) =
  ins (LDC_I4 c) =>>
  insBox m OpWord =>>
  cBranchAfter False Lazy after

cExpr m      fail after (PosFloat   p f) =
  ins (LDC_R4 f) =>>
  insBox m OpFloat =>>
  cBranchAfter False Lazy after

cExpr m      fail after (PosDouble  p f) =
  ins (LDC_R8 f) =>>
  insBox m OpDouble =>>
  cBranchAfter False Lazy after

cExpr m      fail after (PosInteger p i) =
  ins (LDSTR (show i)) =>>
  ins (NEWOBJ sigIntegerClosure [ClassSignature "mscorlib" "System.String"]) =>>
  cBranchAfter False Lazy after

cExpr m      fail after (PosString  p s) =
  ins (LDSTR s) =>>
  ins (NEWOBJ sigStringClosure [ClassSignature "mscorlib" "System.String"]) =>>
  cBranchAfter False Lazy after

cExpr m      fail after (PosCon     p c) =
  pushVar Lazy after c

cExpr m      fail after (PosVar     p v) =
  pushVar m after v

cExpr m      fail after (PosExpLet False p bs e) =
  mapC (\(i,PosLambda p _ _ [] e) -> bindLocal (Just i) False sigClosure =>>= \loc ->
                                     cExpr Lazy fail Continue e =>>= \canFail ->
                                     ins (STLOC loc) =>>
                                     simply canFail) bs =>>= \fs ->
  cExpr m fail after e =>>= \canFail ->
  simply (canFail || or fs)

cExpr m      fail after (PosExpLet True p bs e) =
  mapC_ (\(i,_) -> bindLocal (Just i) False sigClosure =>>= \loc ->
                   ins (NEWOBJ sigThunkClosure []) =>>
                   ins (STLOC loc)) bs =>>
  mapC (\(i,PosLambda p _ _ [] e) -> cExpr Lazy fail Continue e =>>= \canFail1 ->
                                     pushVar Lazy Continue i =>>= \canFail2 ->
                                     ins (STFLD sigClosure sigThunkClosure "indirection") =>>
                                     simply (canFail1 || canFail2)) bs =>>= \fs ->
  cExpr m fail after e =>>= \canFail ->
  simply (canFail || or fs)

cExpr m      fail after (PosExpThunk p ap [a]) =
  cExpr m fail after a

cExpr m      fail after (PosExpThunk p ap [PosPrim _ SEQ _, x, y]) =
  cExpr Strict fail Continue x =>>= \canFail1 ->
  ins POP =>>
  cExpr m fail after y =>>= \canFail2 ->
  simply (canFail1 || canFail2)

cExpr m      fail after (PosExpThunk p ap (f@(PosExpIf _ _ _ _ _):as)) =
  cExpr Lazy fail Continue f =>>= \canFail ->
  mapC (cExpr Strict fail Continue) as =>>= \fs ->
  ins (CALLVIRT sigClosure sigClosure "Apply" (mkClosureArgs (length as))) =>>
  cBranchAfter (canFail || or fs) Strict after

cExpr m      fail after (PosExpThunk p ap (f:as)) =
  cCall m fail after f as

cExpr m      fail after (PosExpApp p as) =
  cExpr m fail after (PosExpThunk p False as)

cExpr m      fail after (PosExpFatBar _ e PosExpFail)=
  branch (cExpr m fail after e)

cExpr m      fail after (PosExpFatBar esc e f) =
  newLabel =>>= \ fail' ->
  cBranch after $ \after1 after2 ->
    branch (cExpr m fail' after1 e) =>>= \canFail ->
    (if canFail
       then ins (LABEL fail') =>>
            ins (POP) =>>
            branch (cExpr m fail after2 f)
       else simply False)

cExpr m      fail after (PosExpFail) =
  ins (BR fail) =>>
  simply True

cExpr Strict fail after (PosExpIf p g c t f) =
  newLabel =>>= \l1 ->
  cBranch after $ \after1 after2 ->
    cExpr (PrimStrict OpWord) fail Continue c =>>= \canFail1 ->
    ins (BRFALSE l1) =>>
    branch (cExpr Strict fail after1 t) =>>= \canFail2 ->
    ins (LABEL l1) =>>
    branch (cExpr Strict fail after2 f) =>>= \canFail3 ->
    simply (canFail1 || canFail2 || canFail3)

cExpr Strict fail after (PosExpCase p c as) =
  cExpr (if isIntCase as then PrimStrict OpWord else Strict) fail Continue c =>>= \canFail ->
  cBranch after (cCase as) =>>
  simply True
  where
    cCase []         after1 after2 = nop
    cCase (alt:alts) after1 after2 =
      (if null alts
         then simply fail
         else newLabel) =>>= \lab ->
      branch (
        ins (DUP) =>>
        (case alt of
           PosAltInt _ i _  e -> ins (LDC_I4 i) =>>
                                 ins (BNE lab)  =>>
                                 simply e
	   PosAltCon p t vs e -> liftC (getIdSignature t) =>>= \sig ->
                                 bindLocal (getExprVar c) True sig =>>= \loc ->
                                 mapC_ (\(vs,n) -> bindField (snd vs) (Local loc True) sig ('c':show n)) (zip vs [1..]) =>>
                                 ins (ISINST sig)  =>>
                                 ins (STLOC loc)   =>>
                                 ins (LDLOC loc)   =>>
                                 ins (BRFALSE lab) =>>
                                 simply e) =>>= \e ->
        ins (POP) =>>
        (if null alts
           then cExpr Strict lab after2  e =>>= \canFail ->
                nop
           else cExpr Strict lab after1 e =>>= \canFail ->
                ins (LABEL lab))) =>>
      cCase alts after1 after2

cExpr m      fail after e =
  getIntState =>>= \ is ->
  error $ "cExpr: no code for '"++strPExp (strIS is) "" e ++"'"


{- compile a call to a function, with some number of arguments given -}
cCall :: SMode -> Label -> BranchAfter -> PosExp -> [PosExp] -> Compiler Bool
cCall m fail after (PosPrim p c i) as =
  case c of
    P.ADD op    -> cPrimOp (ins IL.ADD) op
    P.SUB op    -> cPrimOp (ins IL.SUB) op
    P.MUL op    -> cPrimOp (ins IL.MUL) op
    P.QUOT      -> cPrimOp (ins IL.DIV) OpWord
    P.REM       -> cPrimOp (ins IL.REM) OpWord
    P.SLASH op  -> cPrimOp (ins IL.DIV) op
    P.CMP_EQ op -> cPrimOp (ins IL.CEQ) op
    P.CMP_NE op -> cPrimOp (ins IL.CEQ =>> ins IL.NOT) op
    P.CMP_LE op -> cPrimOp (ins IL.CGT =>> ins IL.NOT) op
    P.CMP_LT op -> cPrimOp (ins IL.CLT) op
    P.CMP_GE op -> cPrimOp (ins IL.CLT =>> ins IL.NOT) op
    P.CMP_GT op -> cPrimOp (ins IL.CGT) op
    P.NEG op    -> cPrimOp (ins IL.NEG) op
    P.ORD       -> mapC (cExpr Strict fail Continue) as =>>= \fs ->
                   ins (CALL sigClosure sigClosure "FromEnum" (mkClosureArgs 1)) =>>
                   cBranchAfter (or fs) Lazy after
    P.STRING    -> mapC (cExpr Strict fail Continue) as =>>= \fs ->
                   cBranchAfter (or fs) m after
  where
    cPrimOp f op =
      mapC (cExpr (PrimStrict op) fail Continue) as =>>= \fs ->
      f =>> insBox m op =>>
      cBranchAfter (or fs) Lazy after

cCall m fail after (PosCon p c) as =
  mapC (cExpr Lazy fail Continue) as =>>= \fs ->
  liftC (getIdSignature c) =>>= \sig ->
  ins (NEWOBJ sig (mkClosureArgs (length as))) =>>
  cBranchAfter (or fs) Lazy after

cCall m fail after (PosVar p v) as =
  isGlobal v =>>= \ glob ->
  (if glob then getIntState =>>= \ is ->
                let got    = length as
                    expect = arityIS is v
                    extra  = got - expect
                    (expected_as, extra_as) = splitAt expect as
                in
                  -- saturated or super-saturated case
                  liftC (getIdSignature v) =>>= \sig ->
                  if got >= expect
                    then mapC (cExpr Lazy fail Continue) expected_as =>>= \fs ->
                         (if expect > 0 then ins (NEWOBJ sig (mkClosureArgs expect))
                                        else ins (LDSFLD sigClosure sig "indirection")
                         ) =>>
                         mapC (cExpr Lazy fail Continue) extra_as =>>= \fs ->
                         -- apply extra arguments if needed
                         (if extra > 0 then ins (CALLVIRT sigClosure sigClosure "Apply" (mkClosureArgs extra))
                                       else nop
                         ) =>>
                         -- eval the result if needed
                         cBranchAfter (or fs) m after
                    else ins (LDTOKEN_METHOD VoidSignature sig ".ctor" (mkClosureArgs expect)) =>>
                         mapC (cExpr Lazy fail Continue) as =>>= \fs ->
                         ins (NEWOBJ sigPAPClosure (ValueSignature "mscorlib" "System.RuntimeMethodHandle" : mkClosureArgs got)) =>>
                         cBranchAfter (or fs) Lazy after
           else pushVar Lazy Continue v =>>= \canFail ->
                mapC (cExpr Lazy fail Continue) as =>>= \fs ->
                ins (CALLVIRT sigClosure sigClosure "Apply" (mkClosureArgs (length as))) =>>
                cBranchAfter (canFail || or fs) m after)

cCall m fail after f@(PosExpThunk p ap es) as =
  cExpr Lazy fail Continue f =>>= \canFail ->
  mapC (cExpr Lazy fail Continue) as =>>= \fs ->
  ins (CALLVIRT sigClosure sigClosure "Apply" (mkClosureArgs (length as))) =>>
  cBranchAfter (canFail || or fs) m after

cCall m fail after e got =
  getIntState =>>= \ is ->
  error $ "cCall: no code for '"++strPExp (strIS is) "" e++"'"


cBranchAfter canFail m (Return      ) = getIntState =>>= \ is ->
                                        liftC getCurrentId =>>= \i ->
                                        let ar = arityIS is i in
                                        (if ar == 0
                                           then liftC (getIdSignature i) =>>= \sig ->
                                                ins (STSFLD sigClosure sig "indirection") =>>
                                                ins (LDSFLD sigClosure sig "indirection")
                                           else ins (STFLD sigClosure sigThunkClosure "indirection") =>>
                                                ins (LDARG 0) =>>
                                                ins (LDFLD sigClosure sigThunkClosure "indirection")) =>>
                                        (if m /= Lazy
                                           then ins (TAIL)
                                           else nop) =>>
                                        insEval m =>> ins (RET)  =>> simply canFail
cBranchAfter canFail m (Continue    ) = insEval m =>>                simply canFail
cBranchAfter canFail m (ContinueTo l) = insEval m =>>                simply canFail
cBranchAfter canFail m (Goto       l) = insEval m =>> ins (BR l) =>> simply canFail

cBranch (Continue    ) f = newLabel =>>= \l ->
                           f (Goto l) (ContinueTo l) =>>= \r ->
                           ins (LABEL l) =>>
                           simply r
cBranch (ContinueTo l) f = f (Goto l) (ContinueTo l)
cBranch after          f = f after    after

-----------------------------------------------------------------------------------
-- helper functions
-----------------------------------------------------------------------------------

{- for a list of alternatives: returns whether this is an int-case -}
isIntCase :: [PosAlt] -> Bool
isIntCase as@(PosAltInt {} : _) = True
isIntCase as@(PosAltCon {} : _) = False

getExprVar (PosCon _ c) = Just c
getExprVar (PosVar _ v) = Just v
getExprVar _            = Nothing

-----------------------------------------------------------------------------------
-- instruction generation functions
-----------------------------------------------------------------------------------

{- issue a non instruction -}
nop :: Compiler ()
nop = simply ()

{- issue a full instruction -}
ins :: ILInstruction -> Compiler ()
ins i = return ((i :) , ())

{- issue an eval instruction if needed -}
insEval :: SMode -> Compiler ()
insEval (PrimStrict OpWord)   = ins (CALL Int32Signature  sigClosure "EvalInt" [])
insEval (PrimStrict OpDouble) = ins (CALL DoubleSignature sigClosure "EvalFloat" [])
insEval (PrimStrict OpFloat)  = ins (CALL FloatSignature  sigClosure "EvalDouble" [])
insEval Strict                = ins (CALLVIRT sigClosure  sigClosure "Eval" [])
insEval Lazy                  = nop

insBox (PrimStrict op1) op = nop
insBox _                op =
  case op of
    OpWord   -> ins (NEWOBJ sigIntClosure    [Int32Signature])
    OpDouble -> ins (NEWOBJ sigDoubleClosure [DoubleSignature])
    OpFloat  -> ins (NEWOBJ sigFloatClosure  [FloatSignature])

{- returns whether the given identifier is global or not -}
isGlobal :: Id -> Compiler Bool
isGlobal i =
    whereIs i =>>= \ w ->
    let b = isNothing w in
    simply b

{- push a variable on the stack -}
pushVar :: SMode -> BranchAfter -> Id -> Compiler Bool
pushVar m after i =
  whereIs i =>>= \mb_wh ->
  case mb_wh of
    Just wh -> pushWhere m after wh
    Nothing -> getIntState =>>= \ is ->
               liftC (getIdSignature i) =>>= \sig ->
               let ar = arityIS is i in
               if ar == 0
                 then ins (LDSFLD sigClosure sig "indirection") =>>
                      cBranchAfter False m after
                 else ins (LDTOKEN_METHOD VoidSignature sig ".ctor" (mkClosureArgs ar)) =>>
	              ins (NEWOBJ sigPAPClosure [ValueSignature "mscorlib" "System.RuntimeMethodHandle"]) =>>
	              cBranchAfter False Lazy after
  where
    pushWhere m after (This)           = ins (LDARG 0) =>>
                                         cBranchAfter False Lazy after
    pushWhere m after (Local n True)   = ins (LDLOC n) =>>
                                         cBranchAfter False Lazy after
    pushWhere m after (Local n False)  = ins (LDLOC n) =>>
                                         cBranchAfter False m after
    pushWhere m after (Field wh sig n) = pushWhere m Continue wh =>>= \canFail ->
                                         ins (LDFLD sigClosure sig n) =>>
                                         cBranchAfter canFail m after

getIdSignature :: Id -> STCompiler TypeSignature
getIdSignature v = do
  state <- readState cState
  case lookupIS state v of
    Just info -> let ns = splitNS info

                     name = case ns of
                       [n] -> (getModuleId state ++ "." ++ n)
                       ns  -> (concat (intersperse "." ns))

                     package
                       | tidI info == name_System_IO_Handle = "Haskell.Runtime"
                       | otherwise                          = ""

                 in return (ClassSignature package name)
    Nothing   -> localVarError

name_System_IO_Handle = Qualified (packString "System.IO") (packString "Handle")

getIdLocalSignature :: Id -> STCompiler (String, ILName, TypeSignature)
getIdLocalSignature v = do
  state <- readState cState
  case lookupIS state v of
    Just info -> let ns    = splitNS info
                     modid = getModuleId state
                 in case ns of
                      [n]    -> return ("", n, ClassSignature "" (getModuleId state ++ "." ++ n))
                      (n:ns) -> if n == modid
                                  then let ns_name = concat (intersperse "." (init ns))
                                           name    = concat (intersperse "." (n:ns))
                                       in return (ns_name, last ns, ClassSignature "" name)
                                  else localVarError
    Nothing   -> localVarError

setCurrentId :: Id -> STCompiler ()
setCurrentId i = writeState_ $ \s -> s { cCurrId = i }

getCurrentId :: STCompiler Id
getCurrentId = readState cCurrId

localVarError = error "Not a locally defined name"

splitNS :: Info -> [String]
splitNS info = split (tidI info)
  where
    split (TupleId n)          = [unpack rpsPrelude, 'Z':show n]
    split (Visible n)          = [encodeName n]
    split (Qualified  m n)     = [unpack m, encodeName n]
    split (Qualified2 m c t)   = [unpack m] ++ split c ++ split t
    split (Qualified3 m c t i) = [unpack m] ++ split c ++ split t ++ split i

    encodeName :: PackedString -> String
    encodeName ps =
      case encode (unpackPS ps) base of
        []     -> []
        (c:cs) -> toUpper c : cs
      where
        base | isConstr info = "Closure"
             | otherwise     = "Thunk"

        encode       [] xs = xs
        encode ('-':cs) xs = encode cs ('Z':'a':xs)
        encode ('+':cs) xs = encode cs ('Z':'b':xs)
        encode ('*':cs) xs = encode cs ('Z':'c':xs)
        encode ('=':cs) xs = encode cs ('Z':'d':xs)
        encode ('>':cs) xs = encode cs ('Z':'e':xs)
        encode ('<':cs) xs = encode cs ('Z':'f':xs)
        encode ('[':cs) xs = encode cs ('Z':'g':xs)
        encode (']':cs) xs = encode cs ('Z':'h':xs)
        encode ('.':cs) xs = encode cs ('Z':'i':xs)
        encode (':':cs) xs = encode cs ('Z':'j':xs)
        encode ('&':cs) xs = encode cs ('Z':'k':xs)
        encode ('/':cs) xs = encode cs ('Z':'l':xs)
        encode ('\'':cs)xs = encode cs ('Z':'m':xs)
        encode ('|':cs) xs = encode cs ('Z':'n':xs)
        encode ('$':cs) xs = encode cs ('Z':'o':xs)
        encode ('!':cs) xs = encode cs ('Z':'p':xs)
        encode ('^':cs) xs = encode cs ('Z':'q':xs)
        encode ('%':cs) xs = encode cs ('Z':'r':xs)
        encode ('Z':cs) xs = encode cs ('Z':'z':xs)
        encode (  c:cs) xs = encode cs (      c:xs)

    unpack = reverse . unpackPS

mkClosureArgs n = replicate n sigClosure

sigClosure          = ClassSignature "Haskell.Runtime" "Haskell.Runtime.Closure"
sigStringClosure    = ClassSignature "" "Haskell.Runtime.StringClosure"
sigIntClosure       = ClassSignature "Haskell.Runtime" "Haskell.Runtime.IntClosure"
sigFloatClosure     = ClassSignature "Haskell.Runtime" "Haskell.Runtime.FloatClosure"
sigDoubleClosure    = ClassSignature "Haskell.Runtime" "Haskell.Runtime.DoubleClosure"
sigIntegerClosure   = ClassSignature "Haskell.Runtime" "Haskell.Runtime.IntegerClosure"
sigThunkClosure     = ClassSignature "Haskell.Runtime" "Haskell.Runtime.ThunkClosure"
sigPAPClosure       = ClassSignature "Haskell.Runtime" "Haskell.Runtime.PAPClosure"
sigCAFClosure       = ClassSignature "Haskell.Runtime" "Haskell.Runtime.CAFClosure"
sigBlackHoleClosure = ClassSignature "Haskell.Runtime" "Haskell.Runtime.BlackHoleClosure"
sigPrimitives       = ClassSignature "Haskell.Runtime" "Haskell.Runtime.Primitives"
sigPaternMatchException = ClassSignature "Haskell.Runtime" "Haskell.Runtime.PatternMatchException"
