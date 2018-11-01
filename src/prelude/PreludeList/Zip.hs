module Prelude where

zip	:: [a] -> [b] -> [(a,b)] 
zip	= zipWith (,)
