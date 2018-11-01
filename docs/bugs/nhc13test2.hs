-- Precursor to nhc13test3.

class Test q where
   test :: q a
   test3 :: q a -> Bool

class Test q => Test2 q where
   test2 :: q a

data Data a = Nil

instance Test Data where
   test = Nil
   test3 q = True

instance Test2 Data where
   test2 = Nil

data T a = Single a | Other (T a)

f :: (Eval a,Test2 q) => T a -> q a
f (Other t) = test3 q `seq` q
   where q = f t
f (Single a) = test

main = print (case (f (Other (Single True)) :: Data Bool) of Nil -> True)
