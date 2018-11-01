module NHC.FFI 
  ( getErrNo
  , mkIOError
  , throwIOError
  ) where

import NHC.DErrNo
import DIOError
import IO (Handle)

foreign import ccall getErrNo :: IO Int

mkIOError :: String -> Maybe FilePath -> Maybe Handle -> Int -> IOError
mkIOError str mf mh err = IOError str mf mh (toEnum err)

throwIOError :: String -> Maybe FilePath -> Maybe Handle -> Int -> IO a
throwIOError str mf mh err = ioError (mkIOError str mf mh err)
