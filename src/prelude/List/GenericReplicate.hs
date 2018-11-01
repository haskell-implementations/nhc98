module List where

import GenericTake

genericReplicate        :: (Integral i) => i -> a -> [a]
genericReplicate n x    =  genericTake n (repeat x)
