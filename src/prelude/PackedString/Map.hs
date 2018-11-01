module NHC.PackedString where

import Prelude hiding (map)
import qualified Prelude (map)
import DPackedString
import PackString
import UnpackPS

map :: (Char -> Char) -> PackedString -> PackedString
map f = packString . Prelude.map f . unpackPS
