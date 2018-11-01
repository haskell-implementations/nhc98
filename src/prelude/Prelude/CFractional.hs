module Prelude (Fractional(..)) where

import TRational

infixl 7  /

class  (Num a) => Fractional a  where
    (/)			:: a -> a -> a
    recip		:: a -> a
    fromRational	:: Rational -> a

    recip x		=  1 / x
    x / y               = x * recip y
