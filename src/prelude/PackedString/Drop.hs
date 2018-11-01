module NHC.PackedString where

import Prelude hiding(drop,length,substr)
import DPackedString
import Length
import Substr

drop :: Int -> PackedString -> PackedString
drop i p = let l = length p in substr p (i `min` l) l
