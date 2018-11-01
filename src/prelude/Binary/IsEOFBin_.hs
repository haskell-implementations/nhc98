module NHC.Binary
  ( isEOFBin
  ) where

import NHC.GreenCard
import BinHandle ({-type-}BinHandle(..))


foreign import ccall hs_isEOFBin :: ForeignObj -> IO Bool

isEOFBin :: BinHandle -> IO Bool
isEOFBin (BH bh) =
  do hs_isEOFBin bh



-- This could return the wrong result.  Check whether the underlying
-- C routines reset the eof flag correctly following a forceCacheTo
-- (or other) movement.  Checked OK 980325.