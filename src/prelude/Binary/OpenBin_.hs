module NHC.Binary
  ( openBin
  ) where

import NHC.GreenCard
import BinHandle ({-type-}BinHandle(..))
import BinIOMode ({-type-}BinIOMode(..))
import BinLocation ({-type-}BinLocation(..), fromBinLocation)


foreign import ccall hs_openBin :: Bool -> PackedString -> Int -> IO ForeignObj

openBin :: BinLocation -> IO BinHandle
openBin tmp1 =
  do let (f,tmp2,tmp3) = fromBinLocation tmp1
     let fp = toCString tmp2
     let m = fromEnum tmp3
     bh <- hs_openBin f fp m
     return (BH bh)


