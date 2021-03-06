module Prelude where

either :: (a->c) -> (b->c) -> (Either a b) -> c
either f g (Left x)  = f x
either f g (Right x) = g x
