module NHC.IOExtras where

import DHandle
import NHC.FFI

foreign import ccall "hPutBufC" hPutBufC :: Handle -> Ptr a -> Int -> IO Int
foreign import ccall "hGetBufC" hGetBuf  :: Handle -> Ptr a -> Int -> IO Int

hPutBuf h p i = hPutBufC h p i >> return ()

