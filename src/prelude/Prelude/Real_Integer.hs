module Prelude(Real(..)) where

import Ratio((%))

instance Real Integer where
  toRational i = i % 1

