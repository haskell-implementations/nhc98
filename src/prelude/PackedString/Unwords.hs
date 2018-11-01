module NHC.PackedString where

import Prelude hiding (unwords)
import qualified Prelude (unwords)
import DPackedString
import PackString
import UnpackPS

unwords :: [PackedString] -> PackedString
unwords = packString . Prelude.unwords . map unpackPS
