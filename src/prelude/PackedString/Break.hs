module NHC.PackedString where

import Prelude hiding(break,span)
import DPackedString
import Span

break :: (Char -> Bool) -> PackedString -> (PackedString, PackedString)
break f p = span (not . f) p
