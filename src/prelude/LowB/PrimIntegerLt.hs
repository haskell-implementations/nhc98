module Prelude where

-- primIntegerLt primitive 2 :: Integer -> Integer -> Bool

foreign import ccall "primIntegerLtC" primIntegerLt :: Integer -> Integer -> Bool

