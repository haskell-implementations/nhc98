module Prelude where

import _FromEnum
import _EnumFromTo

_enumRange :: (a,a) -> [a]
_enumRange (n,m) = _enumFromTo' (_fromEnum n) (_fromEnum m)
