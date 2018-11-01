module Prelude where

import _ToEnum

_enumFromToInc :: Int -> Int -> Int -> [a]
_enumFromToInc n s m =
  case compare n m of
    LT -> _toEnum n : _enumFromToInc (n+s) s m
    EQ -> [_toEnum n]
    GT -> []

