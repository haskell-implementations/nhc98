module NHC.PackedString(Eq(..)) where

import DPackedString
import PrimComparePS(primComparePS)

instance Eq PackedString where
    p1 == p2 = primComparePS p1 p2 == EQ
    p1 /= p2 = primComparePS p1 p2 /= EQ
