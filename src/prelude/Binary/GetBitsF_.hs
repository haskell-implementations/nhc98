module NHC.Binary
  ( getBitsF
  ) where

import NHC.GreenCard
import BinPtr    ({-type-}BinPtr(..))
import BinHandle ({-type-}BinHandle(..))


getBitsF :: BinHandle -> Int -> BinPtr -> (Int, BinPtr)
getBitsF bh w p = (getBitsFAux bh w p, toEnum (w + fromEnum p))

foreign import ccall hs_getBitsFAux :: ForeignObj -> Int -> Int -> Int

getBitsFAux :: BinHandle -> Int -> BinPtr -> Int
getBitsFAux (BH bh) width (BP p) =
  let value = hs_getBitsFAux bh width p in
  value


