module Prelude where

lookup :: (Eq a) => a -> [(a,b)] -> Maybe b
lookup key [] = Nothing
lookup key ((x,y):xys)
     | key == x  = Just y
     | True	 = lookup key xys
