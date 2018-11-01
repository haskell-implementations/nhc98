{-
The program below compiles with nhc, but doesn't if the commented
line is uncommented. It doesn't compile with tracing at all.
It compiles with ghc though, with both versions: with and without
the typing in the comment...
-}
--------------------------------------------------------------------
data Test = Test Int

--default (Integer,Double,Test)

class TestClass a where
  method :: a -> Int

instance TestClass Test where
  method (Test i) = 2*i

-- f :: TestClass a => a -> Int
f :: TestClass a => a -> Int
f t = if (method t)==0 then (g t) else 3*(method t)

g :: TestClass b => b -> Int
g t = 4*(f t)

main = putStrLn (show (g (Test 2)))

