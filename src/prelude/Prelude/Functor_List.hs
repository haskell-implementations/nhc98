module Prelude(Functor(..)) where

import Map
import CFunctor

instance Functor [] where
    fmap = map
