module Prelude(Functor(..)) where

instance  Functor IO where
   fmap f x              = x >>= (return . f)
