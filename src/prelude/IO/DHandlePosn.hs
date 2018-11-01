module IO(HandlePosn(..)) where

import NHC.FFI (ForeignPtr)
import DHandle

data HandlePosn = HandlePosn Handle (ForeignPtr ())
