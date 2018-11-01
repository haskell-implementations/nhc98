module NHC.Binary
  ( {-type-} BinLocation(..)
  , fromBinLocation
  ) where

import BinIOMode ({-type-}BinIOMode(..))

data BinLocation = Memory | File FilePath BinIOMode

fromBinLocation  Memory        = (False, "", RW)
fromBinLocation (File fp mode) = (True,  fp, mode)

toBinLocation (False, _, _) = Memory
toBinLocation (True,  s, m) = File s m