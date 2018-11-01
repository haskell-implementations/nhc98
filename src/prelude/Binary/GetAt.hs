module NHC.Binary
  ( getAt
  ) where

import CBinary
import SeekBin
import BinHandle
import Bin

getAt :: Binary a => BinHandle -> Bin a -> IO a
getAt f p = seekBin f p >> get f

