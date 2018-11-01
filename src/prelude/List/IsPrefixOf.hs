module List where

isPrefixOf               :: (Eq a) => [a] -> [a] -> Bool
isPrefixOf [] _           =  True
isPrefixOf (_:_)   []     =  False
isPrefixOf (x:xs) (y:ys)  =  x == y && isPrefixOf xs ys

