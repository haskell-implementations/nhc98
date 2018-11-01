module Monad where

liftM4      :: Monad m => (a->b->c->d->e) -> (m a -> m b -> m c -> m d -> m e)
liftM4 f     = \a b c d -> do a' <- a
                              b' <- b
                              c' <- c
                              d' <- d
                              return (f a' b' c' d')
