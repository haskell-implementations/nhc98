module System(Show(..)) where

import DExitCode

instance Show ExitCode where
  showsPrec p ExitSuccess = showString "ExitSuccess"
  showsPrec p (ExitFailure a) = showParen (p >= 10) (showString "ExitFailure " . showsPrec 10 a)

  showsType a = showString "ExitCode"
