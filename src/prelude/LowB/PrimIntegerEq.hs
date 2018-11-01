module Prelude where

-- primIntegerEq  primitive 2 :: Integer -> Integer -> Bool

foreign import ccall "primIntegerEqC" primIntegerEq  :: Integer -> Integer -> Bool


