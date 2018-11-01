module NHC.Binary
  ( compareBin
  ) where

import NHC.GreenCard
import BinPtr
import BinHandle

    -- %-#include <stdio.h>
 


foreign import ccall hs_compareBin :: Int -> Int -> ForeignObj -> Int -> ForeignObj -> Int -> Int

compareBin :: Int -> Int -> BinHandle -> BinPtr -> BinHandle -> BinPtr -> Ordering
compareBin sizex sizey (BH bhx) (BP x) (BH bhy) (BP y) =
  let retval = hs_compareBin sizex sizey bhx x bhy y in
  (toEnum retval)


