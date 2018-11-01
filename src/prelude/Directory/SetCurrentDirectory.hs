module Directory (setCurrentDirectory) where

import NHC.FFI
import Monad (when)

foreign import ccall chdir :: PackedString -> IO Int

setCurrentDirectory :: FilePath -> IO ()
setCurrentDirectory fp = do
  err <- chdir (toCString fp)
  when (err == -1)
       ( do errno <- getErrNo
            throwIOError "setCurrentDirectory" (Just fp) Nothing errno)
