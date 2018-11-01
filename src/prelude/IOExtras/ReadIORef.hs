module NHC.IOExtras
  ( readIORef
  ) where

import DIORef
import LowVector

readIORef :: IORef a -> IO a
readIORef (IORef v) = do primVectorIndexC v 0

