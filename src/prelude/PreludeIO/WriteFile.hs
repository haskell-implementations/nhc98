module Prelude(writeFile) where

import IO
import TFilePath

writeFile :: FilePath -> String -> IO ()
writeFile fp str =
  openFile fp WriteMode >>= \ handle ->
  mapM_ (hPutChar handle) str >>
  hClose handle
