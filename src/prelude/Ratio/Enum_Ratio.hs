module Ratio where
--module Ratio(Enum(..)) where

import DRatio
import Ord_Ratio
import Real_Ratio
import RealFrac_Ratio

instance  (Integral a) => Enum (Ratio a) where
	succ n = (n+1)
	pred n = (n-1)
        toEnum n = fromInteger (toInteger n) :% 1
	fromEnum = fromInteger . truncate        -- may overflow
	enumFrom x = numericEnumFrom x
	enumFromTo x y = numericEnumFromTo x y
	enumFromThen x y = numericEnumFromThen x y
	enumFromThenTo x y z = numericEnumFromThenTo x y z

