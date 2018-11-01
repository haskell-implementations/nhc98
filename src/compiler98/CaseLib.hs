-- | Needs 'IdSupply'? Erg, no. I don't know what it is doing with those 'Id's...
module CaseLib where

import Util.Extra(noPos)
import Syntax
import PosCode
import IntState
import qualified Data.Map as Map
import Id
import IdKind
import TokenId
import NT
import Info
import Building

type ExpI = Exp Id

-- | This enigmatic type has slightly-less enigmatic comments attached to its use in 'Case.caseTopLevel'
type Down = (ExpI -> ExpI
            ,ExpI
            ,ExpI
            ,ExpI
            ,ExpI
            ,(ExpI,ExpI)
            ,ExpI
            ,(TokenId,IdKind) -> Id
            ,PosExp
            ,[Char]
            , Map.Map Id Id
            )
type Thread = (IntState, Map.Map TokenId Id)

type CaseFun a = Down -> Thread -> (a,Thread)

----- Low level stuff

addRatioCon :: ((TokenId,IdKind) -> Id) -> IntState -> (Id,IntState)
addRatioCon tidFun state =
 case uniqueIS state of
  (u,state) ->
   let ratio = tidFun (tRatio,TCon)
       tvar = mkNTvar (toEnum 1)
   in
    case lookupIS state ratio of
     Just info ->
      case constrsI info of
       [ratioCon] -> (ratioCon,state)
       [] -> (u,addIS u (InfoConstr  u tRatioCon IEnone (InfixL,7)
                                    (NewType [toEnum 1] [] [{- !!! Integral 1 -}] [tvar,tvar,mkNTcons ratio [tvar]])
                                    [Nothing,Nothing] ratio)
                        (updateIS state ratio (\_ -> updConstrsI info [u])))

caseTidFun :: CaseFun ((TokenId,IdKind) -> Id)
caseTidFun down@(expEqualNumEq,expEqInteger,expEqFloat,expEqDouble,expTrue,expList,expError,tidFun,stgUndef,strModid,translate) up = (tidFun,up)

caseList :: CaseFun (ExpI,ExpI)
caseList down@(expEqualNumEq,expEqInteger,expEqFloat,expEqDouble,expTrue,expList,expError,stgRatioCon,stgUndef,strModid,translate) up = (expList,up)

caseEqInteger :: CaseFun ExpI
caseEqInteger down@(expEqualNumEq,expEqInteger,expEqFloat,expEqDouble,expTrue,expList,expError,stgRatioCon,stgUndef,strModid,translate) up =
 (expEqInteger, up)

caseEqFloat :: CaseFun ExpI
caseEqFloat   down@(expEqualNumEq,expEqInteger,expEqFloat,expEqDouble,expTrue,expList,expError,stgRatioCon,stgUndef,strModid,translate) up =
 (expEqFloat, up)

caseEqDouble :: CaseFun ExpI
caseEqDouble  down@(expEqualNumEq,expEqInteger,expEqFloat,expEqDouble,expTrue,expList,expError,stgRatioCon,stgUndef,strModid,translate) up =
 (expEqDouble, up)

caseTrue :: CaseFun ExpI
caseTrue down@(expEqualNumEq,expEqInteger,expEqFloat,expEqDouble,expTrue,expList,expError,stgRatioCon,stgUndef,strModid,translate) up = (expTrue,up)

caseRatioCon :: CaseFun PosExp
caseRatioCon down@(expEqualNumEq,expEqInteger,expEqFloat,expEqDouble,expTrue,expList,expError,tidFun,stgUndef,strModid,translate) up@(state,t2s)
  | compiler==Nhc98 =
      case addRatioCon tidFun state of
          (ratioCon,state) -> (PosCon noPos ratioCon,(state,t2s))
  | compiler==Yhc =
  -- in Yhc (%) is not a constructor, let's not make a mess by pretending it is 
      let expRatio = PosCon noPos (tidFun (tRatioCon, Con))
      in (expRatio,up)

caseUndef :: CaseFun PosExp
caseUndef down@(expEqualNumEq,expEqInteger,expEqFloat,expEqDouble,expTrue,expList,expError,stgRatioCon,stgUndef,strModid,translate) up = (stgUndef,up)

caseEqualNumEq :: CaseFun (ExpI -> ExpI)
caseEqualNumEq down@(expEqualNumEq,expEqInteger,expEqFloat,expEqDouble,expTrue,expList,expError,stgRatioCon,stgUndef,strModid,translate) up = (expEqualNumEq,up)

caseIdent :: Pos -> Id -> CaseFun PosExp
caseIdent pos ident down@(expEqualNumEq,expEqInteger,expEqFloat,expEqDouble,expTrue,expList,expError,stgRatioCon,stgUndef,strModid,translate) up =
  case Map.lookup ident translate of
    Just v -> (PosVar pos v,up)
    Nothing -> (PosVar pos ident,up)

caseTranslate :: Id -> [Id] -> CaseFun Down
caseTranslate v us down@(expEqualNumEq,expEqInteger,expEqFloat,expEqDouble,expTrue,expList,expError,stgRatioCon,stgUndef,strModid,translate) up =
  ((expEqualNumEq,expEqInteger,expEqFloat,expEqDouble,expTrue,expList,expError,stgRatioCon,stgUndef,strModid,foldr ( \ u t -> Map.insert u v t ) translate us),up)

caseTuple :: Int -> CaseFun Id
caseTuple s down  up@(state,t2i) = 
  let tid = TupleId s
  in case Map.lookup tid t2i of
    Just i -> (i,up)
    Nothing ->
      case uniqueIS state of
        (u,state) ->
          let info = InfoName u tid s tid False --PHtprof
          in (u,(addIS u info state,Map.insert tid u t2i ))

caseAdd :: Info -> Down -> Thread -> Thread
caseAdd info d up@(state,t2i) =
    let id = uniqueI info
    in (addIS id info state,t2i)

caseError :: String -> Down -> Thread -> Thread
caseError error down (state,t2i) = (addError state error,t2i)

caseUnique :: CaseFun Id
caseUnique down (state,t2i) =
  case uniqueIS state of
    (i,state) -> (i,(state,t2i))

caseUniques :: [a] -> CaseFun [(a,Id)]
caseUniques l down (state,t2i) = 
 case uniqueISs state l of
   (il,state) -> (il,(state,t2i))

caseState :: CaseFun IntState
caseState down up@(state,t2i) = (state,up)

caseArity :: Id -> CaseFun Int
caseArity con down up@(state,t2i) =
  case lookupIS state con of
    Just info -> (arityVI info,up)


