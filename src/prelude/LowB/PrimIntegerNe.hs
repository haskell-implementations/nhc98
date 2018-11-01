module Prelude where

import PrimIntegerEq

primIntegerNe :: Integer -> Integer -> Bool
primIntegerNe a b = not (primIntegerEq a b)



