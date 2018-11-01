module NHC.PackedString(index) where

import DPackedString(PackedString)
import Prelude hiding(Ix(range,index,inRange))

indexPS primitive 2 :: PackedString -> Int -> Char
index x y = indexPS x y
