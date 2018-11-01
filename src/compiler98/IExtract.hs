-- | Needs 'IdSupply' badly!

module IExtract
  ( countArrows, defFixity, defFixFun, fixFun, fixOne, freeType
  , iextractClass
  , iextractData, iextractDataPrim, iextractInstance, iextractType
  , iextractVarsType
  , addPreludeTupleInstances
  , needFixity, tvrPosTids, tvPosTids, tvTids
    -- re-exported from ImportState
  , getNeedIS,putModidIS
  ) where

import List
import TokenId(TokenId(..),t_Arrow,ensureM,dropM,forceM,rpsPrelude
		,tEq,tOrd,tBounded,tRead,tShow,visible,tUnknown,tunknown)
import State
import IdKind
import Util.Extra
import qualified Data.Map as Map
import qualified Data.Set as Set
import SysDeps(PackedString,packString)
import NT
import Syntax hiding (TokenId)
import ImportState hiding (TokenId)
import Id
import Maybe
import Error

--import PrettyLib      -- debugging output only
--import PrettySyntax   -- debugging output only


-- The spike doesn't disappear if rt' is forced, instead memory usage increases!
-- ===========================
needFixity :: [(InfixClass TokenId, Int, [FixId TokenId])] -> ImportState -> ImportState
needFixity inf (ImportState visible unique orpsl rpsl needI rt st
                            insts fixity errors)  =
  case foldr (fixOne orpsl) (Map.empty,[]) inf of
                         -- fixity only at the beginning of interface file
    (fixAT,err) ->
         ImportState visible unique orpsl rpsl needI rt st
                     insts (fixFun fixAT defFixFun) (err++errors)


fixFun :: Map.Map TokenId (InfixClass TokenId,Int)
          -> (TokenId -> (InfixClass TokenId,Int))
          -> (TokenId -> (InfixClass TokenId,Int))
fixFun fixAT f key =
  case Map.lookup key fixAT of
    Just fix -> fix
    Nothing  -> f key

defFixFun :: t -> (InfixClass a, Int)
defFixFun key = defFixity
defFixity :: (InfixClass a, Int)
defFixity = (InfixDef,9::Int)


fixOne :: (Show b, Eq b) =>
          PackedString
          -> (InfixClass TokenId, b, [FixId TokenId])
          -> (Map.Map TokenId (InfixClass TokenId, b), [Error])
          -> (Map.Map TokenId (InfixClass TokenId, b), [Error])
fixOne rps (InfixPre var,level,[fixid]) fix_err@(fix,err) =
                                          -- ensureM also done in fixFun
  let fl = (InfixPre (ensureM rps var),level)
  in fixAdd fl (fixTid rps fixid) fix_err
fixOne rps (fixClass,level,ids) fixity_err =
  let fl = (fixClass,level)
  in foldr  (fixAdd fl) fixity_err (map (fixTid rps) ids)

fixTid :: PackedString -> FixId TokenId -> TokenId
fixTid rps (FixCon _ tid) = ensureM rps tid
fixTid rps (FixVar _ tid) = ensureM rps tid

fixAdd :: (Ord k, Eq a, Show k, Show a) =>
          a -> k -> (Map.Map k a, [Error]) -> (Map.Map k a, [Error])
