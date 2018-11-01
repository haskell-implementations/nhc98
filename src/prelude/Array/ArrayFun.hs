module Array where

import DArray
import Ix
import LowVector
import _E
import NHC.Internal (unsafePerformIO)

array :: (Ix a) => (a,a) -> [(a,b)] -> Array a b
array b ivs =
    if and [inRange b i | (i,_) <- ivs]
    then unsafePerformIO ( do
           v <- primNewVectorC (rangeSize b)
                               (_E (error "Array.!: undefined array element"))
           mapM_ (\(i,a)-> primUpdateVectorC (index b i) (_E a) v) ivs
           return (MkArray b v)
         )
    else error "Array.array: out-of-range array association"

