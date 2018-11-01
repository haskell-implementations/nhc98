module NHC.Binary
  ( copyBytes
  ) where

import NHC.GreenCard
import BinHandle ({-type-}BinHandle(..))
import BinPtr    ({-type-}BinPtr(..))

    -- %-#include <stdio.h>


foreign import ccall hs_copyBytes :: ForeignObj -> ForeignObj -> Int -> IO Int

copyBytes :: BinHandle -> BinHandle -> Int -> IO BinPtr
copyBytes (BH sbh) (BH dbh) bytes =
  do destptr <- hs_copyBytes sbh dbh bytes
     return (BP destptr)


