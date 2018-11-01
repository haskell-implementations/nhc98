module NHC.PackedString where

import Prelude hiding(null,length)
import DPackedString
import Length

null :: PackedString -> Bool
null p = length p == 0
