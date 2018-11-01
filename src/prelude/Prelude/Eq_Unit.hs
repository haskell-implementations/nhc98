module Prelude(Eq(..)) where

instance Eq () where
  a == b = True
  a /= b = False
