{-# OPTIONS -fglasgow-exts #-}
module Floats
  ( floatToInt
  , doubleToInt0
  , doubleToInt1
  ) where

foreign import ccall unsafe "ghc_floats.h floatToInt"   floatToInt   :: Float  -> Int
foreign import ccall unsafe "ghc_floats.h doubleToInt0" doubleToInt0 :: Double -> Int
foreign import ccall unsafe "ghc_floats.h doubleToInt1" doubleToInt1 :: Double -> Int
