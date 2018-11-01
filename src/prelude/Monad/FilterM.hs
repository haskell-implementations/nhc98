module Monad where

filterM          :: Monad m => (a -> m Bool) -> [a] -> m [a]
filterM p []      = return []
filterM p (x:xs)  = do b <- p x
                       ys <- filterM p xs
                       return (if b then (x:ys) else ys)
