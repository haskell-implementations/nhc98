{-
This is a correct Haskell 98 program (checked with Hugs). But

nhc98    -c -o KindTest3.o KindTest3.hs

Fail: Couldn't find rhs of newtype: Main.Fix
Two conflicting datatype definitions?
-}

newtype Fix f = Fold (f (Fix f))
data PreNat r = Zero | Succ r
type Nat = Fix PreNat

zero = Fold Zero
one = Fold (Succ zero)

main = print "Test"
