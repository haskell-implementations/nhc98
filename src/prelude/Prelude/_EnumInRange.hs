module Prelude where

import _FromEnum

_enumInRange :: (a,a) -> a -> Bool
_enumInRange (c,c') ci =    _fromEnum c  <= _fromEnum ci
                         && _fromEnum ci <= _fromEnum c'
