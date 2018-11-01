module List where

import Delete

infix 5 \\ 	-- comment is to protect trailing backslash from gcc >= 3.3

-- list difference (non-associative).  In the result of xs \\ ys,
-- the first occurrence of each element of ys in turn (if any)
-- has been removed from xs.  This (xs ++ ys) \\ xs == ys.
(\\)                    :: (Eq a) => [a] -> [a] -> [a]
(\\)                    =  foldl (flip delete)
