module NHC.Binary
  ( equalsBin
  ) where

import NHC.GreenCard
import BinPtr
import BinHandle

 
foreign import ccall hs_equalsBin :: Int -> ForeignObj -> Int -> ForeignObj -> Int -> Bool

equalsBin :: Int -> BinHandle -> BinPtr -> BinHandle -> BinPtr -> Bool
equalsBin size (BH bhx) (BP x) (BH bhy) (BP y) =
  let retval = hs_equalsBin size bhx x bhy y in
  retval


