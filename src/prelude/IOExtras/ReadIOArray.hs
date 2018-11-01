module NHC.IOExtras
  ( readIOArray
  ) where

import Ix
import DIOArray
import LowVector

readIOArray :: Ix ix => IOArray ix elt -> ix -> IO elt
readIOArray (MkIOArray b v) ix =
    primVectorIndexC v (index b ix)

