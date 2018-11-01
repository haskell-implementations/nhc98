{-
For this incorrectly typed program nhc gives a wrong and irritating
error message:

====================================
	Error after type deriving/checking:
Derived type for Main.f at 4:1 does not match due to:
    different contexts
Derived:(Prelude.Eq a) => (b -> (b -> Prelude.Bool))
Given  :(a -> (a -> Prelude.Bool))

The type variables in the context of the derived type actually refer
to the type variables in the given type.
-}


f :: a -> a -> Bool

f = (==)
