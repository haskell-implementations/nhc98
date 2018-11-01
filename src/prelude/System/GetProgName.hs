module System where

import NHC.FFI

foreign import ccall primGetProgName :: IO PackedString

getProgName             :: IO String
getProgName = primGetProgName >>= return . fromCString

