module Prelude(Bounded(..)) where

instance Bounded Bool where
  minBound = False
  maxBound = True

