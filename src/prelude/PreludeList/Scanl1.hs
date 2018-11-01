module Prelude where

import Scanl

scanl1	   	 :: (a -> a -> a) -> [a] -> [a]
scanl1 f (x:xs)  = scanl f x xs 
scanl1 f []      = []
--scanl1 f []    = error "PreludeList.scanl1: empty list"
