module List where

sums          :: (Num a) => [a] -> [a]
sums                    =  scanl (+) 0 
