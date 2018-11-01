module Ix where

-- now OBSOLETE - rangeSize has become a method of class Ix.

rangeSize               :: (Ix a) => (a,a) -> Int
rangeSize b@(l,u)
    | null (range b) =  0
    | otherwise      =  index b u + 1
