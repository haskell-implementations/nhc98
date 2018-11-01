module NHC.PackedString where

import Prelude hiding(nil)
import DPackedString
import PackString

nil :: PackedString
nil = packString ""
