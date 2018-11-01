module Prelude where

import _FromEnum
import _EnumFromToInc
import _EnumFromToDec

_enumFromThen :: a -> a -> Int -> [a]
_enumFromThen n n' m =
   let step = _fromEnum n' - _fromEnum n
   in if step >= 0 then
	  _enumFromToInc (_fromEnum n) step m
      else
	  _enumFromToDec (_fromEnum n) step 0

