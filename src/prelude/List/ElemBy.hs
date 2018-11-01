module List where

elemBy        :: (a -> a -> Bool) -> a -> [a] -> Bool
elemBy eq _ []          =  False
elemBy eq x (y:ys)      =  x `eq` y || elemBy eq x ys
