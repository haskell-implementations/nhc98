module NHC.PackedString where

import Prelude hiding (filter)
import qualified Prelude (filter)
import DPackedString
import PackString
import UnpackPS

filter :: (Char -> Bool) -> PackedString -> PackedString
filter p = packString . Prelude.filter p . unpackPS
