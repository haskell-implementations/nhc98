{- ---------------------------------------------------------------------------
Handling of type substitutions.
They substitute NTs for Ids.
-}
module Type.Subst(Substitute(..),idSubst,substEnv,substCtxs,stripSubst,addSubst,applySubst,list2Subst,strace,substNT) where 

import NT(NT(..),NewType(..))
import Util.Extra(strace)
import Type.Data
import qualified Data.Map as Map
import Id(Id)
import Maybe


forceList :: [a] -> b -> b
forceList [] c = c
forceList (x:xs) c = seq x (forceList xs c)


type NTSubst = Map.Map Id NT


idSubst :: NTSubst

idSubst = Map.empty


{- |
subst does not just apply the mapping represented by the tree once,
but it applies the idempotent closure of the mapping!
substNT below only applies the mapping once.
-}

class Substitute a where
  subst :: NTSubst -> a -> a

instance Substitute NT where
  subst phi nt@(NTany v)    =
    case Map.lookup v phi of
      Just nt -> subst phi nt
      Nothing -> nt
  subst phi nt@(NTvar v _)    =
    case Map.lookup v phi of
      Just nt -> subst phi nt
      Nothing -> nt
  subst phi nt@(NTexist v _)    =
      nt
  subst phi (NTcons con k ts) =
      let ts' = map (subst phi) ts
      in forceList ts' (NTcons con k ts')
  subst phi (NTapp t1 t2) =
     let t2' = subst phi t2
     in seq t2'
        (case subst phi t1 of
          NTcons con k ts ->
            (NTcons con k (ts ++ [t2']))
          t -> NTapp t t2'
        )
  subst phi nt@(NTcontext con v) = nt

instance Substitute NewType where
  subst phi (NewType free [] ctxs ts) =
    let ts' = map (subst phi) ts
    in forceList ts' (NewType free [] ctxs ts')

instance Substitute  TypeDict where
  subst phi (TypeDict c nt ip) =
    let nt' = subst phi nt
    in seq nt' (TypeDict c nt' ip)

substEnv :: Substitute b => NTSubst -> [(a,b)] -> [(a,b)]
substEnv phi env = map ( \ (e,nt) -> (e,subst phi nt)) env

substCtxs :: Substitute a => NTSubst -> [a] -> [a]
substCtxs phi ctxs = map (subst phi) ctxs

applySubst :: NTSubst -> Id -> Maybe NT
applySubst phi tvar =
  case Map.lookup tvar phi of
    Just nt@(NTvar tvar _) -> applySubst' phi nt tvar
    Just nt@(NTany tvar) -> applySubst' phi nt tvar
    Just nt -> Just nt
    Nothing -> Nothing
 where 
   applySubst' phi nt tvar =
     case Map.lookup tvar phi of
       Just nt@(NTvar tvar _) -> applySubst' phi nt tvar
       Just nt@(NTany tvar) -> applySubst' phi nt tvar
       Just nt -> Just nt
       Nothing -> Just nt


stripSubst :: NTSubst -> Id -> NTSubst

stripSubst phi tvar = phi -- nhc98 doesn't strip substitutions


addSubst :: NTSubst -> Id -> NT -> NTSubst

addSubst phi tvar t =
   Map.insertWith (\ a b -> error ("Two mappings for " ++ show tvar ++ " : " ++ show a ++ " and " ++ show b)) tvar t phi


list2Subst :: [(Id,NT)] -> NTSubst

list2Subst xs = foldr ( \ (v,nt) phi -> addSubst phi v nt) idSubst xs


{- |
substNT only goes one step, used for (1->2),(2->1) substitutions in TypeCtx
-}

substNT :: [(Id,NT)] -> NT -> NT

substNT tv (NTany  a) = fromJust (lookup a tv)
substNT tv (NTvar  a _) = fromJust (lookup a tv)
substNT tv t@(NTexist a _) = t
substNT tv (NTstrict t) = NTstrict (substNT tv t)
substNT tv (NTapp t1 t2) =  NTapp (substNT tv t1) (substNT tv t2)
substNT tv (NTcons a k tas) =  NTcons a k (map (substNT tv) tas)
