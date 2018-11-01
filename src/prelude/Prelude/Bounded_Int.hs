module Prelude(Bounded(..)) where

-- WARNING 32bit

instance Bounded Int where
  minBound = negate 2147483648
  maxBound =        2147483647

