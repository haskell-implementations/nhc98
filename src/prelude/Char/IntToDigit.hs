module Char where

import Chr
import Ord
import IsDigit

intToDigit     :: Int -> Char
intToDigit i
  | i >= 0 && i <= 9    = chr (ord '0' + i)
  | i >= 10 && i <= 15  = chr (ord 'a' + i - 10)
  | otherwise           = error "Char.intToDigit: not a digit"

