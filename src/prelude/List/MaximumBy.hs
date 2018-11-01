module List where

maximumBy               :: (a -> a -> Ordering) -> [a] -> a
maximumBy cmp []        =  error "List.maximumBy: empty list"
maximumBy cmp xs        =  foldl1 max xs
			     where max x y = case cmp x y of
                                                  GT -> x
                                                  _  -> y
