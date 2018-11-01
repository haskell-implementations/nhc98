module Monad where

import CMonadPlus

msum      :: MonadPlus m => [m a] -> m a
msum xs    =  foldr mplus mzero xs

