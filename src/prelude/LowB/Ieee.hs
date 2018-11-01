module Prelude where

foreign import ccall "isnan" dIsNaN :: Double -> Bool
foreign import ccall "isinf" dIsInf :: Double -> Bool

foreign import cast floatToDouble :: Float -> Double
foreign import cast doubleToFloat :: Double -> Float
