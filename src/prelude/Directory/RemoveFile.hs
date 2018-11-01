module Directory (removeFile) where

import NHC.FFI
import Monad (when)

foreign import ccall unlink :: PackedString -> IO Int

removeFile :: FilePath -> IO ()
removeFile fp = do
  err <- unlink (toCString fp)
  when (err == -1)
       (do errno <- getErrNo
           throwIOError "removeFile" (Just fp) Nothing errno)
