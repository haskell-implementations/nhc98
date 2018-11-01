module List where

genericIndex             :: (Integral i) => [a] -> i -> a
genericIndex (x:_) 0      = x
genericIndex (_:xs) n
             | n > 0      = genericIndex xs (n-1)
             | otherwise  = error "List.genericIndex: negative argument"
genericIndex _ _          = error "List.genericIndex: index too large"

