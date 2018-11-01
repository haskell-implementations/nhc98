module Directory (getCurrentDirectory) where

import NHC.FFI
import Monad

foreign import ccall getcwd        :: Addr -> Int -> IO Addr
foreign import cast  addrToCString :: Addr -> PackedString

getCurrentDirectory :: IO FilePath
getCurrentDirectory = do
  a <- getcwd nullAddr 1024
  when (a == nullAddr)
       (do errno <- getErrNo
           throwIOError "getCurrentDirectory" (Just (show a)) Nothing errno)
  return (fromCString (addrToCString a))
