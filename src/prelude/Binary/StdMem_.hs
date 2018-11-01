module NHC.Binary
  ( stdmem
  ) where

import NHC.GreenCard
import BinHandle ({-type-}BinHandle(..))


foreign import ccall hs_stdmem :: ForeignObj

stdmem :: BinHandle
stdmem =
  let bh = hs_stdmem in
  (BH bh)



