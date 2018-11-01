{- |
Renames identifiers (also patches fixity information)

Also provides:

* 'ctxs2NT' to transform syntax tree type into internal type

* 'fixInstance' used by module "Derive"
-}
module Rename(ctxs2NT, fixInstance, rename) where

import List
import Syntax
import Bind(bindPat,bindDecls,identPat)
import RenameLib(ImportState,RenameState,RenameMonad
                ,keepRS,is2rs,renameError
                ,popScope,pushScope,globalTid,fixFixityRS,localTid,defineType
                ,transTypes,defineDataPrim,uniqueTid,defineDerived,defineData
                ,defineClass,transContext,defineDefault,defineVar,defineMethod
                ,transType,defineDefaultMethod,defineInstMethod,uniqueTVar
                ,defineField,defineConstr,checkPuns,bindNK)
import Fixity(fixInfixList)
import IExtract(tvPosTids,freeType,tvTids,countArrows,defFixFun)
import TokenId(tTrue,t_noMethodError,extractV{-,tEval-},t_lessequal,t_subtract)
import State
import IdKind
import Util.Extra
import NT
import IntState
import qualified Data.Map as Map
import SysDeps(PackedString,unpackPS)
import SyntaxPos
import SyntaxUtil(infixFun,isTypeVar)
import MkSyntax(desugarListComp,desugarListEnum)
import Id(Id)

import Overlap(Overlap)
import Flags(Flags)
import Maybe
import Error


{- |
Uniquely rename all identfiers (also patch fixity)
-}
rename :: Flags
       -> PackedString
       -> (TokenId -> [TokenId])
       -> ((TokenId->Bool) -> TokenId -> IdKind -> IE)
       -> [(InfixClass TokenId,Int,[FixId TokenId])]
       -> Decls TokenId -- declarations of program
       -> ImportState
       -> Overlap
       -> Either [Error]
            ( Decls Id  -- renamed declarations of program
            , IntState  -- internal state with symbol table
            , (TokenId,IdKind) -> Id        -- tidFun
            , (TokenId,IdKind) -> Maybe Id  -- tidFunSafe
            , [(Id,[(Pos,Id)])]             -- derived
            , Maybe [Id]                    -- userDefault
            , Map.Map (TokenId,IdKind) (Either [Pos] [Id])  -- rename tree?
            )

rename flags mrps qualFun expFun inf topdecls importState overlap =
  case is2rs flags mrps qualFun expFun overlap importState
         :: (Either [Error] (TokenId -> TokenId
                             ,TokenId -> IdKind -> IE
                             ,RenameState
                             ,Map.Map (TokenId,IdKind)
                                        (Either [Pos] [Id]))) of
    Right (qualFun,expFun,state,irt) ->
      case renameTopDecls inf topdecls qualFun expFun state
             :: (Decls Id,RenameState) of
        (DeclsParse topdecls,state) ->
          case keepRS state of
            (unique,(tidFun,tidFunSafe),rps,ts,derived,userDefaults,[]) ->
              case mapS (fixInstance (tidFun (tTrue,Con))) topdecls ()
                     (IntState unique rps ts [] flags) of
                (topdecls,state) ->
                  Right (DeclsParse topdecls,state,tidFun,tidFunSafe
                        ,derived,userDefaults,irt)
            (unique,(tidFun,tidFunSafe),rps,st,derived,userDefaults,errors) ->
              Left errors
    Left errors -> Left errors

---- ===============================

{-
In the input of this function every equation is a function declaration of its
own, as produced by the parser. This function groups succeeding equations
for the same function/variable identifier into a single function declaration.
-}

groupFun :: Eq a => Decls a -> Decls a

