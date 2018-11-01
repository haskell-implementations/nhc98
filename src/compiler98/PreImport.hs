{- ---------------------------------------------------------------------------
-- imported by Main and Need
-}
module PreImport (HideDeclIds,qualRename,preImport) where

import List(nub,intersect,(\\))
import TokenId(TokenId(..),tPrelude,tNHCInternal,tYHCDynamic
                ,t_Arrow,ensureM,forceM,dropM
                ,rpsPrelude,t_List,isTidCon
                ,tRatioMod,visRatio,visRational,visRatioCon)
import SysDeps(PackedString,packString)
import Syntax hiding (TokenId)
import IdKind
import qualified Data.Set as Set
import qualified Data.Map as Map
import Util.Extra
import Flags
import IExtract
import Info hiding (TokenId)
import PreImp(HideDeclIds,HideDeclType,HideDeclData,HideDeclDataPrim
             ,HideDeclClass,HideDeclInstance,HideDeclVarsType)
import Maybe
import Building(Compiler(..),compiler)


-- | Internal, fully coalesced import declaration
type IntImpDecl = (TokenId {-module name-}, ImportedNamesInScope)


-- | There are two sets of names in scope, the NQ-set and the Q-set.
-- For every imported module, an individual import decl can enlarge
-- either both sets together, or just the Q-set.  When the two sets are
-- identical by construction, our representation takes a short-cut and
-- stores only one set, calling it NQ.  When the NQ-set is empty, we store
-- only the Q-set.  When the two sets are different and non-empty, we
-- store both, but the Q-set is always equal to or larger than the NQ-set.
data ImportedNamesInScope =
      NQ NameSetSpec    -- ^represents  Q-set  = NQ-set.
    | Q  NameSetSpec    -- represents  NQ-set = empty.
    | Both NameSetSpec{-notQ-} NameSetSpec{-Q-}
                        -- invariant:  Q-set >= NQ-set.

-- | The representation of a name-set is a mixture of intension and extension.
-- [@Deny []@]      means everything found in the exporting module
-- [@Deny xs@]      means everything excluding the named entities
-- [@Allow xs@]     means only the named entities
-- [@Allow []@]     means no entities, probably a very rare specification
-- Hence,   @Deny []  >  Deny xs  >  Allow xs  >  Allow []@
data NameSetSpec =
      Allow [(TokenId,IE)]
    | Deny [(TokenId,IE)]


-- | Assuming that import decls have been converted to nameset specifications,
-- the 'combine' function joins two given specifications.  Imports are
-- cumulative, so a nameset can only get larger.

combine :: NameSetSpec -> NameSetSpec -> NameSetSpec
combine (Deny [])  _          = Deny []
combine _          (Deny [])  = Deny []
combine (Allow xs) (Deny ys)  = Deny (ys\\xs)
combine (Allow xs) (Allow ys) = Allow (nub (xs++ys))
combine (Deny xs)  (Deny ys)  = Deny (intersect xs ys)
combine (Deny xs)  (Allow ys) = Deny (xs\\ys)


-- | The rules for combining different imports of the same module are complex.
-- The second argument to the 'joinNames' function is the accumulated
-- state of all imports so far, and can thus have the Both constructor,
-- representing differing NQ- and Q-sets.  The first argument is the
-- additional import decl, and can enlarge either both sets (NQ) or just the
-- Q-set, but cannot enlarge the two sets separately (no Both constructor).

joinNames :: ImportedNamesInScope -> ImportedNamesInScope -> ImportedNamesInScope
joinNames (NQ new)        (NQ old)    = NQ (combine old new)
joinNames (Q new)         (Q old)     = Q  (combine old new)
joinNames (Q q)           (NQ nq)     = joinNames (NQ nq) (Q q)

joinNames (NQ (Deny []))  (Q old)     = NQ   (Deny [])
joinNames (NQ new)        (Q old)     = Both new (combine old new)

joinNames (NQ (Deny []))  (Both nq q) = NQ   (Deny [])
joinNames (NQ new)        (Both nq q) = Both (combine nq new) (combine q new)
joinNames (Q new)         (Both nq q) = Both nq (combine q new)


-- | Finally, we need a lookup function that can tell us whether a name
-- is in the permissible set of names specified by the import decls.

nameInScope :: ImportedNamesInScope -> TokenId -> Bool
nameInScope (NQ nameset) tid = tid `inScope` nameset
nameInScope (Q nameset)  tid = tid `inScope` nameset
nameInScope (Both nq q)  tid = (tid `inScope` nq) || (tid `inScope` q)

