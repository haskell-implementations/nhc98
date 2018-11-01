module Prelude(Bounded(..)) where

instance (Bounded a, Bounded b, Bounded c) => Bounded (a,b,c) where
  minBound = (minBound, minBound, minBound)
  maxBound = (maxBound, maxBound, maxBound)
