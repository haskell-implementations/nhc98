module IO (hFileSize) where

import DHandle
import NHC.FFI

foreign import ccall primHFileSizeC :: Handle -> IO Integer

hFileSize :: Handle -> IO Integer
hFileSize h = do
    i <- primHFileSizeC h
    if i == -1 then do
        errno <- getErrNo
        throwIOError "hFileSize" Nothing (Just h) errno
      else
        return i

