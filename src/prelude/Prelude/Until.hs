module Prelude where

until      :: (a -> Bool) -> (a -> a) -> a -> a
until p f x = if p x
	      then x
              else until p f (f x)
