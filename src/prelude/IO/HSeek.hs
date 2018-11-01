module IO (hSeek) where

import SeekMode
import DHandle
import NHC.FFI


foreign import ccall hSeekC :: Handle -> Int -> Integer -> IO Int

hSeek                 :: Handle -> SeekMode -> Integer -> IO () 
hSeek h s i = do
    x <- hSeekC h (fromEnum s) i
    if x/=0 then do
        errno <- getErrNo
        throwIOError ("hSeek "++show s++" "++show i) Nothing (Just h) errno
      else
        return ()

