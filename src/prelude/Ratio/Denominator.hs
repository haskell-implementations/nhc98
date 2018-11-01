module Ratio where

import DRatio

denominator :: (Integral a) => Ratio a -> a

denominator (x:%y) = y
