module System where

import NHC.FFI

foreign import ccall primGetEnv  :: PackedString -> IO (Ptr Char)
foreign import cast  ptrToString :: (Ptr Char) -> PackedString

getEnv                    :: String -> IO String
getEnv symbol = do
    ptr <- primGetEnv (toCString symbol)
    if ptr==nullPtr then do
        errno <- getErrNo
        throwIOError ("getEnv \""++symbol++"\"") Nothing Nothing errno
      else do
        return (fromCString (ptrToString ptr))

