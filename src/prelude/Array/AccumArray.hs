module Array where

import Ix
import DArray
import ArrayFun
import Accum

accumArray            :: (Ix a) => (b -> c -> b) -> b -> (a,a) -> [(a,c)]
                                   -> Array a b
accumArray f z b      =  accum f (array b [(i,z) | i <- range b])
