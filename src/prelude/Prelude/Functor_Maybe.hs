module Prelude(Functor(..)) where

import CFunctor

instance  Functor Maybe  where
    fmap f Nothing       = Nothing
    fmap f (Just x)      = Just (f x)
