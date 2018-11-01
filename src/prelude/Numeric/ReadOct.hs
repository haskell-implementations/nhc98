module Numeric where

import IsOctDigit
import DigitToInt
import ReadInt

readOct :: (Integral a) => ReadS a

readOct = readInt  8 isOctDigit digitToInt

