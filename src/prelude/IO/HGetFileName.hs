module IO (hGetFileName) where

import DHandle
import NHC.FFI

foreign import ccall hGetFileNameC :: Handle -> PackedString
hGetFileName h = Just (fromCString (hGetFileNameC h))

