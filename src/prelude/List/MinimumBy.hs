module List where

minimumBy               :: (a -> a -> Ordering) -> [a] -> a
minimumBy cmp []        =  error "List.minimumBy: empty list"
minimumBy cmp xs        =  foldl1 min xs
	                       where min x y = case cmp x y of
                                                  GT -> y
                                                  _  -> x
