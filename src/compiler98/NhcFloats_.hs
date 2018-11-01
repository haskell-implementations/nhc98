module NhcFloats
  ( floatToInt
  , doubleToInts
  ) where

import NHC.GreenCard

foreign import ccall "hs_floatToInt" floatToInt :: Float -> Int

foreign import ccall hs_doubleToInts :: Double -> (Int,Int)

doubleToInts :: Double -> (Int,Int)
doubleToInts db =
  let (res1,res2) = hs_doubleToInts db in
  (res1,res2)


