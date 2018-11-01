module Prelude(Eq(..)) where

import PrimIntegerEq
import PrimIntegerNe

instance Eq Integer where
  a == b = primIntegerEq a b 
  a /= b = primIntegerNe a b 

