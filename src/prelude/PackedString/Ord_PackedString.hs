module NHC.PackedString(Ord(..)) where

import DPackedString
import Eq_PackedString
import PrimComparePS(primComparePS)

instance Ord PackedString where
    compare p1 p2 = primComparePS p1 p2
