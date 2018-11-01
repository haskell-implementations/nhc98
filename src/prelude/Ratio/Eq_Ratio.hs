module Ratio where
--module Ratio(Eq(..)) where

import DRatio

instance  (Integral a)	=> Eq (Ratio a)  where
    (x:%y) == (x':%y')	=  x == x' && y == y'
    (x:%y) /= (x':%y')	=  x /= x' || y /= y'
