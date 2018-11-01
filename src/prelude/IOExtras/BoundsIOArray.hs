module NHC.IOExtras
  ( boundsIOArray
  ) where

import Ix
import DIOArray

boundsIOArray :: Ix ix => IOArray ix elt -> (ix,ix)
boundsIOArray (MkIOArray b _) = b
