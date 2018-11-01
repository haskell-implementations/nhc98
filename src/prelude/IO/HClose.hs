module IO (hClose,hCloseC) where

import DHandle
import NHC.FFI

foreign import ccall hCloseC :: ForeignObj -> IO ()

hClose                :: Handle -> IO () 
hClose (Handle f) = freeForeignObj f
--hClose (Handle f) = hCloseC f
