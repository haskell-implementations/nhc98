module Prelude(Eq(..)) where

instance Eq a => Eq [a] where
  []     == []     = True
  (a:as) == (b:bs) = a == b && as == bs
  _      == _      = False
