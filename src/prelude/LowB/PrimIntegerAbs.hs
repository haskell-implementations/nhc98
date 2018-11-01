module Prelude where

-- primIntegerAbs primitive 1 :: Integer -> Integer

foreign import ccall "primIntegerAbsC" primIntegerAbs :: Integer -> Integer
