module List where

import ZipWith6

zip6	:: [a] -> [b] -> [c] -> [d] -> [e] -> [f] -> [(a,b,c,d,e,f)] 
zip6 	= zipWith6 (,,,,,)
