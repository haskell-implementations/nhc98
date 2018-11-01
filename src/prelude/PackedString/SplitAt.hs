module NHC.PackedString where

import Prelude hiding(splitAt,take,drop)
import DPackedString
import Take
import Drop

splitAt :: Int -> PackedString -> (PackedString, PackedString)
splitAt i p = (take i p, drop i p)
