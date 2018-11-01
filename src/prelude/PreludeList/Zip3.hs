module Prelude where

import ZipWith3

zip3	   :: [a] -> [b] -> [c] -> [(a,b,c)] 
zip3       = zipWith3 (,,)
