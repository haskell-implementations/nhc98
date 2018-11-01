{-
Nhc performs no kind check in type definitions.
So it accepts the following program although it is wrong as Hugs states:
Reading file "nhc98test19.hs":
ERROR "nhc98test19.hs" (line 6): Illegal type "WrongFix PreNat" in constructor application
-}

newtype WrongFix f = Fold [f]

data PreNat r = Zero | Succ r

type Nat = WrongFix PreNat

main = print "Test"