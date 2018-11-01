module List where

genericLength           :: (Integral i) => [b] -> i
genericLength []        =  0
genericLength (_:l)     =  1 + genericLength l


