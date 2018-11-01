module NHC.IOExtras
  ( newIOArray
  ) where

import Ix
import DIOArray
import LowVector
import _E

newIOArray :: Ix ix => (ix,ix) -> elt -> IO (IOArray ix elt)
newIOArray bounds elt = do
    v <- primNewVectorC (rangeSize bounds) (_E elt)
    return (MkIOArray bounds v)

