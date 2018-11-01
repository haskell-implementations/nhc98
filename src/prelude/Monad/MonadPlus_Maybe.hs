module Monad(MonadPlus(..)) where

import CMonadPlus

instance  MonadPlus Maybe  where
    mzero  =  Nothing

    Nothing `mplus` ys       = ys
    xs      `mplus` ys       = xs



