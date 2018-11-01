module System where

import NHC.FFI
import DExitCode

foreign import ccall "system" primSystem :: PackedString -> IO Int

system :: String -> IO ExitCode
system cmd = do
    val <- primSystem (toCString cmd)
    if val == -1 || val == 127 then do
        errno <- getErrNo
        throwIOError ("system \""++cmd++"\"") Nothing Nothing errno
      else if val==0 then
        return ExitSuccess
      else
        return (ExitFailure val)

