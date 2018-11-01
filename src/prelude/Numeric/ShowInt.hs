module Numeric where

import ShowIntBase
import Char (intToDigit)

showInt	:: (Integral a) => a -> ShowS
showInt = showIntAtBase 10 intToDigit

