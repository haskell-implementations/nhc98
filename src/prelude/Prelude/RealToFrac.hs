module Prelude where

realToFrac :: (Real a, Fractional b) => a -> b
realToFrac = fromRational . toRational
