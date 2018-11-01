module List where

import ZipWith4

zip4	:: [a] -> [b] -> [c] -> [d] -> [(a,b,c,d)] 
zip4 	= zipWith4(,,,)
