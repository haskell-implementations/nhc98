module Prelude where

infix 4 `elem`

elem :: (Eq a) => a -> [a] -> Bool
elem x = any (x==)
