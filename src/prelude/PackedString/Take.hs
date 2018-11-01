module NHC.PackedString where

import Prelude hiding(take,substr,length)
import DPackedString
import Substr
import Length

take :: Int -> PackedString -> PackedString
take i p = substr p 0 (i `min` length p)
