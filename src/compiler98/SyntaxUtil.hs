module SyntaxUtil(dropPatAs, infixFun, isCon
        , isExpInt, isExpChar, isExpIrr, isExpVar, isVar, isNK
        , isTypeVar
        ) where

import Syntax
import SyntaxPos

-- CaseHelp

isVar :: Exp a -> Bool
isVar (ExpVar _ _) = True
isVar (PatWildcard _) = True
isVar _ = False

isCon :: Exp a -> Bool
isCon (ExpCon _ _) = True
isCon (ExpApplication _ (p:_)) = isCon p
isCon _ = False

isExpInt :: Exp a -> Bool
isExpInt (ExpLit _ (LitInt _ _)) = True
isExpInt _ = False

isExpChar :: Exp a -> Bool
isExpChar (ExpLit _ (LitChar _ _)) = True
isExpChar _ = False

isNK :: Exp a -> Bool
isNK (PatNplusK _ _ _ _ _ _) = True
isNK _ = False

isExpIrr :: Exp a -> Bool
isExpIrr (PatIrrefutable _ _) = True
isExpIrr _ = False

dropPatAs :: Exp a -> Exp a
dropPatAs (PatAs _ _ pat) = dropPatAs pat
dropPatAs pat = pat

isExpVar :: Exp a -> Bool
isExpVar (ExpVar _ _) = True
isExpVar _ = False


-- Rename

infixFun :: [Exp a] -> Maybe (Exp a,Pos,a,Exp a)
infixFun es =
  case break isExpVarOp es of
    (e1,ExpVarOp pos fun:e2) ->
      Just (ExpInfixList (getPos e1) e1,pos,fun,ExpInfixList (getPos e2) e2)
    _ -> Nothing

isExpVarOp :: Exp a -> Bool
isExpVarOp (ExpVarOp _ _) = True
isExpVarOp _ = False

isTypeVar :: Type a -> Bool
isTypeVar (TypeVar _ _ ) = True
isTypeVar _ = False
