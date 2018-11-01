module Ratio where
--module Ratio(RealFrac(..)) where

import DRatio
import Real_Ratio
import Fractional_Ratio

instance  (Integral a)	=> RealFrac (Ratio a)  where
    properFraction (x :% y) = (fromIntegral q, r :% y)
			      where (q,r) = quotRem x y
