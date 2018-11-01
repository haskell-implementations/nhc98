module Prelude where

-- primIntegerSub primitive 2 :: Integer -> Integer -> Integer

foreign import ccall "primIntegerSubC" primIntegerSub :: Integer -> Integer -> Integer
