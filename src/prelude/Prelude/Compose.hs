module Prelude where

infixr 9 .

(.)  :: (b -> c) -> (a -> b) -> a -> c
f . g = \ x -> f (g x)
