{- |
Restructure expressions with infix operators according to associativity and
precedence.
-}
module Fixity(fixInfixList) where

import Util.Extra(strPos)
import Syntax hiding (TokenId)
import SyntaxPos
import TokenId(TokenId(..), t_flip)
import IdKind(IdKind(..))
import Id(Id)
import State
import RenameLib
import Error


-- Just == Bind
-- Nothing == Stack

reorder :: [Exp TokenId] -> RenameMonad (Exp TokenId)
reorder es = getExp [] [] es

getExp :: [((InfixClass TokenId, Int), (Exp TokenId, Int))]
       -> [Exp TokenId] -> [Exp TokenId] -> RenameMonad (Exp TokenId)
getExp ops exps (e:es) =
  case e of
    ExpConOp pos o ->
      fixTid Con o >>>= \ fix ->
        case fix of
          (InfixPre a,l) -> getExp (stackPrefix fix (ExpCon pos o):ops) exps es
          _ -> error ("Mistake in an infix constructor application ("
                     ++show o++") at "++strPos (getPos e))
    ExpVarOp pos o ->
      fixTid Var o >>>= \ fix ->
        case fix of
          (InfixPre a,l) -> getExp (stackPrefix fix (ExpVar pos o):ops) exps es
          _ -> error ("Mistake in an infix operator chain involving ("
                     ++show o++") at "++strPos (getPos e))
    _ ->
      getOp ops (e:exps) es
getExp ops [] [] =
   error ("Problem with infix section at unknown location.")
getExp ops (e:es) [] =
   error ("Problem with infix section at "++strPos (getPos e))

getOp :: [((InfixClass TokenId, Int), (Exp TokenId, Int))]
      -> [Exp TokenId] -> [Exp TokenId] -> RenameMonad (Exp TokenId)
getOp ops exps [] = finish ops exps
getOp ops exps ees@(ExpConOp pos op:es) =
  harder pos ops Con op >>>= \ lr ->  
  case lr of
    Just (o,ops) -> getOp   ops          (rebuild o exps) ees
    Nothing      -> stackInfix (ExpCon pos op) >>>= \ fop -> getExp  (fop:ops) exps es
getOp ops exps ees@(ExpVarOp pos op:es) =
  harder pos ops Var op >>>= \ lr ->  
  case lr of
    Just  (o,ops) -> getOp   ops          (rebuild o exps) ees
    Nothing       -> stackInfix (ExpVar pos op) >>>= \ fop -> getExp  (fop:ops) exps es
getOp ops exps (e:es) =
   error ("Expected an infix operator at " ++ strPos (getPos e))
 

finish :: Num b1 => [((InfixClass id, b), (Exp id, b1))] -> [Exp id] -> d -> s -> (Exp id, s)
finish [] []   = error "finish empty" 
finish [] [e] = unitS e
finish [] _   = error "finish multiple expression"
finish (o:ops) es = finish ops (rebuild o es)

        
stackInfix :: Exp TokenId -> RenameMonad ((InfixClass TokenId, Int), (Exp TokenId, Int))
stackInfix op@(ExpVar _ o) = fixTid Var o >>>= \ fix -> unitS (fix,(op,2::Int))
stackInfix op@(ExpCon _ o) = fixTid Con o >>>= \ fix -> unitS (fix,(op,2::Int))

stackPrefix :: a -> a1 -> (a, (a1, Int))
stackPrefix fix op = (fix,(op,1::Int))

-- harder :: Pos -> [((InfixClass a,Int),(g,f))] -> IdKind -> e 
--               -> State (b,(e -> TokenId),c,d) RenameState (Maybe ((((InfixClass a),Int),(g,f)),[((InfixClass a,Int),(g,f))])) RenameState 
harder :: Pos -> [((InfixClass a, Int), (g, f))] -> IdKind -> TokenId
              -> RenameMonad
                 (Maybe (((InfixClass a, Int), (g, f)), [((InfixClass a, Int), (g, f))]))
                  

