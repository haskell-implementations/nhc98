module Prelude(RealFloat(..)) where

import PrimDecodeFloat
import PrimEncodeFloat
import CRealFloat

-- WARNING 32bit IEEE float

instance  RealFloat Float  where
    floatRadix _  = 2          -- FLT_RADIX
    floatDigits _ = 24         -- FLT_DIGITS
    floatRange _  = (negate 148,128) -- (FLT_MINEXP, FLT_MAXEXP)
    decodeFloat x = primDecodeFloat x
    encodeFloat x y = primEncodeFloat x y

    -- TODO
    isNaN x 	     = False
    isInfinite x     = False
    isDenormalized x = False
    isNegativeZero x = False
    isIEEE x         = False

