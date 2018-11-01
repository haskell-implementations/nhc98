module Prelude where

import _FromEnum
import _EnumFromToInc
import _EnumFromToDec

_enumFromThenTo :: a -> a -> Int -> [a]
_enumFromThenTo n n' m =
   let estep = _fromEnum n' - _fromEnum n
   in if estep >= 0 then
	  _enumFromToInc (_fromEnum n) estep m
      else
	  _enumFromToDec (_fromEnum n) estep m

