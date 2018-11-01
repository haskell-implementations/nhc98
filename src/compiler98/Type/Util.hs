module Type.Util (cvi2typedict, ntIS, unboxedIS)  where

import Id
import NT
import Type.Subst
import Type.Data
import IntState
import Util.Extra(assocDef,snub)

-- ntIS returns NoType if identifier doesn't exist

ntIS :: IntState -> Id -> (NewType,IntState)
ntIS state i =
  case lookupIS state i of
    Just (InfoData   unique tid ie nt dk) -> fresh nt state
    Just (InfoVar     unique tid ie fix nt annot) -> fresh nt state
    Just (InfoConstr  unique tid ie fix nt fields iType) -> fresh nt state
    Just (InfoMethod  unique tid ie fix nt  annot iClass) ->
      case fresh nt state of
        (NewType free@(a:_) [] ctx nts,state) -> (NewType free [] ((iClass,a):ctx) nts,state)
    Just (InfoDMethod  unique tid nt annot iClass) ->
      case fresh nt state of
        (NewType free@(a:_) [] ctx nts,state) -> (NewType free [] ((iClass,a):ctx) nts,state)

    Just (InfoIMethod uI tidI (NewType freeI [] ctxI [ntI]) annotsI iMethod) ->
      case lookupIS state iMethod of
        Just (InfoMethod uM tidM ieM fixM ntM annotM iClass) ->
          case fresh ntM state of
            (NewType (a:free) [] ctxM [ntM],state) ->
              let phi = addSubst idSubst a ntI
                  nt' = subst phi ntM
              in  fresh (NewType (snub (freeNT nt')) [] (ctxI++ctxM) [nt']) state

    Just info -> error ("ntIS Just (" ++ show info ++") " ++ show i) 
    Nothing -> (NoType,state) 

-- NOTE add fake constructors

fresh :: NewType -> IntState -> (NewType,IntState)
fresh NoType state = (NoType,state)
fresh nt@(NewType free exist ctx nts) state =
  case uniqueISs state free of
    (assoclist,state) ->
      let tv v =  assocDef assoclist v v -- If it's not in the list, then it isn't free!
          free' = map snd assoclist
          exist' = map tv exist
          ctxs' = transCtxs tv id ctx
          nts' = map (freshNT tv) nts
      in {- forceList free' -} (NewType free' exist' ctxs' nts' ,state)

cvi2typedict :: Pos -> a -> [((Id,NT),Id)] -> [(Id,TypeDict)]
cvi2typedict pos exist ctxsi =
    map ( \ ((c,nt),i) -> (i,TypeDict c nt [(i,pos)])) ctxsi


-------

unboxedIS :: IntState -> Id -> Bool
unboxedIS state c =
  case lookupIS state c of
    Just info ->
      isDataUnBoxed info 
