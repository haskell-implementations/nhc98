module Array where

import Ix
import DArray
import NHC.IOExtras

infixl 9  !

-- primIndex primitive 2 :: Vector a -> Int -> a
foreign import ccall "primVectorIndexC" primIndex :: Vector a -> Int -> a


(!)                   :: (Ix a) => Array a b -> a -> b
(!) (MkArray b v) i   =  primIndex v (index b i)

