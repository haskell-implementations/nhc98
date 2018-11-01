module System(Ord(..)) where

import DExitCode
import Eq_ExitCode

instance Ord ExitCode where
  compare ExitSuccess     ExitSuccess     = EQ
  compare ExitSuccess     (ExitFailure b) = LT
  compare (ExitFailure a) ExitSuccess     = GT
  compare (ExitFailure a) (ExitFailure b) = compare a b

