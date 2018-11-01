module Array(Array(..),Vector) where

import PreludeBuiltin(Vector)
import Ix

data  (Ix a)    => Array a b = MkArray (a,a) (Vector b)
