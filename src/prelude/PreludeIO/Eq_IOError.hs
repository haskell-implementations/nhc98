module Prelude(Eq(..)) where

import DIOError
import NHC.DErrNo

instance Eq IOError where
  (IOError _ _ _ e)	== (IOError _ _ _ e')	=    e == e'
  (EOFError x _)	== (EOFError y _)	=    x == y
  (PatternError str)	== (PatternError str')	=  str == str'
  (UserError _ str)	== (UserError _ str')	=  str == str'
  _ == _ = False
