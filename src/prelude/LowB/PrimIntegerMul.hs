module Prelude where

-- primIntegerMul primitive 2 :: Integer -> Integer -> Integer

foreign import ccall "primIntegerMulC" primIntegerMul :: Integer -> Integer -> Integer

