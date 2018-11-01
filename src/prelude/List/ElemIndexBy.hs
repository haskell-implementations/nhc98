module List where

elemIndexBy             :: (a -> a -> Bool) -> [a] -> a -> Int
elemIndexBy eq [] x      = error "List.elemIndexBy: empty list"
elemIndexBy eq (x:xs) x' = if x `eq` x' then 0 else 1 + elemIndexBy eq xs x'

