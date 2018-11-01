{- ---------------------------------------------------------------------------
Basic data type and functions for "need" analysis
-}
module NeedLib(initNeed,needit,NeedLib,pushNeed,popNeed,bindTid,needTid
              ,NeedTable,needQualify) where
--            ,TokenId,IdKind,Memo(..),Tree) where

import TokenId(TokenId(..))
import TokenInt(tokenAllways,tokenMain)
import IdKind
import qualified Data.Map as Map
import qualified Data.Set as Set
import Overlap (Overlap,addOverlap)
import Syntax hiding (TokenId)

-- Added in H98: the overlap table, which allows for later resolution of
-- shared module aliases.

type NeedTable = Map.Map (TokenId,IdKind) [Pos]

data NeedLib = NeedLib (TokenId -> [TokenId])   -- qualified renaming
                       (Set.Set (TokenId,IdKind))  -- tids already seen
                       [Set.Set (TokenId,IdKind)]  -- stack of memos
                    -- (Map.Map (TokenId,IdKind) (Bool,TokenId,[TokenId])) 
                    -- overlap table
                       Overlap     -- overlaps for later resolution
                       NeedTable   -- final need-table


initNeed :: Bool -> NeedTable
initNeed b = foldr (\(k,t) a -> Map.insert (t,k) [] a) Map.empty initNeed'
  where initNeed' = tokenAllways ++ (if b then tokenMain else [])

needit :: (NeedLib -> NeedLib) 
       -> (TokenId -> [TokenId]) 
       -> NeedTable
       -> (NeedTable,Overlap)

needit n r iNeed =
  case n (NeedLib r Set.empty [] Map.empty iNeed) of
    (NeedLib r m [] o n) -> (n,o)


pushNeed :: NeedLib -> NeedLib
pushNeed (NeedLib r m ms o n) = NeedLib r m (m:ms) o n

popNeed :: NeedLib -> NeedLib
popNeed  (NeedLib r _ (m:ms) o n) = NeedLib r m ms o n

-- This version of bindTid was for Haskell 1.3, before the introduction
-- of overlapping import renamings.
--
--bindTid idKind tid (NeedLib r m ms o n) = NeedLib r (addM m (r tid,idKind)) ms o n

{-
memoise identifier together with its kind
-}
bindTid :: IdKind -> TokenId -> NeedLib -> NeedLib
bindTid idKind tid (NeedLib r m ms o n) =
  NeedLib r (foldr memoise m (r tid)) ms o n
  where
  memoise :: TokenId -> Set.Set (TokenId,IdKind) -> Set.Set (TokenId,IdKind)
  memoise tid m = Set.insert (tid,idKind) m

-- This version of needTid was for Haskell 1.3, before the introduction
-- of overlapping import renamings.
--
--needTid pos idKind tid needlib@(NeedLib r m ms o n) =
--  case r tid of
--    [tid] ->
--      case lookupM m (tid,idKind) of
--      Just _ -> needlib
--      Nothing ->
--        case lookupAT n (tid,idKind) of -- mostly to evaluate n now and then :-)
--          Just _ ->  NeedLib r (addM m (tid,idKind)) ms o (updateAT n (tid,idKind) (pos:))
--          Nothing -> NeedLib r (addM m (tid,idKind)) ms o (addAT n undefined (tid,idKind) [pos])
----  tids -> 
----    case lookupM m (tids,idKind) of
----    Just _ -> needlib
----    Nothing ->
----      case lookupAT n (tids,idKind) of -- mostly to evaluate n now and then :-)
----        Just _ ->  NeedLib r (addM m (tids,idKind)) ms (updateAT n (tids,idKind) (pos:))
----        Nothing -> NeedLib r (addM m (tids,idKind)) ms (addAT n undefined (tids,idKind) [pos])

needTid :: Pos -> IdKind -> TokenId -> NeedLib -> NeedLib

needTid pos idKind tid needlib@(NeedLib r m ms o n) =
  case r tid of
    []    -> error ("qualified renaming of "++show tid++" produced no results!")
    [tid] -> record tid needlib
    tids  -> foldr record (NeedLib r m ms (addOverlap tid idKind o tids) n) tids
 where
  record tid needlib@(NeedLib r m ms o n) =
    case (tid,idKind) `Set.member` m of 
      True -> needlib
      False ->
        case Map.lookup (tid,idKind) n of -- mostly to evaluate n now and then :-)
          Just _ -> NeedLib r (Set.insert (tid,idKind) m) ms o
                              (Map.update (Just . (pos:)) (tid,idKind) n)
          Nothing -> NeedLib r (Set.insert (tid,idKind) m) ms o
                               (Map.insertWith undefined (tid,idKind) [pos] n)

-- push qualification of identifiers from instance head into method decls
needQualify :: TokenId -> Decl TokenId -> Decl TokenId
needQualify (Visible _) decl       = decl
needQualify (Qualified mod _) decl = q decl
  where
    q (DeclFun pos (Visible fun) funs) =
       DeclFun pos (Qualified mod fun) funs
    q (DeclPat (Alt (ExpVar pos (Visible fun)) rhs decls)) =
       DeclPat (Alt (ExpVar pos (Qualified mod fun)) rhs decls)
    q decl = decl
