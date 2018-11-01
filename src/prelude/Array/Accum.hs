module Array where

import Ix
import DArray
import Replace
import AIndex

accum                 :: (Ix a) => (b -> c -> b) -> Array a b -> [(a,c)]
                                   -> Array a b
accum f              =  foldl (\a (i,v) -> a // [(i,f (a!i) v)])

{-
-- Possible improved implementation?
-- Gives sig-11 core dump at the mo!

import LowVector
import _E
import Ix

accum f (MkArray b v) as =
  unsafePerformIO ( do
    v' <- primCopyVectorC v
    mapM_ (\(ix,elt)-> do
             let i = index b ix
             val <- primVectorIndexC v' i
             primUpdateVectorC i (_E (f val elt)) v')
          as
    return (MkArray b v')
  )
-}
