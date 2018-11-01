module NHC.PackedString(Show(..)) where

import DPackedString
import UnpackPS

instance Show PackedString where
    showsPrec p ps = showString (unpackPS ps)
    showsType _ = showString "PackedString"
