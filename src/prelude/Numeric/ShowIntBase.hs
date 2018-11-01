module Numeric where

import Char (intToDigit)

showIntAtBase :: Integral a => a -> (Int->Char) -> a -> ShowS
showIntAtBase base intToDig n r
  | n < 0   = error "Numeric.showIntAtBase: can't show negative numbers"
  | otherwise =
      let (n',d) = quotRem n base
          r'     = intToDig (fromIntegral d) : r
      in if n' == 0 then r' else showIntAtBase base intToDig n' r'

showHex, showOct, showBin :: Integral a => a -> ShowS
showHex = showIntAtBase 16 intToDigit
showOct = showIntAtBase 8 intToDigit
showBin = showIntAtBase 2 intToDigit
