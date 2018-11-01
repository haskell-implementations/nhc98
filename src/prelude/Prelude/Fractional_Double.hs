module Prelude (Fractional(..)) where

import Numerator
import Denominator
import RatioCon
import Num_Ratio
import RealFrac_Ratio

instance  Fractional Double  where
  x / y = x / y 		-- MAGIC

  fromRational x =
      let f ex = let y :: Double
                     y  = encodeFloat (round (x * (1 % bd) ^^ ex)) ex
                     e' = snd (decodeFloat y)
                     bd = floatRadix x'
                 in if e' == ex then y else f e'
          e    = snd (decodeFloat (fromInteger (numerator x) `asTypeOf` x'
        	                                / fromInteger (denominator x)))
          x'   = f e
      in x'

