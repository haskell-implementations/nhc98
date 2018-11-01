module IO (hFlush) where

import DHandle
import NHC.FFI

foreign import ccall hFlushC :: Handle -> IO Int

hFlush :: Handle -> IO ()
hFlush h = do
    i <- hFlushC h
    if i/=0 then do
        errno <- getErrNo
        throwIOError "hFlush" Nothing (Just h) errno
      else
        return ()

