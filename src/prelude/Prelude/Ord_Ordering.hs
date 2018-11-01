module Prelude(Ord(..)) where

instance Ord Ordering where
  compare LT  LT = EQ
  compare LT  _  = LT
  compare EQ  LT = GT
  compare EQ  EQ = EQ
  compare EQ  GT = LT
  compare GT  GT = EQ
  compare EQ  _  = GT
   
