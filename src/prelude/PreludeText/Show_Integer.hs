module Prelude (Show(..)) where

import Numeric(showSigned,showInt)

instance Show Integer where
  showsPrec = showSigned showInt
  showsType a = showString "Integer"

