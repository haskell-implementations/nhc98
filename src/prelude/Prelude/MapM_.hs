module Prelude where

import Map
import CMonad
import Sequence_

mapM_           :: Monad m => (a -> m b) -> [a] -> m ()
mapM_ f as      =  sequence_ (map f as)
