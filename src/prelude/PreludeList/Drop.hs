module Prelude where

drop			:: Int -> [a] -> [a]
drop n xs | n<=0         = xs
drop _ []                = []
drop n (x:xs)            = drop (n-1) xs

