module Derive.Ix(deriveIx) where

import Syntax
import IntState
import IdKind
import NT
import State
import Derive.Lib
import TokenId(tIx,trange,tindex,tinRange,t_enumRange,t_enumIndex,t_enumInRange
        ,t_tupleRange,t_andand,t_tupleIndex,t_Tuple,dropM)
import Util.Extra(strPos)


deriveIx :: ((TokenId,IdKind) -> Id)
         -> Id -> Id -> [Id] -> [(Id,Id)] -> Pos -> a -> IntState -> (Decl Id,IntState)
deriveIx tidFun cls typ tvs ctxs pos =
  getInfo typ >>>= \ typInfo -> 
  mapS getInfo (constrsI typInfo) >>>= \ constrInfos ->
  if all noArgs constrInfos   -- enumeration
  then 
    let nt = NewType tvs [] ctxs [mkNTcons typ (map mkNTvar tvs)]
        tidTyp = tidI typInfo
        msg = ExpLit pos (LitString Boxed (show (dropM tidTyp)))
    in addInstMethod tIx tidTyp trange nt (tidFun (trange,Method)) >>>= \ funRange ->
       addInstMethod tIx tidTyp tindex nt (tidFun (tindex,Method)) >>>= \ funIndex ->
       addInstMethod tIx tidTyp tinRange nt (tidFun (tinRange,Method)) >>>= \ funInRange ->
       (unitS (ExpVar pos) =>>> getUnique) >>>= \expA ->
       (unitS (ExpVar pos) =>>> getUnique) >>>= \expB ->
       (unitS (ExpVar pos) =>>> getUnique) >>>= \expC ->
       (unitS (ExpVar pos) =>>> getUnique) >>>= \expD ->
       (unitS (ExpVar pos) =>>> getUnique) >>>= \expE ->
       unitS $
         DeclInstance pos (syntaxCtxs pos ctxs) cls [syntaxType pos typ tvs] $
           DeclsParse 
             [DeclFun pos funRange
               [Fun [expA]
                 (Unguarded 
                   (ExpApplication pos 
                     [ExpVar pos (tidFun (t_enumRange,Var)),expA]))
                 (DeclsParse [])]
             ,DeclFun pos funIndex
               [Fun [expB,expC]
                 (Unguarded 
                   (ExpApplication pos 
                     [ExpVar pos (tidFun (t_enumIndex,Var)),msg,expB,expC]))
                 (DeclsParse [])]
             ,DeclFun pos funInRange
               [Fun [expD,expE]
                 (Unguarded 
                   (ExpApplication pos 
                     [ExpVar pos (tidFun (t_enumInRange,Var)),expD,expE]))
                 (DeclsParse [])
             ]
                         ]
  else if  length constrInfos > 1 then
    deriveError ("Deriving of Ix is only allowed for enumeration or tuple types, and "
                 ++ show (tidI typInfo) ++ " at " ++ strPos pos ++ " is neither.")
  else  -- tupleType
    let constrInfo = head constrInfos
        conI = uniqueI constrInfo
        arity = arityI constrInfo

        expPair = ExpCon pos (tidFun (t_Tuple 2,Con))
        expConstr = ExpCon pos conI
        exp_tupleRange = ExpVar pos (tidFun (t_tupleRange,Var))
        expAnd = ExpVar pos (tidFun (t_andand,Var))
        exp_tupleIndex = ExpVar pos (tidFun (t_tupleIndex,Var))
        expInRange = ExpVar pos (tidFun (tinRange,Var))

        nt = NewType tvs [] ctxs [mkNTcons typ (map mkNTvar tvs)]
        tidTyp = tidI typInfo

    in addInstMethod tIx tidTyp trange nt (tidFun (trange,Method)) >>>= \ funRange ->
       addInstMethod tIx tidTyp tindex nt (tidFun (tindex,Method)) >>>= \ funIndex ->
       addInstMethod tIx tidTyp tinRange nt (tidFun (tinRange,Method)) >>>= \ funInRange ->
       newArgs pos arity >>>= \ rangeL ->
       newArgs pos arity >>>= \ rangeU ->
       newArgs pos arity >>>= \ inRangeL ->
       newArgs pos arity >>>= \ inRangeU ->
       newArgs pos arity >>>= \ inRangeI ->
       newArgs pos arity >>>= \ indexL@(headL:tailL) ->
       newArgs pos arity >>>= \ indexU@(headU:tailU) ->
       newArgs pos arity >>>= \ indexI@(headI:tailI) ->

       unitS $
         DeclInstance pos (syntaxCtxs pos ctxs) cls [syntaxType pos typ tvs] $
           DeclsParse 
             [DeclFun pos funRange
               [Fun 
                 [ExpApplication pos 
                    [expPair
                    ,ExpApplication pos (expConstr:rangeL)
                    ,ExpApplication pos (expConstr:rangeU)]
                 ]
                 (Unguarded 
                   (foldr ( \ (l,u) z -> 
                     ExpApplication pos [exp_tupleRange,l,u,z])
                     (ExpList pos [expConstr])
                     (reverse (zip rangeL rangeU)))) 
                 (DeclsParse [])]
             ,DeclFun pos funIndex
               [Fun 
                 [ExpApplication pos 
                   [expPair
                   ,ExpApplication pos (expConstr:indexL)
                   ,ExpApplication pos (expConstr:indexU)]
                 ,ExpApplication pos (expConstr:indexI)
                 ]
                 (Unguarded 
                   (foldr (\ (l,u,i) z -> 
                     ExpApplication pos [exp_tupleIndex,l,u,i,z])
                     (ExpApplication pos 
                       [ExpVar pos (tidFun (tindex,Var))
                       ,ExpApplication pos [expPair,headL,headU],headI])
                     (reverse (zip3 tailL tailU tailI)))) 
                 (DeclsParse [])]
             ,DeclFun pos funInRange
               [Fun 
                 [ExpApplication pos 
                   [expPair
                   ,ExpApplication pos (expConstr:inRangeL)
                   ,ExpApplication pos (expConstr:inRangeU)]
                 ,ExpApplication pos (expConstr:inRangeI)
                 ]
                 (Unguarded 
                   (foldr1 (\ a b -> ExpApplication pos [expAnd,a,b])
                     (map (\ (l,u,i) -> 
                       ExpApplication pos 
                         [expInRange,ExpApplication pos [expPair,l,u],i])
                     (zip3 inRangeL inRangeU inRangeI))))
                 (DeclsParse [])]
             ]



newArgs :: Num a => Pos -> a -> b -> IntState -> ([Exp Id],IntState)
newArgs pos 0 = unitS []
newArgs pos n = unitS ((:) . ExpVar pos) =>>> getUnique =>>> newArgs pos (n-1)
