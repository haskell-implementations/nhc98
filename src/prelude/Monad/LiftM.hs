module Monad where

liftM      :: Monad m => (a->b) -> (m a -> m b)
liftM f     = \a-> do a' <- a
                      return (f a')
