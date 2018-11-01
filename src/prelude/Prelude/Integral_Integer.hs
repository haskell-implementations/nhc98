module Prelude(Integral(..)) where

import PrimIntegerQuotRem

instance Integral Integer  where
    n `quot` d 	  = primIntegerQuot n d
    n `rem`  d    = primIntegerRem n d
    n `div`  d    = fst (divMod n d) 
    n `mod`  d 	  = snd (divMod n d) 

    n `quotRem` d = primIntegerQuotRem n d

    toInteger n   = n 

