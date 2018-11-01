{- ---------------------------------------------------------------------------
extract:
Adds arity of all defined variables to symbol table of internal state.
Adds type of variables from type declarations and primitive and foreign
function definitions to symbol table of internal state
(but not type declarations from classes).
Tests that there are not conflicting arities.
Tests for instance definition:
  is it illegally made for a type synonym?
  does class require instances for superclasses which are not present?
(Adds appropriate error message to internal state).

type2NT transforms type from syntax tree into interal type.
-}
module Extract(IntState,Decls,extract,type2NT) where

import Syntax(Type(..),Decls(..),Decl(..),Fun(..),Rhs(..),Exp(..),Stmt(..)
             ,Alt(..),Field(..),Qual(..))
import IntState(IntState,lookupIS,depthI,strIS,addError,superclassesI
               ,instancesI,updVarArity,updVarNT)
import NT(NT(..),NewType(..),mkNTvar,mkNTcons)
import Reduce(Reduce,mapR,unitR,(>>>))
import Rename(ctxs2NT)
import IExtract(freeType)
import Util.Extra(snub,strPos,mixLine,mixCommaAnd)
import Bind(identPat)
import SyntaxPos(Pos,HasPos(getPos))
import qualified Data.Map as Map
import Id(Id)
import Maybe


{- transform type from syntax tree into internal type -}

type2NT :: Type Id -> NT 

type2NT (TypeApp t1 t2) = NTapp (type2NT t1) (type2NT t2)
type2NT (TypeCons _ ci ts) = mkNTcons ci (map type2NT ts)
type2NT (TypeStrict _ t) = NTstrict (type2NT t)
type2NT (TypeVar _ v) = mkNTvar v       -- No KIND inference yet!

{-

-}
extract :: Decls Id -> IntState -> IntState
extract = extractDecls 


extractDecls :: Decls Id -> IntState -> IntState
extractDecls (DeclsParse decls)   =
    mapR extractDecl decls


extractDecl :: Decl Id -> Reduce IntState IntState

extractDecl (DeclInstance pos ctxs cls [instanceType@(TypeCons poscon con _)]
                          instmethods) =
  (\ state ->
    if (isJust . depthI . fromJust . lookupIS state) con then
      addError state ("Instance declaration of type synonym is illegal (" 
                      ++ strIS state con ++ " at " ++ strPos poscon ++ ")")
    else case (filter (isNothing.snd) 
              . map ( \ cls -> (cls,(Map.lookup con . instancesI . fromJust
                                     . lookupIS state) cls) ) 
              . superclassesI 
              . fromJust 
              . lookupIS state) cls of
           [] -> state
           clss -> addError state 
                     ("Instance declaration for the class " 
                      ++ strIS state cls ++ " at " ++ strPos pos 
                      ++ " needs instance(s) of "
                      ++ mixCommaAnd (map (strIS state . fst) clss) 
                      ++ " according to class declaration.")
  ) >>>
  extractDecls instmethods    -- error if we find any type signatures
extractDecl (DeclClass pos tctxs tClass tTVars fundeps (DeclsParse decls)) = 
  mapR extractDecl' decls
extractDecl (DeclPrimitive pos ident arity typ) =
  let nt = NewType (snub (freeType typ)) [] [] [type2NT typ]
  in updVarNT pos ident nt >>> updVarArity pos ident arity
extractDecl (DeclForeignImp pos _ _ ident arity cast typ _) =
  unitR      -- type extraction for ffi is now done earlier in FFITrans phase
extractDecl (DeclForeignExp pos _ _ ident typ) =
  unitR      -- type extraction for ffi is now done earlier in FFITrans phase
--let nt = NewType (snub (freeType typ)) [] (ctxs2NT []) [type2NT typ]
--in updVarNT pos ident nt
extractDecl (DeclVarsType posidents ctxs typ) =
  let nt = NewType (snub (freeType typ)) [] (ctxs2NT ctxs) [type2NT typ]
  in mapR ( \ (pos,i) -> updVarNT pos i nt) posidents
extractDecl (DeclPat alt) =  extractDeclAlt alt
extractDecl (DeclFun pos fun funs) = 
  updFunArity pos fun funs >>> mapR extractFun funs
