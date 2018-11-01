module List where

-- subsequences xs returns the list of all subsequences of xs.
-- e.g., subsequences "abc" == ["","c","b","bc","a","ac","ab","abc"]
subsequences            :: [a] -> [[a]]
subsequences []         =  [[]]
subsequences (x:xs)     =  subsequences xs ++ map (x:) (subsequences xs)
