-- FIXED.

{- Problem with seq.  Defining strict foldl as in sfoldl1 gives a
bizarre result (apparently, 0+1 = 268437264) whereas the second
definition gives the expected result (0+1 = 1, thankfully).  Something
to do with seq returning a function in the first example?  Both are
constructed to avoid HBC's habit of evaluating the second argument
before returning it which can build up a huge heap if used in a
certain way (which the obvious definition of sfoldl:

sfoldl :: Eval a => (a -> b -> a) -> a -> [b] -> a
sfoldl f z [] = z
sfoldl f z (x:xs) = fzx `seq` sfoldl1 f fzx xs
                  where fzx = f z x

does). -}

sfoldl1 :: Eval a => (a -> b -> a) -> a -> [b] -> a
sfoldl1 f z [] = z
sfoldl1 f z (x:xs) = (fzx `seq` sfoldl1 f fzx) xs
                   where fzx = f z x

sfoldl2 :: Eval a => (a -> b -> a) -> a -> [b] -> a
sfoldl2 f z [] = z
sfoldl2 f z (x:xs) = sfoldl2 f fzx (fzx `seq` xs)
                   where fzx = f z x

main = print ((sfoldl1 (+) 0 ([1]::[Int])),
              (sfoldl2 (+) 0 ([1]::[Int])))
