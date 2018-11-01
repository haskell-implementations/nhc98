{- ---------------------------------------------------------------------------
Remove class and instance declarations from declarations of a module,
that is, replace them by their type and method declarations.
Create separate list for information about class and instance declarations.
Also changes arity of method definitions according to the arity in the symbol
table (why?; arity in the symbol table is number of function arrows in type)
-}
module RmClasses(rmClasses) where

import IntState
import Syntax
import Maybe
import State
import Bind(identDecl)
import TokenId(qualify)
import SysDeps(unpackPS)
import Id(Id)


type RmClassMonad a = String -> IntState -> (a,IntState)
type RmClassMonad2 a b = a -> IntState -> (b,IntState)


{- main function of the module -}
rmClasses :: ((TokenId,IdKind) -> Id) -> IntState -> Decls Id 
          -> ([ClassCode a Id] -- separate list about class and instance decls
             ,Decls Id         -- modified decls, without class and inst. decls
             ,IntState)

rmClasses tidFun state (DeclsParse topdecls) =
  case mapS rmClass topdecls (unpackPS (mrpsIS state)) state of
    (codedecls,state) ->
      case unzip codedecls of
        (code,decls) -> (concat code,DeclsParse (concat decls),state)


rmClass :: Decl Id -> RmClassMonad ([ClassCode a Id],[Decl Id])

rmClass (DeclClass pos ctx cls arg fundeps (DeclsParse decls)) =
  mapS fixArity decls >>>= \ decls ->
  unitS ([CodeClass pos cls] ,decls)
rmClass (DeclInstance pos ctx cls [TypeCons _ typ _] (DeclsParse decls)) =
  mapS fixArity decls >>>= \ decls ->
  unitS ([CodeInstance pos cls typ [] [] (concatMap identDecl decls)],decls)
rmClass decl = unitS ([],[decl])


fixArity :: Decl Id -> RmClassMonad (Decl Id)

fixArity decl@(DeclFun pos fun funs@(Fun args gdexps decls:_)) rstr state = 
  let wantArity = (arityVI . fromJust . lookupIS state) fun -- don't count ctx
      hasArity = length args
  in if wantArity == hasArity then
    (decl,state)
  else if wantArity < hasArity then
    --OLD: (DeclFun pos fun (map (toMany pos wantArity) funs),state)
    case uniqueISs state [0 .. hasArity] of
      ((_,newfuni):newargsi,state) ->
        let allArgs = map (ExpVar pos.snd) newargsi
        in case splitAt wantArity allArgs of
         (wantArgs,extraArgs) ->
           (DeclFun pos fun 
             [Fun wantArgs 
               (Unguarded 
                 (ExpLambda pos extraArgs
                   (ExpApplication pos (ExpVar pos newfuni : allArgs))))
               (DeclsParse [DeclFun pos newfuni funs])]
           ,updVarArity pos newfuni hasArity
             (addNewLetBound newfuni
               (qualify rstr (reverse (strIS state fun ++'\'':show newfuni))) 
                 () state)
           )

  else  -- want more
    case mapS (toFew pos (wantArity-hasArity)) funs () state of
      (funs,state) -> 
        (DeclFun pos fun funs,state)
fixArity decl _ state = (decl,state)


--toMany pos keep (Fun args gdexps decls) =
--  case splitAt keep args of 
--    (fargs,largs) -> Fun fargs (map ( \ (g,e) -> (g,ExpLambda pos largs e)) gdexps) decls

toFew :: Pos -> Int -> Fun Id -> RmClassMonad2 a (Fun Id)

toFew pos add (Fun args rhs decls) _ state =
    case uniqueISs state [1 .. add] of
      (newi,state) ->
        let eargs = map (ExpVar pos . snd) newi
        in  (Fun (args++eargs) (extendRhs pos eargs rhs) decls,state)


extendRhs :: Pos -> [Exp Id] -> Rhs Id -> Rhs Id
extendRhs pos args (Unguarded exp) = Unguarded $ ExpApplication pos (exp : args)
extendRhs pos args (PatGuard gdexps) = 
  PatGuard $ map (\(qs,e) -> (qs,ExpApplication pos (e:args))) gdexps
  
{- End RmClasses ------------------------------------------------------------}
