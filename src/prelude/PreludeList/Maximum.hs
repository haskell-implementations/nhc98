module Prelude where

import Foldl1

maximum :: (Ord a) => [a] -> a
maximum [] = error "PreludeList.maximum: empty list"
maximum xs = foldl1 max xs
