module Prelude(Real(..)) where

import TRational
import DRatio
import CNum
import COrd

class (Num a, Ord a) => Real a where
  toRational		:: a -> Rational
