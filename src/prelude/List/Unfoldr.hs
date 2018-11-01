module List where

unfoldr      :: (b -> Maybe (a,b)) -> b -> [a]
unfoldr f b   = case (f b) of
                    Nothing      -> []
                    (Just (a,b)) -> a : unfoldr f b

