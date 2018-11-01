module Ratio where
--module Ratio(Ord(..)) where

import DRatio
import Eq_Ratio

instance  (Integral a)	=> Ord (Ratio a)  where
    (x:%y) <= (x':%y')	=  x * y' <= x' * y
    (x:%y) <  (x':%y')	=  x * y' <  x' * y
