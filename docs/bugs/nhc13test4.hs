{- Unexpected behaviour from nhc though debatable as to the "correct"
behaviour.  nhc treats "xs" as a function, not a caf, because it
requires a context.  As a result, it runs in constant space whereas
hugs and hbc run in linear space. -}

default (Int)

walk :: [a] -> ()
walk [] = ()
walk (x:xs) = walk xs

main = print (seq (walk xs) (seq x True))
   where xs = [1..10000]
         x = last xs
