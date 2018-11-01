module NHC.PackedString where

import Prelude hiding (unlines)
import qualified Prelude (unlines)
import DPackedString
import PackString
import UnpackPS

unlines :: [PackedString] -> PackedString
unlines = packString . Prelude.unlines . map unpackPS
