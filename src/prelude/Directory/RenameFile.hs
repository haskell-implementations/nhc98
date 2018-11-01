module Directory (renameFile) where

import RenameDirectory

renameFile :: FilePath -> FilePath -> IO ()
renameFile fp1 fp2 = renameDirectory fp1 fp2

