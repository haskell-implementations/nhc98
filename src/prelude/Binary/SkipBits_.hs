module NHC.Binary
  ( skipBits
  ) where

import NHC.GreenCard
import BinHandle ({-type-}BinHandle(..))


foreign import ccall hs_skipBits :: ForeignObj -> Int -> IO ()

skipBits :: BinHandle -> Int -> IO ()
skipBits (BH bh) width =
  do res1 <- hs_skipBits bh width
     return res1


