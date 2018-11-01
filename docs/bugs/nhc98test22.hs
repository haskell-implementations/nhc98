{-
This is a correct Haskell 98 program (checked with Hugs). But

nhc98    -c -o KindTest4.o KindTest4.hs

====================================
        Error after type deriving/checking:
Type error type clash between Main.PreNat and type application
when trying to apply function at 20:7 to its 1:st argument at 12:13.

Type error type clash between Main.PreNat and type application
when trying to apply function at 19:8 to its 1:st argument at 11:13.
-}

data Fix f = Fold (f Fix f)
data PreNat r = Zero | Succ r
type Nat = Fix PreNat

zero = Fold Zero
one = Fold (Succ zero)

main = print "Test"
