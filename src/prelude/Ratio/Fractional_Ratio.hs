module Ratio where
--module Ratio(Fractional(..)) where

import DRatio
import RatioCon
import Num_Ratio

instance  (Integral a)	=> Fractional (Ratio a)  where
    (x:%y) / (x':%y')	=  (x*y') % (y*x')
    recip (x:%y)	=  y%x  --if x < 0 then negate y :% negate x else y:%x
    fromRational (x:%y) =  fromInteger x :% fromInteger y

