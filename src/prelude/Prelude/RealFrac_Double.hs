module Prelude(RealFrac(..)) where

instance  RealFrac Double where
    properFraction x =  case decodeFloat x of
			  (m,n) ->
			    if n >= 0 then
				(fromInteger m * fromInteger (floatRadix x) ^ n, 0)
			    else
				case quotRem m ((floatRadix x)^(negate n)) of
			          (w,r) -> (fromInteger w, encodeFloat r n)
