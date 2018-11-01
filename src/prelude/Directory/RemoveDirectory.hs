module Directory (removeDirectory) where

import NHC.FFI
import Monad (when)

foreign import ccall rmdir :: PackedString -> IO Int

removeDirectory :: FilePath -> IO ()
removeDirectory fp = do
    err <- rmdir (toCString fp)
    when (err == -1)
         (do errno <- getErrNo
             throwIOError "removeDirectory" (Just fp) Nothing errno)
