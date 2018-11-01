module NHC.PackedString where

import Prelude hiding(append)
import DPackedString
import UnpackPS
import PackString

-- append p1 p2
-- appends two strings

append p1 p2 = packString (unpackPS p1 ++ unpackPS p2)

