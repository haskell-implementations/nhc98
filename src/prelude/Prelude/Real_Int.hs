module Prelude(Real(..)) where

import Ratio((%))

instance Real Int where
  toRational i = (toInteger i) % 1

