module List where

import ListToMaybe
import FindIndices

findIndex               :: (a -> Bool) -> [a] -> Maybe Int
findIndex p             =  listToMaybe . findIndices p
