module Prelude where

import _FromEnum
import _ToEnum

_enumFromTo :: a -> Int -> [a]
_enumFromTo n m = _enumFromTo' (_fromEnum n) m

_enumFromTo' :: Int -> Int -> [a]
_enumFromTo' n m =
  case compare n m of
    LT -> _toEnum n : _enumFromTo' (n+1) m
    EQ -> [_toEnum n]
    GT -> []