extractDecl d = unitR

{-
extractDecl' is used in class declarations 
as we don't want to use top level signatures there
why are the declared types not added to the symbol table? (OC)
-}
extractDecl' :: Decl Id -> Reduce IntState IntState

extractDecl' (DeclPat alt) =   extractDeclAlt alt
extractDecl' (DeclFun pos fun funs) =  
  updFunArity pos fun funs >>> mapR extractFun funs
extractDecl' d = unitR


{-
Adds arity of defined variable to symbol table of internal state 
(any old arity is overwritten).
Assumes that variable is already in symbol table.
Adds error message, if equations of definition suggest different arities.
-}
updFunArity :: Pos -> Id -> [Fun a] -> Reduce IntState IntState

updFunArity pos fun funs =
  case map fA funs of
    (a:xs) ->
      if all (a==) xs
        then updVarArity pos fun a
        else \ state -> 
           addError state ("Multiple arities for " ++ strIS state fun ++ ": "
                           ++ mixLine (map (\ (pos,a) -> "    arity " 
                           ++ show a ++ " at " ++ strPos pos) (map fPA funs)))
  where
  fA (Fun args gdexps decls) = (length args)
  fPA (Fun args gdexps decls) = (getPos args,length args)


extractFun :: Fun Id -> Reduce IntState IntState
extractFun (Fun pats rhs decls) = extractRhs rhs >>> extractDecls decls


extractRhs :: Rhs Id -> Reduce IntState IntState
extractRhs (Unguarded exp) = extractExp exp
extractRhs (PatGuard gdExps) = mapR extractPatGuardExp gdExps

extractPatGuardExp :: ([Qual Id],Exp Id) -> Reduce IntState IntState
extractPatGuardExp (quals,exp) =
  mapR extractQual quals >>> extractExp exp


extractDeclAlt :: Alt Id -> IntState -> IntState
extractDeclAlt (Alt  pat rhs decls) =
  mapR ( \ (pos,ident) -> updVarArity pos ident 0) (identPat pat) >>>
  extractRhs rhs >>>
  extractDecls decls


extractAlt :: Alt Id -> IntState -> IntState
extractAlt (Alt pat rhs decls) = extractRhs rhs >>> extractDecls decls


extractExp :: Exp Id -> Reduce IntState IntState

extractExp (ExpScc            str exp)            = extractExp exp
extractExp (ExpLambda         pos pats exp)       = extractExp exp
extractExp (ExpLet            pos decls exp)      = 
  extractExp exp  >>> extractDecls decls
extractExp (ExpDo             pos stmts)          = mapR extractStmt stmts
extractExp (ExpCase           pos exp alts)       = 
  extractExp exp  >>> mapR extractAlt alts
extractExp (ExpIf             pos expC expT expE) = 
  extractExp expC >>> extractExp expT >>> extractExp expE
extractExp (ExpType           pos exp ctxs typ)   = extractExp exp
--- Above only in expressions
extractExp (ExpApplication   pos exps)  = mapR extractExp exps
extractExp (ExpList          pos exps)  = mapR extractExp exps
extractExp (ExpRecord        exp fields)=
  extractExp exp >>> mapR extractField fields
extractExp e                            = unitR

extractField :: Field Id -> Reduce IntState IntState
extractField (FieldExp _ _ exp) = extractExp exp
extractField (FieldPun _ _) = unitR

extractStmt :: Stmt Id -> Reduce IntState IntState
extractStmt (StmtExp  exp) = extractExp exp
extractStmt (StmtBind pat exp) = 
        mapR ( \ (pos,ident) -> updVarArity pos ident 0) (identPat pat) >>>
        extractExp exp
extractStmt (StmtLet decls) = extractDecls decls

extractQual :: Qual Id -> Reduce IntState IntState
extractQual (QualExp exp) = extractExp exp
extractQual (QualPatExp pat exp) = 
        mapR ( \ (pos,ident) -> updVarArity pos ident 0) (identPat pat) >>>
	extractExp exp
extractQual (QualLet decls) = extractDecls decls

{- End Module Extract -------------------------------------------------------}
