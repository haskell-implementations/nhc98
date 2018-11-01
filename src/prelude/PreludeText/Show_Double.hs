module Prelude (Show(..)) where

import Numeric(showSigned,showFloat)

instance Show Double where
  showsPrec   = showSigned showFloat
  showsType a = showString "Double"

