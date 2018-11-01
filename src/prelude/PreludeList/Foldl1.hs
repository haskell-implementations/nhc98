module Prelude where

foldl1	   	  :: (a -> a -> a) -> [a] -> a
foldl1 f (x:xs)   = foldl f x xs
foldl1 f [] 	  = error "PreludeList.foldl1: empty list" 
