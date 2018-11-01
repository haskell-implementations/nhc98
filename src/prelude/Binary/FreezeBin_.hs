module NHC.Binary
  ( freezeBin
  ) where

import NHC.GreenCard
import BinHandle ({-type-}BinHandle(..))


foreign import ccall hs_freezeBin :: ForeignObj -> IO ()

freezeBin :: BinHandle -> IO ()
freezeBin (BH bh) =
  do res1 <- hs_freezeBin bh
     return res1


