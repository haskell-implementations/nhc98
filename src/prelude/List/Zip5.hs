module List where

import ZipWith5

zip5	:: [a] -> [b] -> [c] -> [d] -> [e] -> [(a,b,c,d,e)] 
zip5 	= zipWith5 (,,,,)
