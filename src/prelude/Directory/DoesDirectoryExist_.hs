module Directory (doesDirectoryExist) where

import NHC.GreenCard
import NHC.FFI



foreign import ccall hs_doesDirectoryExist :: PackedString -> IO Bool

doesDirectoryExist :: FilePath -> IO Bool
doesDirectoryExist tmp1 =
  do let fp = toCString tmp1
     hs_doesDirectoryExist fp


