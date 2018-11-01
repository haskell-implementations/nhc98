module NHC.IOExtras
  ( writeIOArray
  ) where

import DIOArray
import Ix
import LowVector
import _E

writeIOArray :: Ix ix => IOArray ix elt -> ix -> elt -> IO ()
writeIOArray (MkIOArray b v) ix elt =
    primUpdateVectorC (index b ix) (_E elt) v

