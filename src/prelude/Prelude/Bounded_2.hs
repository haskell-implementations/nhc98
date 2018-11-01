module Prelude(Bounded(..)) where

instance (Bounded a, Bounded b) => Bounded (a,b) where
  minBound = (minBound, minBound)
  maxBound = (maxBound, maxBound)
