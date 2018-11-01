module NHC.Binary
  ( putBits
  ) where

import NHC.GreenCard
import BinHandle ({-type-}BinHandle(..))
import BinPtr    ({-type-}BinPtr(..))

    -- %-#include <stdio.h>

foreign import ccall hs_putBits :: ForeignObj -> Int -> Int -> IO Int

putBits :: BinHandle -> Int -> Int -> IO BinPtr
putBits (BH bh) width value =
  do p <- hs_putBits bh width value
     return (BP p)