fixAdd fl tid fix_err@(fix,err) =
 case Map.lookup tid fix of
   Nothing -> (Map.insert tid fl fix,err)
   Just fl' ->
        if fl' == fl 
        then fix_err
        else (fix,(ErrorConflictFixities (show tid) (show fl) (show fl') :err))

--------------------  End duplication

---- ===========================

{- Return Id for given token of given kind. If no Id exists then 
-- create new Id -}
transTid :: Pos -> IdKind -> TokenId 
         -> a -> ImportState -> (Id,ImportState)

transTid pos kind tid down  
  importState@(ImportState { uniqueIS = unique,
                             sectionRpsIS = rps,
                             needIS = needI,
                             symtabIS = st }) =
  let key = (ensureM rps tid,kind)
  in  case Map.lookup key st of
        Just info -> (uniqueI info,importState)
        Nothing -> (addNeedIS (fst key) >>>
                    addSymbolIS key (InfoUsed unique [(kind,tid,rps,pos)]) >>>
                    getUniqueId) down importState

{- | Test if Id for given token of given kind exists -}
existTid :: IdKind -> TokenId -> a -> ImportState -> (Bool,ImportState)
existTid kind tid _  
  importState@(ImportState visible unique orps rps needI rt st insts 
                 fixity errors) =
  let key =  (ensureM rps tid,kind)
  in  case Map.lookup key st of 
        Just info -> (True,importState)
        Nothing   -> (False,importState)
          

--  return nothing

importData :: (TokenId->Bool) -> TokenId -> IE -> NewType -> DataKind 
           -> State0 a ImportState ImportState

importData q tid expIn nt dk _
           importState@(ImportState visible unique orps rps needI rt st
                                    insts fixity errors)
  =
  let realtid = ensureM rps tid
      key = (realtid,TCon)
      exp = if visible then expIn else IEnone
  in (case Map.lookup key st of
       Just (InfoUsed u _) ->
         (addRT_IS visible q u tid orps TCon >>>
          addSymbolIS key (InfoData u realtid exp nt dk))

       Just info@(InfoData u tid exp' nt (Data unboxed []))
         | case dk of {Data _ (_:_) -> True; _ -> False} ->
           (addRT_IS visible q u tid orps TCon >>>
            addSymbolIS key (InfoData u tid (combIE exp exp') nt dk))

       Just info@(InfoData u tid exp' nt (DataNewType unboxed []))
         | case dk of {DataNewType _ (_:_) -> True; _ -> False} ->
           (addRT_IS visible q u tid orps TCon >>>
            addSymbolIS key (InfoData u tid (combIE exp exp') nt dk))

       Just info@(InfoData u' tid' exp' nt' dk') ->
         (addRT_IS' visible q u' tid orps TCon >>>
          addSymbolIS key (InfoData u' tid' (combIE exp exp') nt' dk'))

       _ -> 
         (getUniqueId >>>= \ uid ->
          addRT_IS visible q uid tid orps TCon >>>
          addSymbolIS key (InfoData uid realtid exp nt dk))
     ) () importState


importClass :: (TokenId->Bool) -> TokenId -> IE -> NewType -> [Id] 
            -> State0 a ImportState ImportState

importClass q tid expIn nt ms _
        importState@(ImportState visible unique orps rps needI rt st
                                 insts fixity errors)
  =
  let realtid = ensureM rps tid
      key = (realtid,TClass)
      exp = if visible then expIn else IEnone
  in (case Map.lookup key st of
       Just (InfoUsed u _) ->
         (addRT_IS visible q u tid orps TClass >>>
          addSymbolIS key (InfoClass u realtid exp nt ms [] Map.empty))

       Just (InfoUsedClass u _ inst) ->
         (addRT_IS visible q u tid orps TClass >>>
          addSymbolIS key (InfoClass u realtid exp nt ms [] inst))

       Just (InfoClass u tid' exp' nt' [] [] inst') ->
                 -- might be due to interface files
         (addRT_IS visible q u tid orps TClass >>>
          addSymbolIS key (InfoClass u realtid (combIE exp exp') nt ms [] inst'))

       Just info ->
         (addRT_IS' visible q (uniqueI info) tid orps TClass)

       _ ->
         (addRT_IS visible q unique tid orps TClass >>>
          getUniqueId >>>= \ uid ->
          addSymbolIS key (InfoClass uid realtid exp nt ms [] Map.empty))
       ) () importState

importField :: (TokenId->Bool)
            -> [Id] -- ^ free type variables 
            -> [(Id,Id)]  -- ^ type context (predicates)
            -> Id  -- ^ type constructor 
            -> Id  -- ^ data constructor
            -> ((Maybe (a,TokenId,b),NT),Int) 
            -> State0 c ImportState ImportState

importField q free ctxs bt c ((Nothing,_),nt) down importState = importState
importField q free ctxs bt c ((Just (p,tid,_),nt),i) down 
  importState@(ImportState visible unique orps rps needI rt st insts 
                 fixity errors) =
  let realtid = ensureM rps tid
      key = (realtid,Field)
  in case Map.lookup key st of
       Just (InfoUsed u _) -> -- Selectors can never be InfoUsed
         (getUniqueId >>>= \ uid ->
          addRT_IS visible q uid tid orps Var >>>
          addRT_IS visible q u tid orps Field >>>
          addSymbolIS key           (InfoField u    realtid IEnone [(c,i)] bt uid) >>>
          addSymbolIS (realtid,Var) (InfoVar unique realtid IEnone (fixity realtid)
                                      (NewType free [] ctxs [mkNTcons bt (map mkNTvar free),nt])
                                      (Just 1)))
         () importState

       Just (InfoField u' realtid' ie cis' bt' sel') ->
         let rt' =  rt
         in  seq rt' ( -- \$ here doesn't work, there is an error somwhere !!!
           if (c,i) `elem` cis'
           then (ImportState visible unique orps rps needI rt' st insts 
                  fixity errors)  -- unchanged, just a bit strict
           else (ImportState visible unique orps rps needI rt' 
                  (Map.insertWith fstOf key -- update field name 
                    (InfoField u' realtid' ie ((c,i):cis') bt' sel') st) 
                    insts fixity errors))
       _ -> 
         (getUniqueId >>>= \ fieldId ->
          getUniqueId >>>= \ varId ->
          addRT_IS visible q fieldId tid orps Field >>>
          addRT_IS visible q varId tid orps Var >>>
          addSymbolIS key           (InfoField fieldId realtid IEnone [(c,i)]  bt varId) >>> 
          addSymbolIS (realtid,Var) (InfoVar   varId   realtid IEnone (fixity realtid)
                                      (NewType free [] ctxs [mkNTcons bt (map mkNTvar free),nt]) 
                                      (Just 1)))
         () importState


importVar :: (TokenId->Bool) -> TokenId -> IE -> NewType -> Maybe Int 
          -> State0 a ImportState ImportState

importVar q tid exp nt annots _
          importState@(ImportState visible unique orps rps needI rt st
                                   insts fixity errors) =
  let realtid = ensureM rps tid
      key = (realtid,Var)
      fix = fixity realtid
  in case Map.lookup key st of
       Just (InfoUsed u _) ->
         let rt' = addRT visible q u tid orps Var rt
         in addFixityNeed key fix
                         (ImportState visible unique orps rps needI rt'
                                      (Map.insertWith combInfo key
                                             (InfoVar u realtid exp fix nt
                                                      annots) st)
                                      insts fixity errors)
       Just info ->
         let rt' = addRT visible q (uniqueI info) tid orps Var rt
         in  seq rt' (ImportState visible unique orps rps needI rt' st
                                  insts fixity errors)
       _ ->  
         let rt' = addRT visible q unique tid orps Var rt
         in addFixityNeed key fix
                         (ImportState visible (succ unique) orps rps needI rt'
                                      (Map.insertWith combInfo key
                                             (InfoVar unique realtid exp
                                                      fix nt annots) st)
                                      insts fixity errors)


addFixityNeed :: (TokenId, IdKind) -> (InfixClass TokenId, b) -> ImportState -> ImportState
addFixityNeed key (InfixPre tid,_)
              importState@(ImportState visible unique orps rps needI rt st
                                       insts fixity errors) =
  case Map.lookup key rt of  -- We use this identifier
    Just u ->
      let irealtid = ensureM rps tid
          ikey = (irealtid,snd key)
      in
        case Map.lookup ikey rt of -- so ensure that its replacement also exists,
                                 -- and force the need for it, nice if we had
                                 -- the real position but we don't.
          Just u  -> ImportState visible unique orps rps (Set.insert (fst ikey) needI)
                                 rt st insts fixity errors
          Nothing -> ImportState visible unique orps rps (Set.insert (fst ikey) needI)
                                 (Map.insertWith fstOf ikey (Left [noPos]) rt)
                                 st insts fixity errors
    Nothing -> importState
addFixityNeed key inf importState = importState

--- returns unique int

importConstr :: (TokenId -> Bool)
                -> TokenId -> NewType -> [Maybe Id] -> Id
                -> IE
                -> State t ImportState Id ImportState
importConstr q tid nt fields bt rex _
             importState@(ImportState visible unique orps rps needI rt st
                                      insts fixity errors) =
  let realtid = ensureM rps tid
      key = (realtid,Con)
  in (case Map.lookup key st of
       Just (InfoUsed u _) ->
         addRT_IS visible q u tid orps Con >>>
         addSymbolIS key (InfoConstr u realtid IEnone (fixity realtid)
                                   nt fields bt) >>>
         unitS u

       Just info ->
         let u = uniqueI info
         in addRT_IS' visible q u tid orps Con >>>
            unitS u

       _ -> 
         getUniqueId >>>= \ uid ->
         addRT_IS visible q uid tid orps Con >>>
         addSymbolIS key (InfoConstr uid realtid rex
                                      (fixity realtid) nt
                                      fields bt) >>>
         unitS uid
     ) () importState

importMethod :: (TokenId -> Bool)
                -> TokenId -> NewType -> IE -> Maybe Int
                -> Id -> t -> ImportState
                -> (Id, ImportState)
importMethod q tid nt rex annots bt _
             importState@(ImportState visible unique orps rps needI rt st
                                      insts fixity errors) =
  let realtid = ensureM rps tid
      key = (realtid,Method)
      fix = fixity realtid
  in case Map.lookup key st of
       Just (InfoUsed u _) ->
         let rt' = addRT visible q u tid orps Method rt
         in (u,addFixityNeed key fix
                             (ImportState visible unique orps rps needI rt'
                                          (Map.insertWith combInfo key
                                                 (InfoMethod u realtid IEnone
                                                             fix nt annots bt) st)
                                          insts fixity errors))
       Just info ->
         let u = uniqueI info
             rt' = addRT visible q u tid orps Method rt
         in  seq rt' (u,ImportState visible unique orps rps needI rt' st
                                    insts fixity errors)
       _ ->
         let rt' = addRT visible q unique tid orps Method rt
         in (unique,addFixityNeed key fix
                                  (ImportState visible (succ unique) orps rps
                                               needI rt'
                                               (Map.insertWith combInfo key
                                                      (InfoMethod unique realtid
                                                                  rex fix nt
                                                                  annots bt) st)
                                               insts fixity errors))

importInstance :: Show a =>
                  a -> TokenId -> Id -> [Id] -> [(Id, Id)] -> t -> ImportState -> ImportState
importInstance mod cls con free ctxs _
               importState@(ImportState visible unique orps rps needI rt st
                                        insts fixity errors) =
  let realtid = ensureM rps cls
      key = (realtid,TClass)
      mi = (packString . reverse . show) mod
  in  case Map.lookup key st of
        Just info -> 
           case Map.insertWith fstOf key (addInstanceI con mi free ctxs info) st of
              st' -> seq st' (ImportState visible unique orps rps needI rt st'
                                          insts fixity errors)

storeInstance :: [(TokenId, Id)] -> TokenId -> TokenId -> TokenId
                 -> [Context TokenId] -> t
                 -> ImportState -> ImportState
storeInstance al mod cls con ctxs _
              importState@(ImportState visible unique orps rps needI rt st
                                       insts fixity errors) =
--strace ("storeInstance:\n  "++prettyPrintSimple 70 ppContexts ctxs
--              ++"\n  "++show cls
--              ++"\n  "++show con) $
  let realcls = ensureM rps cls
      realcon = ensureM rps con
      same (_,realcls',realcon',_,_) = realcls == realcls' && realcon == realcon'
      trans (Context pos cid [(vpos,vid)]) =
        case lookup vid al of
          Just tvar -> Right (pos,ensureM rps cid,tvar)
          Nothing -> Left $ ErrorUnboundTypeInstance (strPos vpos) (show vid)
  in if any same insts 
     then importState
     else
       let qctxs = map trans ctxs
       in if any isLeft qctxs
          then ImportState visible unique orps rps needI rt st insts fixity
                           ((map dropLeft . filter isLeft ) qctxs ++ errors)
          else ImportState visible unique orps rps needI rt st
                           ( (mod,realcls,realcon,map snd al,map dropRight qctxs)
                             :insts)
                           fixity errors

checkInstanceCls :: TokenId -> t -> ImportState
                 -> ([(TokenId, TokenId, TokenId, [Id], [(Pos, TokenId, Id)])], ImportState)
checkInstanceCls tid down
                 importState@(ImportState visible unique orps rps needI rt st
                                          insts fixity errors) =
  case partition pred insts of
   (used,unused) -> (used,ImportState visible unique orps rps needI rt st
                                      unused fixity errors)
 where  
  realcls = ensureM rps tid
  pred (mod,cls,con,free,ctxs) = (cls == realcls) && isJust (Map.lookup (con,TCon) st)


checkInstanceCon :: TokenId -> t -> ImportState
                 -> ([(TokenId, TokenId, TokenId, [Id], [(Pos, TokenId, Id)])], ImportState)
checkInstanceCon tid down
                 importState@(ImportState visible unique orps rps needI rt st
                                          insts fixity errors) =
  case partition pred insts of
   (used,unused) -> (used,ImportState visible unique orps rps needI rt st
                                      unused fixity errors)
 where  
  realcon = ensureM rps tid
  pred (mod,cls,con,free,ctxs) = (con == realcon)
  -- if we need the type constructor, then we might need this instance
  --  && isJust (Map.lookup (cls,TClass) st)


-- | Pseudo-monadic variant of 'addRT'
addRT_IS :: Bool            -- ^ interface exports it?
         -> (TokenId->Bool) -- ^ must it be imported qualified?
         -> Id
         -> TokenId
         -> PackedString
         -> IdKind
         -> State0 a ImportState ImportState

addRT_IS iexports mustQualify u tid rps kind _ is =
    is { renameIS = addRT iexports mustQualify u tid rps kind (renameIS is) }

-- | Strict version of 'addRT_IS'
addRT_IS' :: Bool            -- ^ interface exports it?
          -> (TokenId->Bool) -- ^ must it be imported qualified?
          -> Id
          -> TokenId
          -> PackedString
          -> IdKind
          -> State0 a ImportState ImportState
addRT_IS' iexports mustQualify u tid rps kind _ is =
    let rt = addRT iexports mustQualify u tid rps kind (renameIS is)
    in rt `seq` is { renameIS = rt }

-- | Add (or not) an imported identifier to the renaming table.
addRT :: Bool                   -- ^ interface exports it?
      -> (TokenId->Bool)        -- ^ must it be imported qualified?
      -> b
      -> TokenId
      -> PackedString
      -> IdKind
      -> Map.Map (TokenId,IdKind) (Either c [b])
      -> Map.Map (TokenId,IdKind) (Either c [b])

addRT False _          _ tid _   _    rt = rt
addRT True mustQualify u tid rps kind rt
  | mustQualify tid = qrt
  | otherwise       = Map.update (Just . combRT u) (dropM tid,kind) qrt
  where
    qrt = Map.update (Just . combRT u) (forceM rps tid,kind) rt

    combRT u (Left _) = Right [u]
    combRT u (Right us) =  Right (u:us)


---- ==================================================

iextractType :: IE -> (Int,Bool) -> (TokenId->Bool) -> a -> TokenId 
             -> [(Pos,TokenId)] -> Type TokenId 
             -> State0 () ImportState ImportState

iextractType expInfo (depth,unboxed) q pos tid tvs typ = 
  let al = tvPosTids tvs
  in transTypes al (map snd al) [] [typ] >>>= \ nt ->
     importData q tid expInfo nt (DataTypeSynonym unboxed depth)


{- |
   Extend importState by a new data type;
   the information about the data type comes from an interface file
-}
iextractData :: IE -> (TokenId->Bool) -> Either Bool Bool -> [Context TokenId] 
             -> Pos -> TokenId -> [(Pos,TokenId)] -> [Constr TokenId] 
             -> [TokenId] -> State0 () ImportState ImportState

iextractData  expInfo q attr ctxs pos tid tvs constrs needs =
  let al = tvPosTids tvs 
      free = map snd al
  in transTypes al free ctxs (map (uncurry TypeVar) tvs
                              ++ [TypeCons pos tid (map (uncurry TypeVar) tvs)])
     >>>= \nt@(NewType free [] ctxs nts) ->
     mapS (transConstr q al free ctxs needs (last nts)) constrs >>>= \cs ->
     importData q tid -- expInfo nt 
       ((case attr of
           Left _ -> patchIE
           _      -> id) expInfo)
       nt
       (case attr of
          Right unboxed -> Data unboxed cs
          Left  unboxed -> DataNewType unboxed cs) >>>
     checkInstanceCon tid >>>= \ newinsts ->
     mapS0 newInstance newinsts


iextractDataPrim :: IE -> (TokenId->Bool) -> Pos -> TokenId -> Int 
                 -> a -> ImportState -> ImportState

iextractDataPrim expInfo q pos tid size =
     transTid pos TCon tid >>>= \ i ->
     importData q tid expInfo (NewType [] [] [] [mkNTcons i []])
                              (DataPrimitive size) >>>
     checkInstanceCon tid >>>= \ newinsts ->
     mapS0 newInstance newinsts


iextractClass :: IE -> (TokenId->Bool) -> Pos -> [Context TokenId] 
              -> TokenId -> TokenId 
              -> [([((a,TokenId),b)],[Context TokenId],Type TokenId)] 
              -> [TokenId] -> () -> ImportState -> ImportState

iextractClass  expInfo q pos ctxs tid tvar methods needs =
  let al = tvTids [tvar] 
  in transTypes al (map snd al) ctxs [TypeCons pos tid [TypeVar pos tvar]]
     >>>= \ nt -> 
     transContext al (Context pos tid [(pos,tvar)]) >>>= \ctx -> 
     mapS (transMethod q tvar ctx needs) methods >>>= \ms ->
     importClass q tid expInfo nt (concat ms) >>>
     checkInstanceCls tid >>>= \ newinsts ->
     mapS0 newInstance newinsts


newInstance :: (TokenId,TokenId,TokenId,[Id],[(Pos,TokenId,Id)]) 
            -> a -> ImportState -> ImportState

newInstance (mod,realcls,realcon,free,ctxs) =
  mapS (\(pos,cls,tvar)-> transTid pos TClass cls >>>= \cls-> unitS (cls,tvar))
       ctxs >>>= \ ctxs ->
  transTid noPos TCon realcon >>>= \ con ->
  transTid noPos TClass realcls >>>= \ _ ->  -- Only to ensure class exists!!
  importInstance mod realcls con free ctxs


iextractInstance :: TokenId -> [Context TokenId] -> a -> TokenId -> Type TokenId 
                 -> () -> ImportState -> ImportState

-- iextractInstance ctxs pos cls typ@(TypeCons _ con _) =
iextractInstance mod ctxs pos cls typ =
  let con = case typ of (TypeCons _ con _) -> con; (TypeVar _ con) -> con
  in
  existTid TClass cls >>>= \qcls ->
  existTid TCon con >>>= \qcon ->
  let al = tvTids (snub (freeType typ))
  in 
    if qcls -- \|\| qcon -- If both type class and data type exist,
                       -- then add the instance to the type class
    then
      transTypes al (map snd al) ctxs [typ]
      >>>= \nt->
      case nt of
        (NewType free [] ctxs [NTcons c _ nts]) ->
          importInstance mod cls c free {- (map (\ (NTvar v _)->v) nts) -} ctxs
        (NewType free [] ctxs [NTvar v _]) ->
          importInstance mod cls v free ctxs
    else
      storeInstance al mod cls con ctxs -- otherwise save the instance for later

-- | @addPreludeTupleInstances@ is an efficiency hack.
-- It takes a long time to parse the Prelude.hi file, and adding large
-- numbers of tuple instances to the .hi file increases compile-times
-- by 30% or more.
-- Omitting them from the .hi file and adding them by hand here, therefore
-- gives a big time saving.
addPreludeTupleInstances :: () -> ImportState -> ImportState
addPreludeTupleInstances =
  let mkCtx c v = Context noPos c [(noPos,v)]
      tuple cls n = let vars = map (visible.(:[])) (take n ['a'..]) in
                    storeInstance (tvTids vars)
                                        (Visible rpsPrelude)
                                        cls
                                        (TupleId n)
                                        (map (mkCtx cls) vars)
  in
    mapS0 (tuple tEq) [2..15] >>>
    mapS0 (tuple tOrd) [2..15] >>>
    mapS0 (tuple tBounded) [2..15] >>>
    mapS0 (tuple tRead) [2..15] >>>
    mapS0 (tuple tShow) [2..15]


---

iextractVarsType :: ((TokenId -> Bool) -> TokenId -> IdKind -> IE)
                    -> (TokenId -> Bool)
                    -> [((a, TokenId), Maybe Int)]
                    -> [Context TokenId]
                    -> Type TokenId
                    -> State0 () ImportState ImportState
iextractVarsType  expFun q postidanots ctxs typ =
   let al = tvTids (snub (freeType typ))
   in transTypes al (map snd al) ctxs [typ] >>>= \ nt ->
      mapS0 (\((pos,tid),annots) ->
               importVar q tid (expFun q tid Var) nt annots)
            postidanots

---

transMethod :: (TokenId->Bool) -> TokenId -> (Id,Id) -> [TokenId]
            -> ([((b,TokenId),c)],[Context TokenId],Type TokenId) 
            -> () -> ImportState -> ([Id],ImportState)

transMethod q tvar ctx@(c,tv) needed (postidanots,ctxs,typ) =
   let al = tvTids (snub (tvar:freeType typ))
       arity = countArrows typ
   in mapS (transContext al) ctxs >>>= \ ctxs ->
      transType al typ >>>= \ typ ->
      let free = map snd al
          nt = NewType free [] ctxs [anyNT [head free] typ]
                               -- The class context is not included in the type
      in seq arity  -- \$ here doesn't work, there is an error somwhere !!!
             (mapS (\((pos,tid),annot) ->
                       let (tid',rex) = if tid `elem` needed then (tid,IEsel)
                                        else (tunknown,IEnone)
                       in importMethod q tid' nt rex (Just arity) c)
                   postidanots)

---


transConstr :: (TokenId->Bool) -> [(TokenId,Id)] -> [Id] -> [(Id,Id)] 
            -> [TokenId] -> NT -> Constr TokenId 
            -> () -> ImportState -> (Id,ImportState)

transConstr q al free ctxs needed resType@(NTcons bt _ _) (Constr pos cid types) =
  mapS (transFieldType al) types >>>= \ntss ->
  let all = concat ntss
      nts = map snd all
      ifs = map ((\v-> case v of Just (p,tid,i) -> Just i; _ -> Nothing) . fst)
                all
      (cid',rex) = if cid `elem` needed then (cid, IEsel)
                                        else (tUnknown bt, IEnone)
  in
  importConstr q cid' (NewType free [] ctxs (nts++[resType])) ifs bt rex
  >>>= \c->
  mapS0 (importField q free ctxs bt c) (zip all [ 1:: Int ..]) >>>
  unitS c
transConstr q al free ctxs needed resType@(NTcons bt _ _) 
                                  (ConstrCtx forAll ectxs' pos cid types) = 
  let -- ce = map ( \( Context _ _ [(_,v)]) -> v) ectxs'
      e =  map snd forAll 
-- filter (`notElem` (map fst al)) $ snub $ (ce ++) $ concat
--                                                $ map (freeType . snd) types
      es = zip e [toEnum (1 + length al) .. ]
      rex = if cid `elem` needed then IEsel else IEnone
  in
  mapS (transFieldType (es++al)) types >>>= \ntss ->
  let all = concat ntss
      nts = map snd all
      ifs = map ((\v-> case v of Just (p,tid,i) -> Just i; _ -> Nothing) . fst)
                all
      exist = map snd es
  in
  mapS (transContext (es++al)) ectxs' >>>= \ ectxs ->
  importConstr q cid (NewType (map snd al ++ exist) exist ctxs 
                              (map (\(c,v) -> NTcontext c v) ectxs
                               ++ nts ++ [resType]))
                     ifs bt rex
    >>>= \ c ->
  mapS0 (importField q free ctxs bt c) (zip all [ 1:: Int ..]) >>>
  unitS c

---

transFieldType :: [(TokenId,Id)] -> (Maybe [(Pos,TokenId)],Type TokenId) 
               -> () -> ImportState 
               -> ([(Maybe (Pos,TokenId,Id),NT)],ImportState)

transFieldType al (Nothing,typ) =
  transType al typ >>>= \ typ -> unitS [(Nothing,typ)]
transFieldType al (Just posidents,typ) =
  transType al typ >>>= \ typ ->
  mapS ( \ (p,v) -> transTid p Field v >>>= \ i -> 
                    unitS (Just (p,v,i),typ))  posidents


{- | transform a syntactic type with context into an internal NewType -}
transTypes :: [(TokenId,Id)] -> [Id] -> [Context TokenId] -> [Type TokenId] 
              -> () -> ImportState -> (NewType,ImportState)

transTypes al free ctxs ts =
  unitS (NewType free []) =>>> 
  mapS (transContext al) ctxs 
  =>>> mapS (transType al) ts


{- | transform a syntactic type variable ('TokenId') into an internal type variable
-- ('NT'), using the given mapping
-}
transTVar :: Pos -> [(TokenId,Id)] -> TokenId 
          -> () -> ImportState -> (NT,ImportState)

transTVar pos al v =
  unitS mkNTvar =>>> uniqueTVar pos al v        -- no KIND inference?


{- | transform syntactic type variable ('TokenId') into internal type variable
-- ('Id'), using the given mapping
-}
uniqueTVar :: Pos -> [(TokenId,Id)] -> TokenId 
           -> () -> ImportState -> (Id,ImportState)

uniqueTVar pos al v =
  case lookup v al of
    Just v -> unitS v
    Nothing -> importError 
                 (ErrorRaw $ "Unbound type variable " ++ show v ++ " at " ++ strPos pos) 
                 (toEnum 0::Id)


{- | transform syntactic context into internal context -}
transContext :: [(TokenId,Id)] -> Context TokenId 
             -> () -> ImportState -> ((Id,Id),ImportState)
transContext al (Context pos cid [(vpos,vid)]) = 
  unitS pair =>>> transTid pos TClass cid =>>> uniqueTVar vpos al vid


countArrows :: Type TokenId -> Int
countArrows (TypeCons pos tid [a,f]) =
  if tid == t_Arrow 
  then 1 + countArrows f
  else 0
countArrows _ = 0::Int


{- | transform a syntactic type into an internal NT type -}
transType :: [(TokenId,Id)] -> Type TokenId 
          -> () -> ImportState -> (NT,ImportState)

transType free (TypeApp  t1 t2) = 
  unitS NTapp =>>> transType free t1 =>>> transType free t2
transType free (TypeCons  pos hs types) = 
  unitS mkNTcons =>>> transTid pos TCon hs =>>> mapS (transType free) types
transType free (TypeVar   pos v)    = transTVar pos free v
transType free (TypeStrict pos typ) = unitS NTstrict =>>>  transType free typ

-----

{- |
   Number the identifiers, beginning with 1.;
   return the renaming mapping and the renamed list 
-}

tvrPosTids :: [(Pos,TokenId)] -> ([(TokenId,Id)], [(Pos, Id)])
tvrPosTids tv = (tvTids tokens, zip positions [toEnum 1..])
  where
  (positions, tokens) = unzip tv


{- | Number the identifiers, beginning with 1. First drop positions. -}
tvPosTids :: [(Pos,TokenId)] -> [(TokenId,Id)]
tvPosTids tv = tvTids (map snd tv)


{- | Number the identifiers, beginning with 1. -}
tvTids :: [TokenId] -> [(TokenId,Id)]
tvTids tv = zip tv [toEnum 1..] 

-----

{- | Return a list of type variables occurring in the type. -}
freeType :: Type a -> [a]
freeType (TypeApp  t1 t2) =  freeType t1 ++ freeType t2
freeType (TypeCons  pos hs types) = concatMap freeType types
freeType (TypeVar   pos v)        = [v]
freeType (TypeStrict pos typ) = freeType typ


----- ==================================


