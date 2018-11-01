{-|
    Sort like functions, should be moved and removed
-}
module Util.MergeSort(group,unique) where

import List(sort)

-- | Group a list of elements, reorders them as well
group :: Ord a => [a] -> [[a]]
group l = groupSorted (sort l)

groupSorted [] = []
groupSorted (x:xs) = groupSorted' x [] xs
        where
            groupSorted' x a [] = [x:a]
            groupSorted' x a (y:ys) =
                if x == y
                then groupSorted' x (y:a) ys
                else (x:a) : groupSorted' y [] ys

-- | Reorders the elements as well, O(n*log(n))
unique :: Ord a => [a] -> [a]
unique xs = map head (group xs)
