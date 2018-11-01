module List where

import ZipWith7

zip7	:: [a] -> [b] -> [c] -> [d] -> [e] -> [f] -> [g] -> [(a,b,c,d,e,f,g)] 
zip7 	= zipWith7 (,,,,,,)
