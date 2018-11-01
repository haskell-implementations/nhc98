module Prelude where

fromIntegral :: (Integral a, Num b) => a -> b
fromIntegral = fromInteger . toInteger
