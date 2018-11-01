module NHC.Binary
  ( seekBin
  ) where

import NHC.GreenCard
import BinHandle ({-type-}BinHandle(..))
import BinPtr    ({-type-}BinPtr(..))

    -- %-#include <stdio.h>

foreign import ccall hs_seekBin :: ForeignObj -> Int -> IO ()

seekBin :: BinHandle -> BinPtr -> IO ()
seekBin (BH bh) (BP p) =
  do res1 <- hs_seekBin bh p
     return res1


