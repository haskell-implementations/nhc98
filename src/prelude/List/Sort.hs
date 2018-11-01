module List where

import SortBy

-- stable sorting algorithm

sort                    :: (Ord a) => [a] -> [a]
sort                    =  sortBy compare
