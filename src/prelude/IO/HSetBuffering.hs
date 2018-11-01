module IO (hSetBuffering) where

import DHandle
import BufferMode
import NHC.FFI


foreign import ccall hSetBufferingC :: Handle -> BufferMode -> IO Int

hSetBuffering         :: Handle  -> BufferMode -> IO ()
hSetBuffering h b = do
    x <- hSetBufferingC h b
    if x/=0 then do
        errno <- getErrNo
        throwIOError ("hSetBuffering "++show b) Nothing (Just h) errno
      else
        return ()

