module Prelude where

import _ToEnum

_enumFromToDec :: Int -> Int -> Int -> [a]
_enumFromToDec n s m =
  case compare n m of
    LT -> []
    EQ -> [_toEnum n]
    GT -> _toEnum n : _enumFromToDec (n+s) s m
