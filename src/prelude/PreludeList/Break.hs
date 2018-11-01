module Prelude where

break :: (a -> Bool) -> [a] -> ([a], [a])
break p = span (not . p)
