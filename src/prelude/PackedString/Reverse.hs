module NHC.PackedString where

import Prelude hiding (reverse)
import qualified Prelude (reverse)
import DPackedString
import PackString
import UnpackPS

reverse :: PackedString -> PackedString
reverse = packString . Prelude.reverse . unpackPS
