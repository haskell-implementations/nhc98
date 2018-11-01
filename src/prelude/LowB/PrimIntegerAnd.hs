module Prelude where

-- primIntegerAnd primitive 2 :: Integer -> Integer -> Integer

foreign import ccall "primIntegerAndC" primIntegerAnd :: Integer -> Integer -> Integer

