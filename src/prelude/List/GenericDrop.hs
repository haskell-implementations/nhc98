module List where

genericDrop             :: (Integral i) => i -> [a] -> [a]
genericDrop 0 xs        =  xs
genericDrop _ []        =  []
genericDrop n (_:xs) | n > 0  =  genericDrop (n-1) xs
genericDrop _ _         =  error "List.genericDrop: negative argument"
