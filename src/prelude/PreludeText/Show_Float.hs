module Prelude (Show(..)) where

import Numeric(showSigned,showFloat)

instance Show Float where
  showsPrec   = showSigned showFloat
  showsType a = showString "Float"

