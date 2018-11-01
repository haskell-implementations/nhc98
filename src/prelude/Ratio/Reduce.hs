module Ratio where

import DRatio

reduce :: (Integral a) => a -> a -> Ratio a

reduce x y = if y == 0 
             then error "Ratio.%: zero denominator" -- Haskell 1.2 used signum x :% 0
             else (x `quot` d) :% (y `quot` d)
	  where d = gcd x y


