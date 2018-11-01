module Prelude(Enum(..)) where

instance Enum () where
    fromEnum ()        = 0
    toEnum   n | n==0  = ()
    toEnum   n         = error ("Prelude.Enum_Prelude.Unit_toEnum on " ++ show n)

    enumFrom n        = [()]
    enumFromThen n n' = [()]
