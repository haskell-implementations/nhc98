module Prelude where

minimum :: (Ord a) => [a] -> a
minimum [] = error "PreludeList.minimum: empty list"
minimum xs = foldl1 min xs
