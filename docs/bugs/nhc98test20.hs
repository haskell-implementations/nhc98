{-
This is a correct Haskell 98 program (checked with Hugs). But

nhc98    -c -o KindTest2.o KindTest2.hs

Fail: Couldn't find rhs of newtype: Main.T
Two conflicting datatype definitions?
-}

newtype T a = C a

main = print "Test"
