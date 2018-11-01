module NHC.Binary
  ( getFAt
  ) where

import CBinary
import BinHandle
import Bin

getFAt :: Binary a => BinHandle -> Bin a -> a
getFAt f p = fst (getF f p)

