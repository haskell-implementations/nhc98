module Monad where

liftM5      :: Monad m => (a->b->c->d->e->f) ->
                          (m a -> m b -> m c -> m d -> m e -> m f)
liftM5 f     = \a b c d e -> do a' <- a
                                b' <- b
                                c' <- c
                                d' <- d
                                e' <- e
                                return (f a' b' c' d' e')
