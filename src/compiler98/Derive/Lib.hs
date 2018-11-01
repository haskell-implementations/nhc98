module Derive.Lib where

import Syntax
import IntState
import NT
import State

syntaxCtxs :: Pos -> [(id, id)] -> [Context id]
syntaxCtxs pos ctxs = map ( \ (c,v) -> Context pos c [(pos,v)]) ctxs

syntaxType :: Pos -> id -> [id] -> Type id
syntaxType pos typ tvs = TypeCons pos typ (map (TypeVar pos) tvs)

noArgs :: Info -> Bool
noArgs constrInfo =
  case ntI constrInfo of
    (NewType _ _ _ [nt]) -> True
    _ -> False

deriveError :: String -> State t IntState (Decl id) IntState
deriveError str = \ down state ->
  (DeclIgnore str,addError state str)
