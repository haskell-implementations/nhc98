module Prelude where

numericEnumFromThen :: (Fractional a) => a-> a-> [a]
numericEnumFromThen n m = iterate (+(m-n)) n

numericEnumFromThenTo :: (Fractional a, Ord a) => a-> a-> a-> [a]
numericEnumFromThenTo n n' m = takeWhile p (numericEnumFromThen n n')
                             where
                               p | n' > n    = (<= m + (n'-n)/2)
                                 | otherwise = (>= m + (n'-n)/2)
