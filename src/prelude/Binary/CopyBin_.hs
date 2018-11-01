module NHC.Binary
  ( copyBin
  ) where

import NHC.GreenCard
import BinHandle   ({-type-}BinHandle(..))
import BinLocation ({-type-}BinLocation)
import OpenBin     (openBin)
import SizeBin     (sizeBin)

    -- %-#include <stdio.h>

copyBin :: BinHandle -> BinLocation -> IO BinHandle
copyBin sbh loc =
  openBin loc >>= \dbh->
  sizeBin sbh >>= \nbytes->
  copyBinAux sbh dbh nbytes >>
  return dbh

foreign import ccall hs_copyBinAux :: ForeignObj -> ForeignObj -> Int -> IO ()

copyBinAux :: BinHandle -> BinHandle -> Int -> IO ()
copyBinAux (BH sbh) (BH dbh) bytes =
  do res1 <- hs_copyBinAux sbh dbh bytes
     return res1


