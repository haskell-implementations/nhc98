-- FIXED.

{-
Should not give an internal error on compilation.

nhc13 reports:
-------------------------------------------------------------------------------
/grp/haskell/mw-nhc13/lib/IRIX/nhc13comp: Error: Internal: CtxsSimplify expanded the type synonym (187 39) to (187 39)
Internal: expected a type constructor
-------------------------------------------------------------------------------
whereas hbc reports:
-------------------------------------------------------------------------------
Errors:
"nhc13test6.hs", line 11, [102] No instance Prelude.Num (a2979 Int) in  Prelude.fromInteger 0I
 in newNode in eg

Compilation aborted
-------------------------------------------------------------------------------
and hugs1.4 reports:
-------------------------------------------------------------------------------
Reading file "nhc13test6.hs":
Type checking      
ERROR "nhc13test6.hs" (line 9): a Int is not an instance of class "Num"
-------------------------------------------------------------------------------
-}

class Queue t where
   emptyQ :: t Int
newtype StrictNull a = StrictNull ()
instance Queue StrictNull where
   emptyQ = StrictNull ()

data Queue t => Test t = Test (t Int)

eg = newNode `seq` True
   where newNode = Test 0

main = print eg
