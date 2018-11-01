-- FIXED.

{- Heap should not grow.  With nhc13:

nhc13test8 10000

runs out of space.  Whereas with hbc even:

nhc13test8 -H32K 50000

does not.  Also, do a heap profile and see it ramp. -}

import System(getArgs)

data Test = Test !Int

f :: Test -> Int -> Test
f (Test n) i = Test (n+i)

g :: Test -> Int
g (Test n) = n

sfoldl :: Eval a => (a -> b -> a) -> a -> [b] -> a
sfoldl f z [] = z
sfoldl f z (x:xs) = sfoldl f fzx (fzx `seq` xs)
                  where fzx = f z x

main = do argv <- getArgs
          print (g (sfoldl f (Test 0) [1..(read (argv!!0))]))
