module List where

import FindIndices

elemIndices             :: Eq a => a -> [a] -> [Int]
elemIndices x           =  findIndices (x ==)
