module Prelude(Monad(..)) where

import CMonad

instance Monad Maybe where
    (Just x) >>= k	= k x
    Nothing  >>= k	= Nothing
    return		= Just
    fail s              = Nothing

