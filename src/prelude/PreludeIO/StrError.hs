module Prelude (strError) where

import NHC.FFI
import NHC.DErrNo

foreign import ccall "strerror" primStrError :: Int -> PackedString

strError :: ErrNo -> String
strError e = fromCString (primStrError (fromEnum e))
