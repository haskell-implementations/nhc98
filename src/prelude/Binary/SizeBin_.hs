module NHC.Binary
  ( sizeBin
  ) where

import NHC.GreenCard
import BinHandle ({-type-}BinHandle(..))


foreign import ccall hs_sizeBin :: ForeignObj -> IO Int

sizeBin :: BinHandle -> IO Int
sizeBin (BH bh) =
  do hs_sizeBin bh


