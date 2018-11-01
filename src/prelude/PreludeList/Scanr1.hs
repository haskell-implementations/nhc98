module Prelude where

scanr1	  	:: (a -> a -> a) -> [a] -> [a]
scanr1 f [x] 	= [x] 
scanr1 f (x:xs) = f x q : qs
		  where qs@(q:_) = scanr1 f xs
scanr1 _ [] 	= []
--scanr1 _ [] 	= error "PreludeList.scanr1: empty list"
