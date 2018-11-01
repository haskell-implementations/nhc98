module Monad where

import LiftM2

ap   :: Monad m => m (a->b) -> m a -> m b
ap    = liftM2 ($)
