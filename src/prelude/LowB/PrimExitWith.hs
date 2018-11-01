module System where

import System
import NHC.Internal (IO(..))
import CExitWith

primExitWith code =
  IO ( \ world -> cExitWith code)
