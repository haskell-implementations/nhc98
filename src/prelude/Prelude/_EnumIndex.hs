module Prelude where

import _FromEnum
import _EnumInRange

_enumIndex :: String -> (a,a) -> a -> Int
_enumIndex msg b@(c,c') ci
   | _enumInRange b ci = _fromEnum ci - _fromEnum c
   | True              = error ("Ix." ++ msg ++ ".index: Index out of range.")
