module Prelude where

import PrimIntegerLe
import PrimIntegerSub

-- used when compiling (n+k)-patterns
_leInteger a b   = primIntegerLe a b 
_subInteger a b  = primIntegerSub a b 

