module Prelude(Ord(..)) where

instance Ord () where
  a <  b = False
  a <= b = True
  a >= b = True
  a >  b = False
