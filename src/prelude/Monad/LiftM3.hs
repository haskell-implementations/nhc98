module Monad where

liftM3      :: Monad m => (a->b->c->d) -> (m a -> m b -> m c -> m d)
liftM3 f     = \a b c -> do a' <- a
                            b' <- b
                            c' <- c
                            return (f a' b' c')
