module Prelude where

-- primIntegerNeg primitive 1 :: Integer -> Integer

foreign import ccall "primIntegerNegC" primIntegerNeg :: Integer -> Integer

