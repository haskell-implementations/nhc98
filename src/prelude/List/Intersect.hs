module List where

import IntersectBy

intersect    :: (Eq a) => [a] -> [a] -> [a]
intersect     =  intersectBy (==)


