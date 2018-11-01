module Prelude(Bounded(..)) where

instance Bounded Char where
  minBound = '\0'
  maxBound = '\255'
