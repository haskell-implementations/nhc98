{-
nhc13 fails with:

/grp/haskell/york-nhc/lib/IRIX/nhc13comp: Error: Can't find int for (Prelude._undef, Identifier)
-}

data Test = Test {dummy :: Bool}

main :: IO ()
main = print (case Test {} of Test {} -> True)
