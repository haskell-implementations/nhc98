module Prelude(Enum(..)) where

import _EnumFromTo
import _EnumFromThen


instance Enum Bool where
    fromEnum   False = 0
    fromEnum   True  = 1

    toEnum   0 = False
    toEnum   1 = True
    toEnum   n = error ("(Prelude.toEnum "++show n++" :: Bool) is wrong")

    enumFrom n        = _enumFromTo  n 1
    enumFromThen n n' = _enumFromThen n n' 1
