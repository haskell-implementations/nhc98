module NHC.IOExtras
  ( IOArray(..)
  , Vector
  ) where

import PreludeBuiltin(Vector)
import Ix

data (Ix ix) =>
     IOArray ix elt = MkIOArray (ix,ix) (Vector elt)
