module Prelude(Enum(..)) where

import _EnumFromTo
import _EnumFromThen

instance Enum Ordering where
    fromEnum LT = 0
    fromEnum EQ = 1
    fromEnum GT = 2

    toEnum   0 = LT
    toEnum   1 = EQ
    toEnum   2 = GT

    enumFrom n        = _enumFromTo n 2
    enumFromThen n n' = _enumFromThen n n' 2

