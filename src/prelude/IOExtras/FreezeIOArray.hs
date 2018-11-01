module NHC.IOExtras
  ( freezeIOArray
  ) where

import Ix
import DIOArray
import DArray
import LowVector

freezeIOArray :: Ix ix => IOArray ix elt -> IO (Array ix elt)
freezeIOArray (MkIOArray b st) = do
    v <- primCopyVectorC st
    return (MkArray b v)

