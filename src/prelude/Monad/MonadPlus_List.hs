module Monad(MonadPlus(..)) where

import CMonadPlus

instance  MonadPlus []  where
    mzero  =  []
    mplus  =  (++)
