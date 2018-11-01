module Monad where

liftM2      :: Monad m => (a->b->c) -> (m a -> m b -> m c)
liftM2 f     = \a b -> do a' <- a
                          b' <- b
                          return (f a' b')
