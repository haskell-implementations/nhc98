module Numeric where

import IsDigit
import DigitToInt
import ReadInt

readDec :: (Integral a) => ReadS a

readDec = readInt 10 isDigit digitToInt

