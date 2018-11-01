module Prelude(Num(..)) where

import PrimIntegerAdd
import PrimIntegerSub
import PrimIntegerMul
import PrimIntegerNeg

instance Num Integer where
 a + b    = primIntegerAdd a b 
 a - b    = primIntegerSub a b 
 a * b    = primIntegerMul a b 
 negate a = primIntegerNeg a

 abs i = if i < 0 then negate i else i
 signum i = case compare i 0 of
		LT -> negate 1
		EQ ->  0
		GT ->  1
 fromInteger a = a -- id a