inScope :: TokenId -> NameSetSpec -> Bool
inScope tid (Deny [])  = True
inScope tid (Deny xs)  = not (tid `elem` (map fst xs))
inScope tid (Allow xs) =     (tid `elem` (map fst xs))

-- | 'mustQualify' assumes a separate test for inclusion in the permissible names
mustQualify :: ImportedNamesInScope -> TokenId -> Bool
mustQualify (NQ nameset) tid = False
mustQualify (Q nameset)  tid = tid `inScope` nameset
mustQualify (Both nq q)  tid = (tid `inScope` q) && not (tid `inScope` nq)

----

qualRename :: TokenId -> [ImpDecl TokenId] -> TokenId -> [TokenId]

qualRename modid impdecls = qualRename' qTree
 where
  qualRename' t q@(Qualified t1 t2)
    | (Visible t1)==modid && t1/=rpsPrelude  = [Visible t2]
    | otherwise =
        case Map.lookup t1 t of
            Nothing -> [q]
            Just ts -> map (\t'-> Qualified t' t2) ts
  qualRename' t v = [v]

  qTree = foldr qualR Map.empty impdecls

  qualR (Import    _ _)  t = t
  qualR (ImportQ   _ _)  t = t
  qualR (ImportQas (_,Visible id) (_,Visible id') _) t = Map.insertWith (++) id' [id] t
  qualR (Importas  (_,Visible id) (_,Visible id') _) t = Map.insertWith (++) id' [id] t


---- ===================================

preImport :: Flags -> TokenId -> Set.Set TokenId
          -> Maybe [Export TokenId] -> [ImpDecl TokenId]
          -> Either String
               ((TokenId->Bool) -> TokenId -> IdKind -> IE
               ,[(PackedString
                 ,(PackedString, PackedString, Set.Set TokenId)
                    -> [[TokenId]]
                    -> Bool
                 ,HideDeclIds
                 )
                ]
               )

-- When the export list is :: Maybe [Export TokenId])
--    Nothing -> export nothing except instances
--    Just [] -> export everything
--    Just xs -> export only entities from the list xs

preImport flags mtid@(Visible mrps) need (Just expdecls) impdecls =
  let impdecls' = transImport impdecls in
  Right ( if null expdecls || (isJust . flip Map.lookup exportAT) (mtid,Modid)
          then reExportAll
          else reExportTid mrps exportAT
        , map (mkNeed need exportAT) impdecls')
  where
  exportAT = mkExportAT expdecls
preImport flags mtid@(Visible mrps) need Nothing impdecls =
  let impdecls' = transImport impdecls in
  Right (reExportTid mrps Map.empty, map (mkNeed need Map.empty) impdecls')


{-
-- transImport orders the import files (with prelude last),
-- inserts qualified import of prelude,
-- and checks that all imports are consistent
-}
transImport :: [ImpDecl TokenId]
            -> [IntImpDecl]

transImport impdecls = impdecls'
  where
  impdecls' =  (reorder [] . {-sortImport .-} traverse Map.empty False)
                (ImportQ (noPos,tNHCInternal) (Hiding [])
                :ImportQ (noPos,tRatioMod) (NoHiding
                                [EntityConClsAll noPos visRational
                                ,EntityConClsAll noPos visRatio
                                ,EntityVar noPos visRatioCon ])
                :impdecls)

  reorder p [] = p
  reorder p (m@(k,v):xs) | k==tPrelude     = reorder (m:p) xs
                         | k==tNHCInternal = reorder (m:p) xs
                         | otherwise       = m: reorder p xs

{-
  -- Place imports into order, ensure Prelude is last
  --   Why?  The order is lexicographic of the /reversed/ module name???
  --         Changed to use simpler 'reorder' above.
  sortImport impdecls =
          ( map snd
          . sortBy cmp
          . map (\(k,v)-> if k==tPrelude || k==tNHCInternal
                          then (Right k,(k,v))
                          else (Left k, (k,v)) )
          ) impdecls

    where cmp (a, _) (b, _) = case compare a b of
                                EQ -> error "Fail in PreImport.transImport\n"
                                x  -> x
-}

  traverse :: Map.Map TokenId ImportedNamesInScope
           -> Bool      -- have we found an explicit Prelude import yet?
           -> [ImpDecl TokenId]
           -> [(TokenId, ImportedNamesInScope)]

  traverse acc True  []      = Map.toList acc
  traverse acc False []      = traverse acc False [Import (noPos,tPrelude)
                                                          (Hiding [])]
  traverse acc prel (x:xs)  =
    case extractImp x of
      (tid,info) ->
        traverse (Map.insertWith joinNames tid info acc) (prel || tid==tPrelude) xs

  extractImp (ImportQ  (pos,tid) impspec) =
    (tid, Q (extractSpec impspec))
  extractImp (ImportQas (pos,tid) (apos,atid) impspec) =
    (tid, Q (extractSpec impspec))
  extractImp (Import (pos,tid) impspec) =
    (tid, NQ (extractSpec impspec))
  extractImp (Importas (pos,tid) (apos,atid) impspec) =
    (tid, NQ (extractSpec impspec))

  extractSpec (NoHiding entities) = Allow (concatMap extractImpEntity entities)
  extractSpec (Hiding entities)   = Deny  (concatMap extractImpEntity entities)

  extractImpEntity e =
    map (\e-> case e of ((tid,kind),ie) -> (tid,ie)) (extractEntity e)

{- Now obsolete  i.e. never report explicit/hiding conflicts
--checkImport :: (TokenId, ([Pos],[TokenId],ImportedNamesInScope))
--            -> [String]
--checkImport (tid,(nq,q,pos_spec)) =
--  case partition (isLeft . snd) pos_spec of
--    ([],hide)  -> []  -- Only explicit hide
--    (imp,[])   -> []  -- Only explicit imports
--    (imp,hide) ->
--      if (null . filter (not.null) . map (dropRight . snd)) hide
--      then []         -- Ok as all hidings are empty
--      else ["Conflicting imports for " ++ show tid ++
--            ", used both explicit imports (at" ++
--            (mixCommaAnd . map (strPos . fst)) imp
--            ++ ") and explicit hidings (at " ++
--            (mixCommaAnd . map (strPos . fst)) hide ++")."]
-}


{- Obsolete in H'98
--checkForMultipleImport imports =
--    case foldr prepare (initAT,[]) imports of
--      (qm,qas) ->
--      case (filter (elemM qm) qas,filter ((1/=) . length) (group qas)) of
--        (qas,qas2) ->
--          map (\tid -> "Can not rename a module to " ++ show tid ++
--              " as another module with that name is imported qualified.") qas
--          ++
--          map (\tids -> "More than one module is renamed to " ++
--                        show (head tids) ++ ".") qas2
-- where
--  prepare (tid,(nq,Just tids,pos_spec)) (qm,qas) = (addM qm tid,tids++qas)
--  prepare _ (qm,qas) = (qm,qas)
-}


------------------------------------------------------------------------------

mkExportAT :: [Export TokenId] -> Map.Map (TokenId,IdKind) IE
mkExportAT expdecls = exportAT
 where
  exportAT :: Map.Map (TokenId,IdKind) IE
  exportAT = foldr export Map.empty (concatMap preX expdecls)

  export (key,value) t = Map.insertWith combIE key value t

  preX (ExportEntity _ e) = extractEntity e
  preX (ExportModid _ tid) = [((tid,Modid),IEall)]


extractEntity :: Entity TokenId -> [((TokenId, IdKind), IE)]
extractEntity (EntityVar  pos tid)       = [((tid,Var),IEall)]
extractEntity (EntityConClsAll pos tid)
    | (tid==t_Arrow || tid==t_List)      = [((dropM tid,TCon),IEall)]
    | otherwise                          = [((tid,TC),IEall)]
extractEntity (EntityConClsSome pos tid [])
    | (tid==t_Arrow || tid==t_List)      = [((dropM tid,TCon),IEabs)]
    | otherwise                          = [((tid,TC),IEabs)]
extractEntity (EntityConClsSome pos tid ids)
    | (tid==t_Arrow || tid==t_List)      =  ((dropM tid,TCon),IEsome) : constrs
    | otherwise                          =  ((tid,TC),IEsome) : subordinates
  where constrs = map (\(pos,tid)-> ((tid,Con),IEsel)) ids
        subordinates = if any (isTidCon.snd) ids then
                            map (\(pos,tid)-> if isTidCon tid then
                                                   ((tid,Con),IEsel)
                                              else ((tid,Field),IEsel))
                                ids
                       else map (\(pos,tid)-> ((tid,Method),IEsel)) ids
                                -- could really be Method or Field...

------

reExportAll :: (TokenId->Bool) -> TokenId -> IdKind -> IE
reExportAll q tid kind = IEall

reExportTid :: PackedString -> Map.Map (TokenId,IdKind) IE
            -> (TokenId->Bool) -> TokenId -> IdKind -> IE
reExportTid modname exportAT mustBeQualified tid kind =
  case Map.lookup (dropM tid, kind) exportAT of
    Just imp | not (mustBeQualified tid) -> imp
    _  ->
      case Map.lookup (forceM modname tid, kind) exportAT of
        Just imp | mustBeQualified tid -> imp
        _                              -> IEnone

--------------------------------------


{-
-- The selectors for (hideDeclType,hideDeclData,hideDeclDataPrim,hideDeclClass,
-- hideDeclInstance,hideDeclVarsType) are defined in PreImp and used in ParseI
-}

mkNeed :: Set.Set TokenId
       -> Map.Map (TokenId,IdKind) IE
       -> IntImpDecl
       -> ( PackedString
          , (PackedString, PackedString, Set.Set TokenId)
               -> [[TokenId]] -> Bool
          , HideDeclIds
          )

mkNeed needM exportSpec (vt@(Visible modname), importSpec) =
   ( modname
   , \needI -> any (needFun needI)
   , (hideDeclType,hideDeclData,hideDeclDataPrim
     ,hideDeclClass,hideDeclInstance,hideDeclVarsType)
   )

 where

  imported = nameInScope importSpec . dropM
  q        = mustQualify importSpec . dropM

  reExport
    | reExportModule = reExportAll
    | otherwise      = reExportTid modname exportSpec

  reExportModule = isJust (Map.lookup (vt,Modid) exportSpec)

--needFun' x y =
--    let result = needFun x y in
--    strace ("needFun: "++show (fst3 x)++"/"++show (snd3 x)++" "
--            ++show y++" "++show result) $ result
  needFun (orps,rps,needI) ns@(n:_) =
        Set.member (ensureM rps n) needI
                                --  is used by other interface (real name)
                                --  (only check first name = type or class)
     || any (\n-> imported n &&
                    (  ((`Set.member` needM) . forceM orps) n
                                -- used qualified and imported (un)qualified
                    || (not (q n)) &&
                          (  ((`Set.member` needM) . dropM) n
                                -- used unqualified and imported unqualified
                          || reExportModule
                                -- reexported whether used or not
                          )
                    ))
            ns


  hideDeclType :: HideDeclType
  hideDeclType st attr (Simple pos tid tvs) typ =
    if imported tid then
      iextractType (reExport q tid TSyn) attr q pos tid tvs typ () st
    else
      iextractType IEnone attr (\_->True) pos tid tvs typ () st
                -- used by an interface file, not directly in source code

  hideDeclData :: HideDeclData
  hideDeclData st attr ctxs (Simple pos tid tvs) constrs needs der =
    if imported tid then
      iextractData (reExport q tid TCon) q attr ctxs pos
                   tid tvs constrs (safetail (concat needs)) () st
   else
      iextractData IEnone (\_->True) attr ctxs pos
                   tid tvs [] {-(if q tid then constrs else [])-} [] () st
   where safetail xs | null xs   = xs
                     | otherwise = tail xs

  hideDeclDataPrim :: HideDeclDataPrim
  hideDeclDataPrim st (pos,tid) size =
    if imported tid then
      iextractDataPrim (reExport q tid TCon) q pos tid size () st
    else
      iextractDataPrim IEnone (\_->True) pos tid size () st

  hideDeclClass :: HideDeclClass
  hideDeclClass st  ctxs (pos,tid) [tvar] methods needs =
    if imported tid then
      iextractClass (reExport q tid TClass) q pos ctxs tid
                    (snd tvar) methods (safetail (concat needs)) () st
    else
      iextractClass IEnone (\_->True) pos ctxs tid
                    (snd tvar) (if q tid then methods else []) [] () st
   where safetail xs | null xs   = xs
                     | otherwise = tail xs

  hideDeclInstance :: HideDeclInstance
  hideDeclInstance st (_,mod) ctxs (pos,cls) [typ] =
    iextractInstance mod ctxs pos cls typ () st
                -- instances are always imported, they cannot be hidden.

  hideDeclVarsType :: HideDeclVarsType
  hideDeclVarsType st postidanots ctxs typ =
                -- interface files should never depend on functions
{- we don't create interface files with more than one function/type
    case filter (isJust . lookupAT impT . dropM . snd . fst) postidanots of
      [] -> st
      postidanots ->
-}
         iextractVarsType (\q tid idkind ->
                              if imported tid && not (q tid)
                              then reExport q tid idkind
                              else IEnone)
                          q postidanots ctxs typ () st

