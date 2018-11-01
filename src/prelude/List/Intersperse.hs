module List where

-- intersperse sep inserts sep between the elements of its list argument.
-- e.g. intersperse ',' "abcde" == "a,b,c,d,e"
intersperse             :: a -> [a] -> [a]
intersperse sep []      =  []
intersperse sep [x]     =  [x]
intersperse sep (x:xs)  =  x : sep : intersperse sep xs
