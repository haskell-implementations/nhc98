module Numeric where

import IsHexDigit
import DigitToInt
import ReadInt

readHex :: (Integral a) => ReadS a

readHex  =  readInt 16 isHexDigit digitToInt
