module List where

findIndices             :: (a -> Bool) -> [a] -> [Int]
findIndices p xs        =  [ i | (x,i) <- zip xs [0..], p x ]

