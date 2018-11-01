module Directory (createDirectory) where

import NHC.FFI
import Numeric (readOct)
import Monad   (when)

foreign import ccall mkdir :: PackedString -> Int -> IO Int

createDirectory :: FilePath -> IO ()
createDirectory fp = do
    val <- mkdir (toCString fp) (octal "0755")
    when (val == -1)
         (do errno <- getErrNo
             throwIOError "createDirectory" (Just fp) Nothing errno)


octal :: String -> Int
octal s = case readOct s of
            [(num,"")] -> num
            _          -> 0
