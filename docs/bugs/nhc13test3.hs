{- Unsure what should happen here...  hbc compiles and runs both
versions whereas nhc13 fails to compile either (version 1 is a strict
subset of version 2):

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
====================================
        Error after type deriving/checking:
No default for  Main.Test at 51:1.(209,[(158, 214)])
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

unless the default declaration is restored, whence both compile and
run.  Note that hbc complains if the default declaration is
restored:

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
Errors:
"nhc13test3.hs", line 0, [38] Bad defaults: Data

Compilation aborted
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

this is presumably because the Haskell report says:

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
Ambiguities in the class Num are most common, so Haskell provides
another way to resolve them---with a default declaration:

default (t1 , ... , tn) 

where n>=0, and each ti must be a monotype for which Num ti holds.
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

and Data is clearly not a monotype, nor in Num.
-}


-- Version 1
class Test q where
   test2Bool :: q a -> Bool

--default (Data)

data Data a = Nil

instance Test Data where
   test2Bool q = True

data T a = Single a | Other (T a)

f :: Test q => T a -> q a
f (Other t) = test2Bool q `seq` q
   where q = f t

main = print True

{-
-- Version 2
class Test q where
   test :: q a
   test2Bool :: q a -> Bool

--default (Data)

data Data a = Nil

instance Test Data where
   test = Nil
   test2Bool q = True

data T a = Single a | Other (T a)

f :: Test q => T a -> q a
f (Single a) = test
f (Other t) = test2Bool q `seq` q
   where q = f t

main = print (case (f (Other (Single True)) :: (Data Bool)) of Nil -> True)
-}
