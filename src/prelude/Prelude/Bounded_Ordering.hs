module Prelude(Bounded(..)) where

instance Bounded Ordering where
  minBound = LT
  maxBound = GT
