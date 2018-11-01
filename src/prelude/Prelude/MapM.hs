module Prelude where

import Map
import CMonad
import Sequence

mapM            :: Monad m => (a -> m b) -> [a] -> m [b]
mapM f as       =  sequence (map f as)

