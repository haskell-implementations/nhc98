module List where

mapAccumR               :: (a -> b -> (a, c)) -> a -> [b] -> (a, [c])
mapAccumR f s []        =  (s, [])
mapAccumR f s (x:xs)    =  (s2, z:zs)
                           where (s2, z ) = f s1 x
                                 (s1, zs) = mapAccumR f s xs

