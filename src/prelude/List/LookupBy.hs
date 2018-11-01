module List where

lookupBy                :: (a -> a -> Bool) -> a -> [(a, b)] -> Maybe b
lookupBy eq key []      =  Nothing
lookupBy eq key ((x,y):xys)
    | key `eq` x        =  Just y
    | otherwise         =  lookupBy eq key xys
