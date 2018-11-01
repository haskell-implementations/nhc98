module IO (hGetBuffering) where

import DHandle
import BufferMode

foreign import ccall "hGetBufferingC" hGetBuffering :: Handle -> IO BufferMode

