module NHC.Binary
  ( {-type-} BinHandle(..)
  ) where

import NHC.GreenCard (ForeignObj)

newtype BinHandle = BH ForeignObj
