module Prelude where

-- primIntegerOr primitive 2 :: Integer -> Integer -> Integer

foreign import ccall "primintegerOrC" primIntegerOr :: Integer -> Integer -> Integer

