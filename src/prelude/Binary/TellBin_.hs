module NHC.Binary
  ( tellBin
  ) where

import NHC.GreenCard
import BinHandle ({-type-}BinHandle(..))
import BinPtr    ({-type-}BinPtr(..))


foreign import ccall hs_tellBin :: ForeignObj -> IO Int

tellBin :: BinHandle -> IO BinPtr
tellBin (BH bh) =
  do p <- hs_tellBin bh
     return (BP p)


