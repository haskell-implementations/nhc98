module System(Eq(..)) where

import DExitCode

instance Eq ExitCode where
  ExitSuccess   == ExitSuccess    = True
  ExitFailure a == ExitFailure b  = a == b
  _             == _	          = False

