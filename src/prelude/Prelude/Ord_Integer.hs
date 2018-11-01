module Prelude(Ord(..)) where

import PrimIntegerLt
import PrimIntegerLe
import PrimIntegerGe
import PrimIntegerGt

instance Ord Integer where
  a <  b = primIntegerLt a b 
  a <= b = primIntegerLe a b
  a >= b = primIntegerGe a b 
  a >  b = primIntegerGt a b 

