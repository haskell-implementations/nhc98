module IO (hIsEOF) where

import DHandle

foreign import ccall "hIsEOF" hIsEOFC :: ForeignObj -> IO Bool

hIsEOF :: Handle -> IO Bool
hIsEOF (Handle h) = hIsEOFC h

