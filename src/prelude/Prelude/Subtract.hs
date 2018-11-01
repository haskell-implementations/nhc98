module Prelude where

subtract :: (Num a) => a -> a -> a
subtract = flip (-)
