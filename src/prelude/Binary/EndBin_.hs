module NHC.Binary
  ( endBin
  ) where

import NHC.GreenCard
import BinHandle ({-type-}BinHandle(..))
import BinPtr    ({-type-}BinPtr(..))


foreign import ccall hs_endBin :: ForeignObj -> IO Int

endBin :: BinHandle -> IO BinPtr
endBin (BH bh) =
  do res1 <- hs_endBin bh
     return (BP res1)


