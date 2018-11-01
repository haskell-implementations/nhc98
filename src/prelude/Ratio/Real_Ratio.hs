module Ratio where
--module Ratio(Real(..)) where

import DRatio
import TRational
import Num_Ratio
import Ord_Ratio


instance  (Integral a)	=> Real (Ratio a)  where
    toRational (x:%y)	=  toInteger x :% toInteger y
