module NHC.Binary
  ( getBits
  ) where

import NHC.GreenCard
import BinHandle ({-type-}BinHandle(..))


foreign import ccall hs_getBits :: ForeignObj -> Int -> IO Int

getBits :: BinHandle -> Int -> IO Int
getBits (BH bh) width =
  do hs_getBits bh width


