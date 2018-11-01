module Char where

import Ord
import IsDigit

digitToInt     :: Char -> Int
digitToInt c
  | isDigit c             = ord c - ord '0'
  | c >= 'a' && c <= 'f'  = ord c - ord 'a' + 10
  | c >= 'A' && c <= 'F'  = ord c - ord 'A' + 10
  | otherwise             = error "Char.digitToInt: not a digit"

