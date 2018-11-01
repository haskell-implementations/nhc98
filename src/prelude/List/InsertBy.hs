module List where

insertBy                :: (a -> a -> Ordering) -> a -> [a] -> [a]
insertBy cmp x []       =  [x]
insertBy cmp x ys@(y:ys') 
                        =  case cmp x y of
                           GT -> y : insertBy cmp x ys'
                           _  -> x : ys
