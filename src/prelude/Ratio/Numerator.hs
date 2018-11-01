module Ratio where

import DRatio

numerator :: (Integral a) => Ratio a -> a

numerator (x :% y) = x
