module Monad where

join             :: (Monad m) => m (m a) -> m a
join x           = x >>= id
