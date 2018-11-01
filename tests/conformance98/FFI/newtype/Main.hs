module Main where

import NHC.PackedString
import NHC.FFI

newtype File           = F Addr deriving Show
newtype FileDescriptor = FD File deriving Show

foreign import noproto fopen :: PackedString -> PackedString -> IO FileDescriptor

--foreign import fopen :: String -> String -> IO FileDescriptor

main = do
  putStrLn "before fopen"
  fd <- fopen (packString "test") (packString "rw")
  --(FD fd) <- fopen (packString "test") (packString "rw")
  --(FD fd) <- fopen ("test") ("rw")
  putStrLn "after fopen"
  putStrLn ("result is "++show fd)
  putStrLn "done."
