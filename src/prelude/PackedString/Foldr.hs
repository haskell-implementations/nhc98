module NHC.PackedString where

import Prelude hiding (foldr)
import qualified Prelude (foldr)
import DPackedString
import UnpackPS

foldr :: (Char -> a -> a) -> a -> PackedString -> a
foldr f z = Prelude.foldr f z . unpackPS
