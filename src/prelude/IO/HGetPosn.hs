module IO (hGetPosn) where

import DHandle
import DHandlePosn
import NHC.FFI

foreign import ccall hGetPosnC :: Handle -> IO (Ptr ())

hGetPosn              :: Handle -> IO HandlePosn
hGetPosn h = do
    p <- hGetPosnC h
    if p==nullPtr then do
        errno <- getErrNo
        throwIOError "hGetPosn" Nothing (Just h) errno
      else do
        f <- newForeignPtr finalizerFree p	-- (free p)  -- nullFunPtr
        return (HandlePosn h f)

