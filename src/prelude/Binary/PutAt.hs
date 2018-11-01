module NHC.Binary
  ( putAt
  ) where

import CBinary
import SeekBin
import BinHandle
import Bin

putAt :: Binary a => BinHandle -> Bin a -> a -> IO ()
putAt f p v = seekBin f p >> put f v >> return ()

