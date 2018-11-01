module List where

-- partition takes a predicate and a list and returns a pair of lists:
-- those elements of the argument list that do and do not satisfy the
-- predicate, respectively; i,e,,
--
-- partition p xs == (filter p xs, filter (not . p) xs).

partition               :: (a -> Bool) -> [a] -> ([a],[a])
partition p xs          =  foldr select ([],[]) xs
                           where select x ~(ts,fs) | p x       = (x:ts,fs)
                                                   | otherwise = (ts, x:fs)
