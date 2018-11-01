module List where

genericTake             :: (Integral i) => i -> [a] -> [a]
genericTake 0 _         =  []
genericTake _ []        =  []
genericTake n (x:xs) | n > 0  =  x : genericTake (n-1) xs
genericTake _  _        =  error "List.genericTake: negative argument"

