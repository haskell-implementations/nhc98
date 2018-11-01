module Derive.Eq(deriveEq) where

import Syntax
import IntState
import IdKind
import Id(Id)
import NT
import State
import Derive.Lib
import TokenId(t_fromEnum,tFalse,tTrue,tEq,t_equalequal,t_andand)

deriveEq :: ((TokenId,IdKind) -> Id) -> Id -> Id -> [Id] -> [(Id,Id)] -> Pos 
         -> a -> IntState -> (Decl Id,IntState)
deriveEq tidFun cls typ tvs ctxs pos =
 getUnique >>>= \x ->
 getUnique >>>= \y ->
 let iEqual = tidFun (t_equalequal,Method)
     expTrue = ExpCon pos (tidFun (tTrue,Con))
     expX = ExpVar pos x
     expY = ExpVar pos y
 in
  getInfo typ >>>= \ typInfo -> 
  mapS getInfo (constrsI typInfo) >>>= \ constrInfos ->
  addInstMethod tEq (tidI typInfo) t_equalequal (NewType tvs [] ctxs [mkNTcons typ (map mkNTvar tvs)]) iEqual >>>= \ fun ->
  if all noArgs constrInfos
  then let exp_fromEnum = ExpVar pos (tidFun (t_fromEnum,Var))
           expEqual = ExpVar pos iEqual
       in
        unitS $
         DeclInstance pos (syntaxCtxs pos ctxs) cls [syntaxType pos typ tvs] $
            DeclsParse [DeclFun pos fun
                         [Fun [expX,expY]
                           (Unguarded
                             (ExpApplication pos 
                                [expEqual
                                ,ExpApplication pos [exp_fromEnum,expX]
                                ,ExpApplication pos [exp_fromEnum,expY]]))
                           (DeclsParse [])]]
  else mapS (mkEqFun expTrue tidFun pos) constrInfos >>>= \ funs ->
       getUnique >>>= \x ->
       getUnique >>>= \y ->
       unitS $
         DeclInstance pos (syntaxCtxs pos ctxs) cls [syntaxType pos typ tvs] $
           DeclsParse [DeclFun pos fun (funs ++ 
             [Fun [ExpVar pos x,ExpVar pos y] 
               (Unguarded (ExpCon pos (tidFun (tFalse,Con))))
               (DeclsParse [])])]
       
mkEqFun :: Exp Id -> ((TokenId,IdKind) -> Id) -> Pos -> Info 
        -> a -> IntState -> (Fun Id,IntState)
mkEqFun expTrue tidFun pos constrInfo =
 let con = ExpCon pos (uniqueI constrInfo)
 in case ntI constrInfo of
     NewType _ _ _ [nt] -> -- This constructor has no arguments
       unitS (Fun [ExpApplication pos [con],ExpApplication pos [con]] 
         (Unguarded expTrue) (DeclsParse []))
     NewType _ _ _ (_:nts) ->  -- We only want a list with one element for each argument, the elements themselves are never used
      mapS ( \ _ ->
             getUnique >>>= \ x ->
             getUnique >>>= \ y -> 
             unitS (ExpVar pos x,ExpVar pos y))
           nts >>>= \ vars ->
      let (lvs,rvs) = unzip vars
          expEqual = ExpVar pos (tidFun (t_equalequal,Method))
          expAnd = ExpVar pos (tidFun (t_andand,Var))
      in  
        unitS (
            Fun [ExpApplication pos (con:lvs),ExpApplication pos (con:rvs)]
            (Unguarded
              (foldr1 ( \ l v -> ExpApplication pos [expAnd,l,v]) 
                (map ( \ (v,r) -> ExpApplication pos [expEqual,v,r] ) vars)))
            (DeclsParse [])
        )
