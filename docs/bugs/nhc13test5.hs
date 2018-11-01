{-
Should result with: (hugs1.4 and hbc comply)
-------------------------------------------------------------------------------
(True,True,True)
-------------------------------------------------------------------------------
but nhc13 gives:
-------------------------------------------------------------------------------
(False, True, True)
-------------------------------------------------------------------------------

As of 20/11/97, now get core dumped...

-}

class Queue t where
   emptyQ :: t Int
newtype StrictNull a = StrictNull ()
instance Queue StrictNull where
   emptyQ = StrictNull ()

data Queue t => Test t = Test (t Int) Int

eg = newNode `seq` True
   where newNode = Test (emptyQ::(StrictNull Int)) 0

data Test2 = Test2 Int Int

eg2 = newNode `seq` True
   where newNode = Test2 0 0

eg3 = seq newNode $ True
   where newNode = Test (emptyQ::(StrictNull Int)) 0

main = print (eg,eg2,eg3)
