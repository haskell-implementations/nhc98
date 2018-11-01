module Scc (sccDepend,Depend(..),isRec) where

import List
import qualified Data.Set as Set
import qualified Data.Map as Map

addSet :: Ord a => Set.Set a -> a -> Set.Set a
addSet as a = if a `Set.member` as then as else Set.insert a as


-- scc :: (Eq a)  => (a->[a]) -> (a->[a]) -> [a] -> [Set a]
scc :: (Ord a) => (a->[a]) -> (a->[a]) -> [a] -> [Set.Set a]
scc ins outs = span . depth
    where depth = snd . depthSearch outs (Set.empty,[])
          span  = snd . spanSearch  ins  (Set.empty,[])


--depthSearch :: (Eq a)  => (a->[a]) -> (Set a,[a]) -> [a] -> (Set a,[a])
depthSearch :: (Ord a) => (a->[a]) -> (Set.Set a,[a]) -> [a] -> (Set.Set a,[a])
depthSearch = foldl . dsearch
    where dsearch rel (visited,seq) v | v `Set.member` visited = (visited,seq)
                                      | otherwise              = (visited',v:seq')
                                     where (visited',seq') = depthSearch rel 
                                                                         (addSet visited v,seq)
                                                                         (rel v)


--spanSearch :: (Eq a)  => (a->[a]) -> (Set a,[Set a]) -> [a] -> (Set a,[Set a])
spanSearch :: (Ord a) => (a->[a]) -> (Set.Set a,[Set.Set a]) -> [a] -> (Set.Set a,[Set.Set a])
spanSearch = foldl . search
     where search rel (visited,setseq) v | v `Set.member` visited = (visited,setseq)
                                         | otherwise        = (visited',Set.fromList (v:seq):setseq)
                                     where (visited',seq) = depthSearch rel 
                                                                        (addSet visited v,[])
                                                                        (rel v)


sccAssoc :: Ord a => Map.Map a [a] -> a -> [a]
sccAssoc at d =
  case Map.lookup d at of
    Nothing -> [d]
    Just ds -> ds

mkout :: Ord k => [(k, [k])] -> k -> [k]
mkout ds = sccAssoc (foldr ( \ (k,vs) at -> Map.insert k vs at ) Map.empty ds)

mkin :: Ord k => [(k, [k])] -> k -> [k]
mkin ds = sccAssoc (foldr ( \ (k,vs) at ->
                                let ks = [k]
                                in foldr ( \ v at -> Map.insertWith comb v ks at) at vs) Map.empty ds)
  where comb [v] vs = v:vs

data Depend a = NoRec a
              | Rec   [a]

isRec :: Depend a -> Bool
isRec (NoRec _) = False
isRec (Rec _) = True

instance (Show a) => Show (Depend a) where
  showsPrec d (NoRec x)    = ("NoRec "++).showsPrec d x
  showsPrec d (Rec  xs)    = ("Rec "++).showsPrec d xs

sccDepend :: (Ord a) => [(a, [a])] -> [Depend a]
sccDepend dep = fix' (map Set.toList (scc (mkin dep) out (map fst dep)))
        where
          out = mkout dep

          fix' [] = []
          fix' ([x]:r) = (if x `elem` out x then Rec [x] else NoRec x) : fix' r
          fix' (xs:r)  = Rec xs : fix' r

