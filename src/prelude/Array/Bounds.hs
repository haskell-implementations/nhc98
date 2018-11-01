module Array where

import Ix
import DArray

bounds                :: (Ix a) => Array a b -> (a,a)
bounds (MkArray b _)  =  b
