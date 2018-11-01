module NHC.Binary
  ( putAtEnd
  ) where

import BinHandle ({-type-}BinHandle)
import Bin       ({-type-}Bin)
import EndBin    (endBin)
import SeekBin   (seekBin)
import CBinary   ({-class-}Binary(..))

putAtEnd :: Binary a => BinHandle -> a -> IO (Bin a)
putAtEnd h x = do
  e <- endBin h
  seekBin h e
  put h x
