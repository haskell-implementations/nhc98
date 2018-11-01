module Ratio((%)) where

import DRatio
import Reduce

infixl 7 %

(%)			:: (Integral a) => a -> a -> Ratio a
x % y			=  reduce (x * signum y) (abs y)
