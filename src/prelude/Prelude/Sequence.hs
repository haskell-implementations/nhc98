module Prelude where

sequence 	:: Monad m => [m a] -> m [a]
sequence	= foldr mcons (return [])
		  where mcons p q = p >>= \x -> q >>= \y -> return (x:y)
