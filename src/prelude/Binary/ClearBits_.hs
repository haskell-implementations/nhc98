module NHC.Binary
  ( clearBits
  ) where

import NHC.GreenCard
import BinHandle ({-type-}BinHandle(..))
import BinPtr    ({-type-}BinPtr(..))

    -- %-#include <stdio.h>

foreign import ccall hs_clearBits :: ForeignObj -> Int -> IO Int

clearBits :: BinHandle -> Int -> IO BinPtr
clearBits (BH bh) width =
  do p <- hs_clearBits bh width
     return (BP p)


