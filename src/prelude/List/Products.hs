module List where

products          :: (Num a) => [a] -> [a]
products                =  scanl (*) 1 
