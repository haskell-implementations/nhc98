module NHC.PackedString(
    PackedString
   ,primComparePS
   ,unpackPS
   ,packString
   ,index
   ,length
   ) where

import Prelude hiding(Ix(range,index,inRange),length)
import DPackedString(PackedString)
import PrimComparePS
import PrimUnpackPS
import PrimPackString
import PrimIndex
import PrimLength
