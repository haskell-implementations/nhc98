module Derive.Enum(deriveEnum) where

import Syntax
import IntState
import IdKind
import NT
import State
import Derive.Lib
import TokenId(tEnum,tfromEnum,ttoEnum,tenumFrom,tenumFromThen,t_fromEnum,t_toEnum,t_enumFromTo,t_enumFromThenTo)
import Util.Extra(strPos)

deriveEnum :: ((TokenId,IdKind) -> Id)
           -> Id -> Id -> [Id] -> [(Id,Id)] -> Pos -> a -> IntState -> (Decl Id,IntState)
deriveEnum tidFun cls typ tvs ctxs pos =
  getInfo typ >>>= \ typInfo -> 
  mapS getInfo (constrsI typInfo) >>>= \ constrInfos ->
  if not (all noArgs constrInfos)
  then
    deriveError ("Nhc can only derive Enum for enumeration types (" ++ strPos pos ++ ")")
  else
    let expLast = ExpLit pos (LitInt Boxed (length constrInfos -1))
        nt = NewType tvs [] ctxs [mkNTcons typ (map mkNTvar tvs)]
        tidTyp = tidI typInfo
    in
    addInstMethod tEnum tidTyp tfromEnum nt (tidFun (tfromEnum,Method)) >>>= \ funFromEnum ->
    addInstMethod tEnum tidTyp ttoEnum   nt (tidFun (ttoEnum,Method)) >>>= \ funToEnum ->
    addInstMethod tEnum tidTyp tenumFrom nt (tidFun (tenumFrom,Method)) >>>= \ funFrom ->
    addInstMethod tEnum tidTyp tenumFromThen nt (tidFun (tenumFromThen,Method)) >>>= \ funFromThen ->
    (unitS (ExpVar pos) =>>> getUnique) >>>= \expA ->
    (unitS (ExpVar pos) =>>> getUnique) >>>= \expB ->
    (unitS (ExpVar pos) =>>> getUnique) >>>= \expC ->
    (unitS (ExpVar pos) =>>> getUnique) >>>= \expD ->
    (unitS (ExpVar pos) =>>> getUnique) >>>= \expE ->
    (unitS (ExpVar pos) =>>> getUnique) >>>= \expF ->
    (unitS (ExpVar pos) =>>> getUnique) >>>= \expG ->
    (unitS (ExpVar pos) =>>> getUnique) >>>= \expH ->
    unitS $
      DeclInstance pos (syntaxCtxs pos ctxs) cls [syntaxType pos typ tvs] $
        DeclsParse 
          [DeclFun pos funFromEnum
            [Fun [expA]
              (Unguarded 
                (ExpApplication pos 
                  [ExpVar pos (tidFun (t_fromEnum,Var)),expA])) 
              (DeclsParse [])]
          ,DeclFun pos funToEnum
            [Fun [expB]
              (Unguarded (
                let cons = zip (constrsI typInfo) [0..]
                    alts = map mkAlt cons

                    mkAlt (c,n) = Alt pat (Unguarded rhs) decls
                        where 
                        pat = ExpLit pos (LitInt Boxed n)
                        rhs = ExpCon pos c
                        decls = DeclsParse []
                in (ExpCase pos expB alts)
               ))
               {- no such luck!
                (ExpApplication pos 
                  [ExpVar pos (tidFun (t_toEnum,Var)),expB]))
               -}
              (DeclsParse [])]
          ,DeclFun pos funFrom
            [Fun [expC]
              (Unguarded 
                (ExpApplication pos 
                  [ExpVar pos (tidFun (t_enumFromTo,Var)),expC,expLast]))
                (DeclsParse [])]
          ,DeclFun pos funFromThen
             [Fun [expD,expE]
               (Unguarded 
                 (ExpApplication pos 
                   [ExpVar pos (tidFun (t_enumFromThenTo,Var))
                   ,expD,expE,expLast]))
               (DeclsParse [])
          ]
                      ]

