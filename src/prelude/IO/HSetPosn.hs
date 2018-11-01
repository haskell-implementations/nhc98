module IO (hSetPosn) where

import DHandle
import DHandlePosn
import NHC.FFI


foreign import ccall hSetPosnC :: Handle -> ForeignPtr () -> IO Int

hSetPosn              :: HandlePosn -> IO () 
hSetPosn (HandlePosn h p) = do
    i <- hSetPosnC h p
    if i/=0 then do
        errno <- getErrNo
        throwIOError "hSetPosn" Nothing (Just h) errno
      else
        return ()

