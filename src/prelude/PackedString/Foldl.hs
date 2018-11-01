module NHC.PackedString where

import Prelude hiding (foldl)
import qualified Prelude (foldl)
import DPackedString
import UnpackPS

foldl :: (a -> Char -> a) -> a -> PackedString -> a
foldl f z = Prelude.foldl f z . unpackPS
