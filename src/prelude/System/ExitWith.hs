module System where

import System
import LowSystem(primExitWith)

exitWith                :: ExitCode -> IO a
exitWith code = primExitWith code