harder pos [] kind op' = unitS Nothing
harder pos (ipop@((inf,pri),(op,_)):ops) kind op' =
  fixTid kind op' >>>= \ (inf',pri') ->
  if pri > pri' then
    unitS (Just (ipop,ops))
  else if pri == pri' then
    case inf of
      InfixDef   -> unitS (Just (ipop,ops))
      InfixL     -> unitS (Just (ipop,ops))
      InfixPre _ -> unitS (Just (ipop,ops))
      InfixR     -> unitS (Nothing)
      Infix      -> renameError (ErrorRaw $ "Infix operator at " ++ strPos pos ++ " is non-associative.") (Just (ipop,ops))
  else unitS Nothing

rebuild :: Num b => ((InfixClass id, b1), (Exp id, b)) -> [Exp id] -> [Exp id]
rebuild (_,(op,2)) (e1:e2:es) = ExpApplication (getPos op) [op,e2,e1]:es
rebuild ((InfixPre fun,_) ,(op,_)) (e1:es) =
        ExpApplication (getPos op) [ExpVar (getPos op) fun,e1]:es
rebuild (_,(op,n)) es =
        error ("Not enough arguments at " ++ strPos (getPos op))

{-
Main function of the module.
-}
fixInfixList :: [Exp TokenId] -> RenameMonad (Exp TokenId)

fixInfixList [] = error "I: fixInfix []"
fixInfixList ees@(ExpVarOp pos op:es) =
  fixTid Var op >>>= \ fix ->
        case fix of
          (InfixPre a,l) -> reorder ees
          _ -> reorder es >>>= \ exp -> 
               invertCheck pos op fix exp >>>
               unitS (ExpApplication pos 
                       [ExpVar pos t_flip, ExpVar pos op, exp])
               -- desugaring with flip better than lambda for reading a trace
fixInfixList ees@(ExpConOp pos op:es) =
  fixTid Con op >>>= \ fix ->
        case fix of
          (InfixPre a,l) -> reorder ees
          _ -> reorder es >>>= \ exp -> 
               invertCheck pos op fix exp >>>
               unitS (ExpApplication pos 
                       [ExpVar pos t_flip, ExpCon pos op, exp]) 
               -- desugaring with flip better than lambda for reading a trace
fixInfixList ees =
  case last ees of
    ExpConOp pos op -> reorder (init ees) >>>= \ exp -> 
                       fixTid Con op >>>= \ fix ->
                       invertCheck pos op fix exp >>>
                       unitS (ExpApplication pos [ExpCon pos op,exp])
    ExpVarOp pos op -> reorder (init ees) >>>= \ exp -> 
                       fixTid Var op >>>= \ fix ->
                       invertCheck pos op fix exp >>>
                       unitS (ExpApplication pos [ExpVar pos op,exp])
    _ -> reorder ees

-- 'invertCheck' checks for priority inversion in an operator section.
invertCheck 
    :: Show a1 => Pos -> a1 -> (InfixClass TokenId, Int) -> Exp TokenId -> RenameMonadEmpty
invertCheck pos1 op1 (fix1,pri1) exp =
  case exp of
    ExpApplication _ (ExpVar pos2 op2: es) -> check Var pos2 op2
    ExpApplication _ (ExpCon pos2 op2: es) -> check Con pos2 op2
    _ -> unitS0
  where
    check kind pos2 op2 =
      fixTid kind op2 >>>= \(fix2,pri2) ->
      if pri2 < pri1 then
        error ("Fixity problem:\n  "
              ++show op1++" used at "++strPos pos1++" has precedence "
              ++show pri1++",\n  "
              ++show op2++" used at "++strPos pos2++" has precedence "
              ++show pri2++".\n  "
              ++"The partially applied operator "++show op1
              ++" should have lower precedence\n  "
              ++"than the fully-applied operator "
              ++show op2++" used inside the section.\n")
      else unitS0

{- --------------------------------------------------------------------------}
