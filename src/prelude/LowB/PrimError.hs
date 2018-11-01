module Prelude where

import System
import NonStdTrace
import CExitWith

primError :: String -> a
primError xs = trace (xs++"\n") (cExitWith (ExitFailure (negate 1)))
