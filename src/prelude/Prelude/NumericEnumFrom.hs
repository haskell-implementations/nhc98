module Prelude where

numericEnumFrom :: (Fractional a) => a -> [a]
numericEnumFrom n = iterate (+1) n

numericEnumFromTo :: (Fractional a, Ord a) => a -> a -> [a]
numericEnumFromTo n m = takeWhile (<= m+1/2) (numericEnumFrom n)
