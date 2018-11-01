module NHC.Binary
  ( closeBin
  ) where

import NHC.GreenCard
import BinHandle ({-type-}BinHandle(..))


foreign import ccall hs_closeBin :: ForeignObj -> IO ()

closeBin :: BinHandle -> IO ()
closeBin (BH bh) =
  do res1 <- hs_closeBin bh
     return res1


