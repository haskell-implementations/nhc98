-- FIXED.

{- A problem in translating do-notation into the equivalent form using
>>=, etc.  nhc13 fails to check if `[a]' is failure-free and complains
with the following internal compiler error:

/grp/haskell/mw-nhc13/lib/IRIX/nhc13comp: Error: No match in _nofail

Doing the translation by hand works fine (it's commented out below the
do-notation version).  Using `(a:_)' or `(a:[])' instead of `[a]' in
the do-notation makes it work fine also.

Hugs and HBC work fine. -}

list :: [[Bool]]
list = do [a] <- return [True]
          return [a]
{-
list = return [True] >>= \[a] ->
       return [a]
-}

main = print list