groupFun (DeclsParse decls) = DeclsParse (groupFun' decls)
  where

  groupFun' :: Eq a => [Decl a] -> [Decl a]

  groupFun' [] = []
  groupFun' (d@(DeclFun _ _ [Fun [] _ _]):r) = d: groupFun' r
  groupFun' (DeclFun pos fun funs:r) =
    DeclFun (mergePos pos (getPos funs')) fun (funs++funs'): groupFun' r'
    where
    (funs',r') =     groupFun'' fun [] r
  groupFun' (d@(DeclPat (Alt (ExpVar pos fun) gdexps w)):r) =
    groupFun' (DeclFun (mergePoss [pos,getPos gdexps,getPos w]) fun
                 [Fun [] gdexps w]:r)
  groupFun' (d@(DeclPat (Alt (ExpInfixList pos es) gdexps w)):r) =
    case infixFun es of
      Nothing -> d: groupFun' r
      Just (e1,pos',fun',e2) ->
        groupFun' (DeclFun (mergePoss [pos,getPos gdexps,getPos w]) fun'
                     [Fun [e1,e2] gdexps w]:r)
  groupFun' (d:r) = d: groupFun' r

  groupFun'' :: Eq a => a -> [Fun a] -> [Decl a] -> ([Fun a],[Decl a])

  groupFun'' fun acc (DeclFun pos fun' funs:r) | fun == fun' =
    groupFun'' fun (acc++funs) r
  groupFun'' fun acc  (d@(DeclPat (Alt (ExpVar pos fun') gdexps w)):r) =
    groupFun'' fun acc  (DeclFun (mergePoss [pos,getPos gdexps,getPos w]) fun'
                           [Fun [] gdexps w]:r)
  groupFun'' fun acc dr@(DeclPat (Alt (ExpInfixList pos es) gdexps w):r) =
    case infixFun es of
      Nothing -> (acc,dr)
      Just (e1,pos',fun',e2) ->
        groupFun'' fun acc  (DeclFun (mergePoss [pos,getPos gdexps,getPos w])
                               fun' [Fun [e1,e2] gdexps w]:r)
  groupFun'' fun acc r = (acc,r)


{- |
Rename statements of a do expression
-}
renameStmts :: [Stmt TokenId] -> RenameMonad [Stmt Id]

renameStmts (StmtExp exp:[]) = renameExp exp >>>= \ exp -> unitS [StmtExp exp]
renameStmts (StmtExp exp:r) =
  renameExp exp >>>= \ exp ->
  renameStmts r >>>= \ r ->
  unitS (StmtExp exp:r)
renameStmts (StmtBind pat exp:r) =
  if null r
  then renameError (ErrorRaw $ "Lambda statement at " ++ strPos (getPos pat)
                    ++ " can not end statement list")
                   [StmtExp (PatWildcard (getPos pat))]
  else renameExp exp >>>= \ exp ->
       pushScope >>>
       bindPat Var pat >>>
       renameExp pat >>>= \ pat ->
       renameStmts r >>>= \ r ->
       unitS (StmtBind pat exp:r) >>>
       popScope
renameStmts (StmtLet decls':r) =
  if null r
  then renameError (ErrorRaw $ "Let statement at " ++ strPos (getPos decls')
                    ++ " can not end statement list")
                   [StmtExp (PatWildcard (getPos decls'))]
  else
    let decls = groupFun decls'
    in pushScope >>>
        bindDecls decls >>>
        renameDecls decls >>>= \ decls ->
        renameStmts r >>>= \ r ->
        unitS (StmtLet decls:r) >>>
       popScope

---- ==============================

renameTopDecls :: [(InfixClass TokenId,Int,[FixId TokenId])]
               -> Decls TokenId
               -> (TokenId -> TokenId)
               -> (TokenId -> IdKind -> IE)
               -> RenameState
               -> (Decls Id,RenameState)

renameTopDecls inf topdecls1 qualFun expFun state1 =
 let (DeclsParse topdecls') = groupFun topdecls1
       -- group equations for same function definition together
     fixdecls = sepFixDecls topdecls'
       -- separate fixity declarations
     state2 =  (pushScope >>>
                bindDecls (DeclsParse topdecls')
                ) (globalTid,qualFun,expFun) state1
       -- store all defined term variables and class ids in a memo

     (fixity,state3) = fixFixityRS defFixFun state2 (inf++fixdecls)
     (topdecls2,state4) =
                (mapS renameDecl topdecls' >>>
                 popScope
                ) (globalTid,qualFun,expFun,fixity) state3
 in (DeclsParse topdecls2,state4)


sepFixDecls :: [Decl id] -> [FixDecl id]
sepFixDecls = concatMap (\decl-> case decl of
                                  DeclFixity f -> [f]
                                  _ -> [])


renameDecls :: Decls TokenId -> RenameMonad (Decls Id)
renameDecls (DeclsParse decls) (_,qualFun,expFun,fixity2) state3 =
    let (fixity3,state4) = fixFixityRS fixity2 state3 (sepFixDecls decls)
    in
      (unitS DeclsParse =>>> (mapS renameDecl) decls)
        (localTid,qualFun,\ _ _ -> IEnone,fixity3) state4


renameDecl :: Decl TokenId -> RenameMonad (Decl Id)

renameDecl (DeclType (Simple pos tid tvs) typ) =
  let al = tvPosTids tvs
  in transTypes al (map snd al) [] [typ] >>>= \nt ->
     defineType tid nt >>>= \d ->  -- extend symbol table
     unitS (DeclTypeRenamed pos d) -- new abstract syntax construct

{-
renameDecl (DeclType (Simple pos tid tvs) typ) =
  let al = tvPosTids tvs
  in transTypes al (map snd al) [] [typ] >>>= \nt ->
     defineType tid nt >>>= \d ->
     -- gross hack
     -- remove definition of type synonym from syntax tree
--   unitS (DeclIgnore "Type Synonym")
     unitS (DeclAnnot (DeclIgnore "Type Synonym") [AnnotArity (pos, d) 0])
     -- in a way such that it can still be recognised in DbgDataTrans
-}

renameDecl (DeclDataPrim  pos tid size) =
  uniqueTid pos TCon tid >>>= \i ->
  defineDataPrim tid (NewType [] [] [] [mkNTcons i []]) size >>>= \d ->
  unitS (DeclConstrs pos d [])

renameDecl (DeclData b ctxs (Simple pos tid tvs) constrs posidents) =
  let al = tvPosTids tvs
      free = map snd al
  in
     transTypes al free ctxs
                (map (uncurry TypeVar) tvs
                 ++ [TypeCons pos tid (map (uncurry TypeVar) tvs)])
       >>>= \nt@(NewType free [] ctxs nts) ->
     {- example:
        data Num a => Test a b = A a | B b
        nt = NewType [1,2] [] [(NumId, 1)]
               [mkNTvar 1, mkNTvar 2, mkNTcons TestId [mkNTvar 1, mkNTvar 2]]
     -}
     mapS (renameConstr tid al ctxs (last nts)) constrs >>>= \csfields ->
     let (cs,noargs,fields) = unzip3 csfields
     in defineData b tid nt cs >>>= \d ->
        renamePosIdents TCon ({-(pos,tEval):-}posidents) >>>= \ posis ->
        defineDerived d posis >>>
        (if b == Just True && length constrs > 1 && not (and noargs) then
         renameError (ErrorRaw $ "Unboxed data " ++ show tid ++ " at " ++ strPos pos ++
           " is neither an enumeration nor a single constructor data type.")
        else
         unitS) (DeclConstrs pos d (concat fields))

renameDecl (DeclClass pos ctxs tid [tvar] [] decls') =
  let al = tvTids [tvar]
      (DeclsParse decls) = groupFun decls'
  in transTypes al (map snd al) ctxs
                [TypeCons pos tid [TypeVar pos tvar]] >>>= \nt ->
     transContext al (Context pos tid [(pos,tvar)]) >>>= \ctx@(c,t) ->
     fixClassMethods tid tvar ctx decls >>>= \declmds ->
     defineClass pos tid nt (map snd declmds) >>>
     unitS (DeclClass pos [] c [t] [] (DeclsParse (map fst declmds)))
renameDecl (DeclClass pos ctxs tid (tvar:_) _ decls') =
  let al = tvTids [tvar]
  in transContext al (Context pos tid [(pos,tvar)]) >>>= \ctx@(c,t) ->
     renameError (ErrorRaw $ "Multi-parameter type-classes (used at "++strPos pos
                  ++") are not supported.")
                 (DeclClass pos [] c [t] [] (DeclsParse []))

renameDecl (DeclInstance pos ctxs tid [instanceType@(TypeCons _ tcon tvs)]
                         instmethods') | all isTypeVar tvs =
  let al = tvTids (snub (freeType instanceType))
      (DeclsParse instmethods) = groupFun instmethods'
  in mapS (renameCtx al) ctxs >>>= \ ctxs ->
     uniqueTid pos TClass tid >>>= \ c ->
     renameType al instanceType >>>= \ typ ->
     mapS (renameInstMethod) instmethods >>>= \ ims ->
     unitS (DeclInstance pos ctxs c [typ] (DeclsParse ims))
renameDecl (DeclInstance pos ctxs tid (inst:_) instmethods') =
     uniqueTid pos TClass tid >>>= \ c ->
     renameError (ErrorRaw $ "Multi-parameter type-classes (used at "++strPos pos
                  ++") are not supported.")
                 (DeclInstance pos [] c [] (DeclsParse []))

renameDecl (DeclDefault types) =
    mapS (renameType []) types >>>= \ types  ->
    defineDefault types >>>
    unitS (DeclIgnore "Type Defaults")


renameDecl (DeclVarsType posidents ctxs typ) =
  let al = (tvTids . snub . freeType) typ
  in unitS DeclVarsType =>>> renamePosIdents Var posidents
                            =>>> mapS (renameCtx al) ctxs
                            =>>> renameType al typ

renameDecl (DeclPat alt) =
    unitS DeclPat =>>> renameDeclAlt alt
renameDecl (DeclFun pos tid funs) =
    unitS (DeclFun pos) =>>> defineVar tid
                        =>>> mapS renameFun funs
renameDecl d@(DeclPrimitive pos tid arity typ) =
  let al = (tvTids . snub . freeType) typ
  in defineVar tid >>>= \ tid ->
     renameType al typ >>>= \ typ ->
     unitS (DeclPrimitive pos tid arity typ)
renameDecl d@(DeclForeignImp pos callConv str tid arity cast typ _) =
  let al = (tvTids . snub . freeType) typ
  in defineVar tid >>>= \ tid ->
     renameType al typ >>>= \ typ ->
     unitS (DeclForeignImp pos callConv str tid arity cast typ tid)
renameDecl d@(DeclForeignExp pos callConv str tid typ) =
  let al = (tvTids . snub . freeType) typ
  in defineVar tid >>>= \ tid ->
     renameType al typ >>>= \ typ ->
     unitS (DeclForeignExp pos callConv str tid typ)

--     Used for unimplemented things
renameDecl d@(DeclIgnore str) = unitS (DeclIgnore str)
renameDecl d@(DeclError str) = unitS (DeclError str)
renameDecl (DeclAnnot decl annots) = error "DeclAnnot"
renameDecl d@(DeclFixity f) = unitS (DeclIgnore "fixity")



{- ========================
Functions for renaming parts of a class definition
-}

{- |
Rename all methods (type declarations and default definitions)
of a class and make appropriate entries in the symbol table.
-}

fixClassMethods ::
     TokenId        {- class name -}
  -> TokenId        {- type variable of this class definition -}
  -> (Id,a)         {- this class identifier, type variable identifier -}
  -> [Decl TokenId] {- declarations of the class definition -}
  -> RenameMonad [(Decl Id,(Id,Id))]
     {- returns with each default definition identifier of
        type declaration and identifier of default definition -}

fixClassMethods cid tvar ctx decls =
  case partition isSignature decls of
    (sgn,def) ->
      mapS (renameMethod cid tvar ctx) sgn >>>= \ ms ->
      mapS renameDefault  (pairDefault (concat ms) def)

{-
-- For type declaration of a method:
-- Renames identifiers and translates type into internal type.
-- Adds respective entries to symboltable.
-- Note: the declaration may declare the type of several methods.
-}
renameMethod :: TokenId       {- class name -}
             -> TokenId       {- type variable of this class definition -}
             -> (Id,a)        {- class predicate (class, type variable) -}
             -> Decl TokenId  {- type declaration of method(s) -}
             -> RenameMonad [(Pos,TokenId,Id)]
                {- position, token and identifier of each method -}

renameMethod cid tvar ctx@(c,tv) (DeclVarsType postids ctxs typ) =
   let al = tvTids (snub (tvar:freeType typ))
       -- ^ necessary that type variable for the class context is the same!
       arity = countArrows typ
   in mapS (transContext al) ctxs >>>= \ ctxs ->
      transType al typ >>>= \ typ ->
      let free = map snd al
          nt = NewType free [] ({-ctx:-}ctxs) [anyNT [head free] typ]
          -- ^ The class context is not included in the type
      in mapS (\(pos,tid) -> defineMethod pos tid nt arity c cid >>>=
                  \ m -> unitS (pos,tid,m)) postids


renameDefault :: (Decl TokenId,a) -> RenameMonad (Decl Id,(a,Id))
     {- returns with each default definition identifier of
        type declaration and identifier of default definition -}

renameDefault (DeclFun pos tid funs,s) =
    defineDefaultMethod tid >>>= \ i ->
    mapS renameFun funs >>>= \ funs ->
    unitS (DeclFun pos i funs,(s,i))


{-
-- Renames method definition of an instance definition.
-}
renameInstMethod :: Decl TokenId -> RenameMonad (Decl Id)

renameInstMethod  (DeclFun pos tid funs) =
    defineInstMethod  tid >>>= \ i ->
    mapS renameFun funs >>>= \ funs ->
    unitS (DeclFun pos i funs)


{- tests if declaration is type declaration -}
isSignature :: Decl a -> Bool

isSignature (DeclVarsType posidents ctxs typ) = True
isSignature _ = False


{-
-- Pair each type declaration of a method (identifier referring to symboltable)
-- with its default definition.
-- Drop default definition, if no type declaration for it present (warning).
-- Make default definition that will abort, if no default definition present.
-}
pairDefault :: [(Pos,TokenId,a)] -> [Decl TokenId] -> [(Decl TokenId,a)]

pairDefault ms [] = map mkDMethod ms
pairDefault ms (DeclPat alt:r) =
  error " Sorry no left hand patterns in classes:-("
pairDefault ms (d@(DeclFun pos tid funs):r) =
   case partition ((tid==).snd3) ms of
     ([],ms) -> strace ("Dropping function " ++ show tid ++ " at "
                        ++ strPos pos ++ " without signature in class.")
                  (pairDefault ms r)
     ([(p,m,i)],ms) -> (d,i) : pairDefault ms r
     -- covers all cases under assumption of no duplicate type declarations
pairDefault ms (DeclIgnore str:r) = pairDefault ms r
pairDefault ms (DeclFixity f:r) = pairDefault ms r


{-
-- Make default method out of thin air for given method identifier.
-- The default method just calls "error" with suitable string.
-}
mkDMethod :: (Pos,TokenId,a) -> (Decl TokenId,a)

mkDMethod (pos,tid,i) =
  (DeclFun noPos tid [Fun [] (mkNoDefault noPos tid) (DeclsParse [])],i)
--  (DeclFun pos tid [Fun [] (mkNoDefault pos tid) (DeclsParse [])],i)


mkNoDefault :: Pos -> TokenId -> Rhs TokenId

mkNoDefault pos tid =
  Unguarded $
    ExpApplication pos
     [ExpVar pos t_noMethodError
     ,ExpLit pos (LitString Boxed ("No default definition for class method "
                                   ++ show tid))
     ]



---- =========================

renamePosIdents :: IdKind -> [(Pos, TokenId)] -> RenameMonad [(Pos, Id)]
renamePosIdents kind posidents =
    mapS (renamePosIdent kind)  posidents

renamePosIdent :: IdKind -> (Pos, TokenId) -> RenameMonad (Pos, Id)
renamePosIdent kind (pos,tid) =
    unitS (pair pos) =>>> uniqueTid pos kind tid

renameFun :: Fun TokenId -> RenameMonad (Fun Id)
renameFun (Fun pats rhs decls') =
 let decls = groupFun decls'
 in pushScope >>>
        mapS0 (bindPat Var) pats >>>
        pushScope >>>
        bindDecls decls >>>
        renameDecls decls >>>= \newdecls ->     -- do first, to get infix right
    unitS Fun =>>>
        mapS renameExp pats =>>>
        renameRhs rhs =>>>
        unitS newdecls >>>
        popScope >>>
    popScope


renameRhs :: Rhs TokenId -> RenameMonad (Rhs Id)
renameRhs (Unguarded exp) = unitS Unguarded =>>> renameExp exp
renameRhs (PatGuard gdExps) = 
  unitS PatGuard =>>> mapS renamePatGuardExp gdExps

renamePatGuardExp (quals,exp) =
    pushScope >>> renameQuals exp quals >>> popScope

renameQuals rhs [] =
  renameExp rhs >>>= \ rhs ->  unitS ([],rhs)
renameQuals rhs (QualExp exp:r) =
  renameExp exp >>>= \ exp ->
  renameQuals rhs r >>>= \ (r,rhs) ->
  unitS (QualExp exp:r, rhs)
renameQuals rhs (QualPatExp pat exp:r) =
       renameExp exp >>>= \ exp ->
       pushScope >>>
       bindPat Var pat >>>
       renameExp pat >>>= \ pat ->
       renameQuals rhs r >>>= \ (r, rhs) ->
       unitS (QualPatExp pat exp:r, rhs) >>>
       popScope
renameQuals rhs (QualLet decls':r) =
  if null r
  then renameExp rhs >>>= \ rhs ->
       renameError (ErrorRaw $ "Let statement at " ++ strPos (getPos decls')
                    ++ " can not end pattern guard")	-- dubious of this
                   ([QualExp (PatWildcard (getPos decls'))], rhs)
  else
    let decls = groupFun decls'
    in pushScope >>>
	bindDecls decls >>>
	renameDecls decls >>>= \ decls ->
	renameQuals rhs r >>>= \ (r, rhs) ->
        unitS (QualLet decls:r, rhs) >>>
       popScope

renameDeclAlt :: Alt TokenId -> RenameMonad (Alt Id)
renameDeclAlt (Alt  pat rhs decls') =
  let decls = groupFun decls'
  in mapS (defineVar . snd) (identPat pat)
     >>>= \_ ->               -- don't need the identifiers here
     pushScope >>>
        bindDecls decls >>>   -- bindPat done earlier
        renameDecls decls >>>= \newdecls->      -- do first, to get infix right
     unitS Alt =>>>
        renameExp pat =>>>
        renameRhs rhs =>>>
        unitS newdecls >>>
     popScope

renameCaseAlt :: Alt TokenId -> RenameMonad (Alt Id)
renameCaseAlt (Alt  pat rhs decls') =
  let decls = groupFun decls'
  in pushScope >>>
        bindPat Var pat >>>
        bindDecls decls >>>
        renameDecls decls >>>= \newdecls->      -- do first, to get infix right
    unitS Alt =>>>
        renameExp pat =>>>
        renameRhs rhs =>>>
        unitS newdecls >>>
    popScope


renameType :: [(TokenId,Id)] -> Type TokenId -> RenameMonad (Type Id)

renameType al (TypeApp t1 t2) =
   unitS TypeApp =>>> renameType al t1 =>>> renameType al t2
renameType al (TypeCons  pos tid types) =
   unitS (TypeCons pos) =>>>
   uniqueTid pos TCon tid =>>>
   mapS (renameType al) types
renameType al (TypeVar   pos tid)    =
   unitS (TypeVar pos) =>>> uniqueTVar pos al tid


renameCtx :: [(TokenId,Id)] -> Context TokenId -> RenameMonad (Context Id)

renameCtx al (Context pos tid [(p,t)]) =
    uniqueTid pos TClass tid >>>= \ i ->
    uniqueTVar p al t >>>= \ t ->
    unitS (Context pos i [(p,t)])
renameCtx al (Context pos tid _) =
    uniqueTid pos TClass tid >>>= \ i ->
    renameError (ErrorRaw $ "Multi-parameter type-classes (used at "++strPos pos
                  ++") are not supported.")
                (Context pos i [])


{- |
   For a constructor with type arguments as appearing on rhs of data or newtype:
   Make appropriate entries in symboltable.
-}
renameConstr :: TokenId          {- ^ type constructor of data\/newtype def. -}
             -> [(TokenId,Id)]   {- ^ canonically enumerated free type vars -}
             -> [(Id,Id)]        {- ^ context of the data\/newtype def. -}
             -> NT               {- ^ defined type (type constructor with vars)-}
             -> Constr TokenId   {- ^ constructor with type arguments -}
             -> RenameMonad (Id,Bool,[(Pos,Id,Id)])
                  {- ^ constructor id, no arguments, fields -}

renameConstr typtid al ctxs resType@(NTcons bt _ _)
                            c@(Constr pos tid fieldtypes) =
  let e =  [] -- no forall if Constr is used
      es = zip e [toEnum (1 + length al) .. ]
  in
    mapS (transFieldType (es++al)) fieldtypes >>>= \ntss ->
    let all = concat (ntss :: [[(Maybe (Pos,TokenId,Id),NT)]])
        nts = map snd all
        ifs :: [Maybe Id]
        ifs = map ( (\v -> case v of Just (p,tid,i) -> Just i; _ -> Nothing)
                    . fst) all
        exist = map snd es
    in
      defineConstr typtid tid (NewType (map snd al ++ exist) exist ctxs
        (nts++[resType])) ifs bt >>>= \ c ->
      mapS (defineField typtid bt c) (zip all [ 1:: Int ..]) >>>= \ fs ->
      unitS (c,null nts,map fromJust (filter isJust fs))

renameConstr typtid al ctxs resType@(NTcons bt _ _)
                            (ConstrCtx forAll ectxs' pos tid fieldtypes) =
  let -- ce = map ( \( Context _ _ [(_,v)]) -> v) ectxs'
      e =  map snd forAll
            -- filter (`notElem` (map fst al)) $ snub $  (ce ++) $
            -- concat $ map (freeType . snd) fieldtypes
      es = zip e [toEnum (1 + length al) .. ]
  in
    mapS (transFieldType (es++al)) fieldtypes >>>= \ntss ->
    let all = concat ntss
        nts = map snd all
        ifs = map ( (\v -> case v of Just (p,tid,i) -> Just i; _ -> Nothing)
                    . fst) all
        exist = map snd es
    in
      mapS (transContext (es++al)) ectxs' >>>= \ ectxs ->
      defineConstr typtid tid (NewType (map snd al ++ exist) exist ctxs
        (map ( \ (c,v) -> NTcontext c v) ectxs ++ nts++[resType]))
        ifs bt >>>= \ c ->
      mapS (defineField typtid bt c) (zip all [ 1:: Int ..]) >>>= \ fs ->
      unitS (c,null nts,map fromJust (filter isJust fs))


{- |
For a type in the right hand side of a data\/newtype definition with
possibly several field names:
translate type into internal type 'NT'
-}
transFieldType :: [(TokenId,Id)]   {- ^canonically ided free variables -}
               -> (Maybe [(Pos,TokenId)],Type TokenId)
                  {- ^possibly several field names with a given type -}
               -> RenameMonad [(Maybe (Pos,TokenId,Id),NT)]
                  {- ^possibly several field names with a given type -}

transFieldType al (Nothing,typ) =
  -- nearly identical to transFieldType in IExtract!!!
  transType al typ >>>= \ typ -> unitS [(Nothing,typ)]
transFieldType al (Just posidents,typ) =
  transType al typ >>>= \ typ ->
  mapS ( \ (p,v) -> uniqueTid p Field v >>>= \ i ->
                    unitS (Just (p,v,i),typ))
    posidents


renameField :: Field TokenId -> RenameMonad (Field Id)

renameField (FieldExp pos tid exp) =
  unitS (FieldExp pos) =>>> uniqueTid pos Field tid =>>> renameExp exp
renameField (FieldPun pos tid) =
  checkPuns pos >>>
  unitS (FieldExp pos) =>>>
  uniqueTid pos Field tid =>>>
  (unitS (ExpVar pos) =>>> uniqueTid pos Var tid)


renameExp :: Exp TokenId -> RenameMonad (Exp Id)

renameExp (ExpScc    str exp) = unitS (ExpScc str) =>>> renameExp exp
renameExp (ExpLambda pos pats exp) =
    pushScope >>>
        mapS0 (bindPat Var) pats >>>
    unitS (ExpLambda pos) =>>>
        mapS renameExp pats =>>>
        renameExp exp >>>
    popScope
renameExp (ExpDo pos stmts) = unitS (ExpDo pos) =>>> renameStmts stmts
renameExp (ExpRecord exp fields) =
  unitS ExpRecord =>>> renameExp exp =>>> mapS renameField fields
renameExp (ExpLet            pos decls' exp) =
  let decls = groupFun decls'
  in pushScope >>>
        bindDecls decls >>>
     unitS (ExpLet pos) =>>>
        renameDecls decls =>>>
        renameExp exp >>>
     popScope
renameExp (ExpCase pos exp alts) =
    unitS (ExpCase pos) =>>> renameExp exp =>>> mapS renameCaseAlt alts
renameExp (ExpIf   pos expCond expThen expElse) =
    unitS (ExpIf pos) =>>> renameExp expCond
                      =>>> renameExp expThen
                      =>>> renameExp expElse
renameExp (ExpType           pos exp ctxs typ) =
    let al = (tvTids . snub . freeType) typ
    in renameExp exp >>>= \ exp ->
       mapS (renameCtx al) ctxs >>>= \ ctxs ->
       renameType al typ >>>= \ typ ->
       unitS (ExpType pos exp ctxs typ)
renameExp e@(ExpListComp pos _ _) = renameExp (desugarListComp e)
renameExp e@(ExpListEnum pos _ _ _) = renameExp (desugarListEnum e)
renameExp (ExpBrack pos exp)  = renameExp exp
--- Above only in expressions
renameExp (ExpApplication   pos exps)  =
    unitS (ExpApplication pos) =>>> mapS renameExp exps

renameExp (ExpInfixList pos exps)  =
    fixInfixList exps >>>= \ exp -> renameExp exp
renameExp (ExpVar pos tid) =
    unitS (ExpVar pos) =>>> uniqueTid pos Var tid
renameExp (ExpCon pos tid) =
    unitS (ExpCon pos) =>>> uniqueTid pos Con tid
renameExp (ExpVarOp pos tid) =
    unitS (ExpVarOp pos) =>>> uniqueTid pos Var tid
renameExp (ExpConOp pos tid) =
    unitS (ExpConOp pos) =>>> uniqueTid pos Con tid
renameExp e@(ExpLit pos lit)   = unitS (ExpLit pos lit)
--renameExp (ExpTuple pos exps)  =
--    unitS (ExpTuple pos) =>>> mapS renameExp exps
renameExp (ExpList pos exps)  =
    unitS (ExpList pos) =>>> mapS renameExp exps
--- Below only in patterns
renameExp (PatAs pos tid pat) =
    unitS (PatAs pos) =>>> uniqueTid pos Var tid =>>> renameExp pat
renameExp e@(PatWildcard pos) =
    unitS (PatWildcard pos)
renameExp (PatIrrefutable pos pat) =
    unitS (PatIrrefutable pos) =>>> renameExp pat
renameExp (PatNplusK pos tid _ k _ _) =
    bindNK pos >>>= \ tid' ->
    let leq = ExpVar pos t_lessequal
        sub = ExpVar pos t_subtract
        n'  = ExpVar pos tid'
    in
    unitS (PatNplusK pos) =>>>
      uniqueTid pos Var tid =>>>
      uniqueTid pos Var tid' =>>>
      renameExp k =>>>
      renameExp (ExpApplication pos [leq,k,n']) =>>>
      renameExp (ExpApplication pos [sub,k,n'])




----- ===================

fixInstance :: Id -> Decl Id -> a -> IntState -> (Decl Id,IntState)

fixInstance iTrue (DeclInstance pos ctxs i [instanceType@(TypeCons _ ti tvs)]
                                (DeclsParse instmethods)) =
    ensureDefaults pos i >>>= \ cinfo ->
    mapS (\(m,d) -> getInfo m >>>= \minfo -> unitS (minfo,d))
         (methodsI cinfo) >>>= \cmds ->
    getInfo ti >>>= \ tinfo ->
    getIntState >>>= \ state ->
    mapS (\(pos,i) -> getInfo i >>>= \info -> unitS (pos,info))
         (map getI instmethods) >>>= \ ims ->
    let
      free = concatMap (\tv-> case tv of (TypeVar _ v) -> [v]; _ -> []) tvs
      ctxsNT =  ctxs2NT ctxs
      nt = NewType free [] ctxsNT [mkNTcons ti (map mkNTvar free)]
      cmds' = map ( \ (info,d) -> (extractV (tidI info),(info,d))) cmds
      old = map ( \ (pos,info) -> (pos,extractV (tidI info),info)) ims
      dms = map snd3 old
      (err,upd) = ( partition isLeft
                  . map ( \ (pos,rps,i) ->
                                 case lookup rps cmds' of
                                   Just (si,_) -> Right (uniqueI i,uniqueI si)
                                   Nothing     -> Left (pos,rps))
                  ) old

      tidtyp = tidI tinfo
      tidcls = tidI cinfo
      mrps = mrpsIS state
    in
      instanceError (show tidcls) err >>>
      addInstance i ti mrps free ctxsNT >>>
      mapS (mkIMethod pos tidcls tidtyp iTrue nt)
           (filter ((`notElem` dms).fst) cmds') >>>= \ fill ->
      mapS0 ((\(im,m) -> updInstMethodNT tidcls tidtyp im nt m) . dropRight)
            upd >>>
      unitS (DeclInstance pos ctxs i [instanceType]
                          (DeclsParse (fill++instmethods)))
fixInstance iTrue d = unitS d

instanceError :: String
                 -> [Either (Pos, PackedString) b]
                 -> State0 d IntState IntState

instanceError cstr [] = unitS0
instanceError cstr (Left (pos,rps):xs) =
  (\ down state ->
      addError state
        ("The identifier " ++ reverse (unpackPS rps) ++ " instantiated at "
         ++ strPos pos ++ " does not belong to the class " ++ cstr ++ ".")) >>>
  instanceError cstr xs

mkIMethod :: Pos -> TokenId -> TokenId -> t -> NewType -> (a, (Info, Id))
             -> State d IntState (Decl Id) IntState
mkIMethod pos tidcls tidtyp iTrue nt (rpsid,(minfo,d)) =
  let uniqueM = uniqueI minfo
  in addInstMethod tidcls tidtyp (tidI minfo) nt uniqueM >>>= \ mi ->
     unitS (DeclFun pos mi [Fun [] (Unguarded (ExpVar pos d)) (DeclsParse [])])

getI :: Decl id -> (Pos, id)
getI (DeclFun pos i funs) = (pos,i)


ctxs2NT :: [Context id] -> [(id, id)]
ctxs2NT ctxs = map ctx2NT ctxs
 where
   ctx2NT (Context pos c [(p,v)]) = (c,v)


ensureDefaults :: Pos -> Id -> State t IntState Info IntState
ensureDefaults pos i down state =
  case lookupIS state i of
    Just info@(InfoClass u tid e nt ms ds inst) ->
      if length ms == length ds
      then (info,state)
      else
        case uniqueISs state ms of
          (mds,state) ->
            let newInfo = InfoClass u tid e nt ms (map snd mds) inst
            in (newInfo
               ,foldr (addDefaultMethod tid)
                      (updateIS state i ( \ _ -> newInfo))
                      mds
               )


------ ===================





