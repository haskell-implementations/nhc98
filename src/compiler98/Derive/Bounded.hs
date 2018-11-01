module Derive.Bounded(deriveBounded) where

import Syntax
import IntState
import IdKind
import NT
import State
import Derive.Lib
import TokenId(tminBound,tmaxBound,tBounded,tTrue)

deriveBounded :: ((TokenId,IdKind) -> Id)
              -> Id -> Id -> [Id] -> [(Id,Id)] -> Pos -> a -> IntState -> (Decl Id,IntState)
deriveBounded tidFun cls typ tvs ctxs pos =
 getInfo typ >>>= \ typInfo -> 
 let expTrue = ExpCon pos (tidFun (tTrue,Con))
     constrs = constrsI typInfo
     tidTyp = tidI typInfo
     nt = NewType tvs [] ctxs [mkNTcons typ (map mkNTvar tvs)]
 in
  getInfo (head constrs) >>>= \ minInfo ->
  getInfo (last constrs) >>>= \ maxInfo ->
  addInstMethod tBounded tidTyp tminBound nt (tidFun (tminBound,Method)) >>>= \ methodMinBound ->
  addInstMethod tBounded tidTyp tmaxBound nt (tidFun (tmaxBound,Method)) >>>= \ methodMaxBound ->
  unitS $
    DeclInstance pos (syntaxCtxs pos ctxs) cls [syntaxType pos typ tvs] $
      DeclsParse 
        [mkBound expTrue pos minInfo methodMinBound (tidFun (tminBound,Var))
        ,mkBound expTrue pos maxInfo methodMaxBound (tidFun (tmaxBound,Var))
        ]


mkBound :: a -> Pos -> Info -> Id -> Id -> Decl Id
mkBound expTrue pos constrInfo methodBound funBound =
 case ntI constrInfo of
     NewType _ _ _ [nt] -> -- This constructor has no arguments
       DeclFun pos methodBound
         [Fun [] (Unguarded (ExpCon pos (uniqueI constrInfo))) (DeclsParse [])]

     NewType _ _ _ (_:nts) ->  -- We only want a list with one element for each argument, the elements themselves are never used
      let args = (map fst . zip (repeat expBound)) nts
          expBound = ExpVar pos funBound
      in  
        DeclFun pos methodBound
          [Fun []
            (Unguarded 
              (ExpApplication pos (ExpCon pos (uniqueI constrInfo):args))) 
            (DeclsParse [])]

