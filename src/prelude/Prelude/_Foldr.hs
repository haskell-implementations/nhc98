module Prelude where
 
-- NOTE: arguments in unusual order!
_foldr :: (a -> b -> b) -> [a] -> b -> b
_foldr f [] d = d
_foldr f ((:) x xs) d = f x (_foldr f xs d)
