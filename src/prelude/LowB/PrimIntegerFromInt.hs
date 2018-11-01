module Prelude where

-- primIntegerFromInt primitive 1 :: Int -> Integer

foreign import ccall "primIntegerFromIntC" primIntegerFromInt :: Int -> Integer
