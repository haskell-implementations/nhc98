module List where

import UnionBy

union       :: (Eq a) => [a] -> [a] -> [a]
union        =  unionBy (==)

