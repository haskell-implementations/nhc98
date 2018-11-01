module NHC.PackedString where

import Prelude hiding (cons)
import DPackedString
import PackString
import UnpackPS

cons :: Char -> PackedString -> PackedString
cons c p = packString (c : unpackPS p)
