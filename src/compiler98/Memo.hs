module Memo(Memo,initM,listM,fromListM,elemM,lookupM,addM) where

import Tree234

newtype Memo a = Memo (Tree a)

initM :: Memo a
initM = Memo initTree

listM :: Memo a -> [a]
listM (Memo m) = treeMapList (:) m

fromListM :: Ord a => [a] -> Memo a
fromListM es = foldl addM initM es

elemM :: Ord a => Memo a -> a -> Bool
elemM (Memo tree) value = 
  treeSearch False (\_ -> True) (compare value) tree

lookupM :: Ord a => Memo a -> a -> Maybe a
lookupM (Memo tree) value =
  treeSearch Nothing Just (compare value) tree

addM :: Ord a => Memo a -> a -> Memo a
addM (Memo tree) value =
  Memo $ treeAdd comb compare value tree
 where
  comb a b = b
