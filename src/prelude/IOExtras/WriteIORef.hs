module NHC.IOExtras
  ( writeIORef
  ) where

import DIORef
import LowVector
import _E

writeIORef :: IORef a -> a -> IO ()
writeIORef (IORef v) a = do primUpdateVectorC 0 (_E a) v

