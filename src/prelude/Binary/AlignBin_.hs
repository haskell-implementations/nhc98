module NHC.Binary
  ( alignBin
  ) where

import NHC.GreenCard
import BinHandle ({-type-}BinHandle(..))


foreign import ccall hs_alignBin :: ForeignObj -> IO ()

alignBin :: BinHandle -> IO ()
alignBin (BH bh) =
  do res1 <- hs_alignBin bh
     return res1


