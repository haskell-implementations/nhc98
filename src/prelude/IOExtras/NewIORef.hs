module NHC.IOExtras
  ( newIORef
  ) where

import DIORef
import LowVector
import _E

newIORef :: a -> IO (IORef a)
newIORef a = do v <- primNewVectorC 1 (_E a)
                return (IORef v)

