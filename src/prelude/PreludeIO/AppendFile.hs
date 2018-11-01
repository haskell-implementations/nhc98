module Prelude(appendFile) where

import IO

appendFile :: FilePath -> String -> IO ()
appendFile fp str =
  openFile fp AppendMode >>= \ handle ->
  mapM_ (hPutChar handle) str >>
  hClose handle
