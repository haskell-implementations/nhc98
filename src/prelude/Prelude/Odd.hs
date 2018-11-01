module Prelude where

odd :: (Integral a) => a -> Bool
odd = not . even
