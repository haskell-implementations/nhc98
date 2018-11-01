module NHC.PackedString where

import Prelude hiding(tail,substr,length)
import DPackedString
import Substr
import Length

tail :: PackedString -> PackedString
tail p = substr p 1 (length p)
