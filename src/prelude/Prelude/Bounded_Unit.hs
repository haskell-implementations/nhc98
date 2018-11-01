module Prelude(Bounded(..)) where

instance Bounded () where
  minBound = ()
  maxBound = ()
