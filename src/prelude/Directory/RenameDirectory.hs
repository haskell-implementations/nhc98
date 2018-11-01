module Directory (renameDirectory) where

import NHC.FFI
import Monad (when)

foreign import noproto rename :: PackedString -> PackedString -> IO Int

renameDirectory :: FilePath -> FilePath -> IO ()
renameDirectory fp1 fp2 = do
  err <- rename (toCString fp1) (toCString fp2)
  when (err == -1)
       (do errno <- getErrNo
           throwIOError ("renameDirectory to \""++fp2++"\"")
                        (Just fp1) Nothing errno)
