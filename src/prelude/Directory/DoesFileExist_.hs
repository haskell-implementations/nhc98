module Directory (doesFileExist) where

import NHC.GreenCard



foreign import ccall hs_doesFileExist :: PackedString -> IO Bool

doesFileExist :: FilePath -> IO Bool
doesFileExist tmp1 =
  do let fp = toCString tmp1
     hs_doesFileExist fp


