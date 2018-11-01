{- ---------------------------------------------------------------------------
The FSMonad and some helper functions for FixSyntax
-}
module FSLib(module FSLib, TokenId) where

import Syntax hiding (TokenId)
import SysDeps(PackedString,trace)
import IdKind
import Info hiding (TokenId,NewType)
import State
import qualified Data.Map as Map
import Util.Extra(noPos)
import TokenId
import IntState(IntState,lookupIS,addIS,uniqueIS,tidIS,mrpsIS,strIS,defaultMethodsIS)
import NT(NewType(..))
import Id(Id)
import Maybe

type ExpList = (Exp Id,Exp Id,Exp Id,Exp Id)  -- expList (nil, cons, TyCon, TyGeneric)

type Inherited = (  ExpList
                  , Exp Id           -- expId
                  , (TokenId,IdKind) -> Id) --tidFun

type Threaded = (IntState, Map.Map TokenId Id)

type FSMonad a = State Inherited Threaded a Threaded


startfs :: (Decls Id -> FSMonad a)
        -> Decls Id
        -> IntState
        -> ((TokenId,IdKind) -> Id)
        -> (a, IntState, Map.Map TokenId Id)

startfs fs x state tidFun =
      let down = ( ( ExpCon noPos (tidFun (t_List,Con))
                   , ExpCon noPos (tidFun (t_Colon,Con))
                   , ExpVar noPos (tidFun (tTyCon,Var))
                   , ExpVar noPos (tidFun (tTyGeneric,Var))
                   )
                 , ExpVar noPos (tidFun (t_id,Var))
                 , tidFun
                 )

          up = (state, Map.empty)
      in
        case fs x down up of
         (x,(state,t2i)) -> (x,state,t2i)


fsList :: FSMonad ExpList
fsList down@(expList,expId,tidFun) up = (expList,up)

fsId :: FSMonad (Exp Id)
fsId down@(expList,expId,tidFun) up = (expId,up)

fsState :: FSMonad IntState
fsState down up@(state,t2i) = (state,up)

fsTidFun :: FSMonad ((TokenId,IdKind) -> Id)
fsTidFun down@(expList,expId,tidFun) up =
  (tidFun,up)


{-
Returns True iff given data constructor is defined by data definition,
not newtype definition.
-}
fsRealData :: Id -> FSMonad Bool

fsRealData con down up@(state,t2i) =
  ((isRealData . fromJust . lookupIS state . belongstoI
    . fromJust . lookupIS state) con,up)


fsExpAppl :: Pos -> [Exp Id] -> FSMonad (Exp Id)

fsExpAppl pos [x] = unitS x
fsExpAppl pos xs = unitS (ExpApplication pos xs)


fsInstanceFor :: Id -> Id -> Maybe Id -> IntState -> PackedString
fsInstanceFor cls typ sel state =
    let clsInfo  = fromJust $ lookupIS state cls
        typInfo  = fromJust $ lookupIS state typ
        insts    = instancesI clsInfo
        defs     = defaultMethodsIS state cls
        isDef    = maybe False (`elem` defs) sel
    in if not isDef && isData typInfo then
         case Map.lookup typ insts of
             Just (rps,free,ctxt) -> rps
             Nothing              -> error $ "fsInstanceFor: No instance of class " ++ strIS state cls ++
                                             " for type " ++ strIS state typ
       else
         extractM (tidI clsInfo)


fsClsTypSel :: Pos -> Id -> Id -> Id -> FSMonad (Exp Id)
fsClsTypSel pos cls typ sel down  up@(state,t2i) =
    let clsInfo = fromJust $ lookupIS state cls
        typInfo = fromJust $ lookupIS state typ
        mi      = fsInstanceFor cls typ (Just sel) state

        tid = mkQual3 mi (tidI clsInfo) (tidI typInfo) (tidIS state sel)
    in case Map.lookup tid t2i of
           Just i -> (ExpVar pos i,up)
           Nothing ->
               case uniqueIS state of
                    (u,state) ->
                        let   -- !!! Arity of selector doesn't look right !!!
                           selAR = (arityIM . fromJust . lookupIS state) sel
                           clsAR = (length . (\(_,_,x)->x) . fromJust . flip Map.lookup (instancesI clsInfo)) typ
                           arity = selAR + clsAR
                           info = InfoName  u tid arity tid False --PHtprof
--                         info = InfoMethod  u tid IEnone (InfixDef,9) NoType (Just arity) cls
                        in (ExpVar pos u,(addIS u info state,Map.insert tid u t2i))


fsExp2 :: Pos -> Id -> Id
       -> State a 
                (IntState, Map.Map TokenId Id)
		(Exp Id)
		(IntState, Map.Map TokenId Id)
fsExp2 pos cls i =
  unitS (ExpVar pos) =>>> fsExp2i pos cls i


fsExp2i :: Pos -> Id -> Id -> a
        -> (IntState, Map.Map TokenId Id)
        -> (Id, (IntState, Map.Map TokenId Id))


fsExp2i pos cls i down  up@(state,t2i) =
  case lookupIS state cls of
   Just clsInfo ->
     case lookupIS state i of
       Just clsdatInfo ->
         let mi = fsInstanceFor cls i Nothing state
             tid = mkQual2 mi (tidI clsInfo)  (tidI clsdatInfo)
         in case Map.lookup tid t2i of
           Just i ->  (i,up)
           Nothing ->
             case uniqueIS state of
               (u,state) ->
                 if isClass clsdatInfo
                 then -- Exp2 is either superclass (Ord.Eq) taking one argument ...
                    (u,(addIS u (InfoMethod u tid IEnone (InfixDef,9) NoType
                                            (Just 1) cls) state
                       ,Map.insert tid u t2i))
                 else -- ... or instance (Eq.Int) argument depends on type
                    let arity = (length . (\(_,_,x)->x) . fromJust
                                . flip Map.lookup (instancesI clsInfo)) i
                        -- snd instead of fst !!!
                    in seq arity (u,(addIS u (InfoVar u tid IEall (InfixDef,9)
                                                      NoType (Just arity))
                                             state
                                    ,Map.insert tid u t2i))

{- End Module FSLib ---------------------------------------------------------}
