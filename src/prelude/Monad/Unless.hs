module Monad where

import When

unless           :: (Monad m) => Bool -> m () -> m ()
unless p s       =  when (not p) s
