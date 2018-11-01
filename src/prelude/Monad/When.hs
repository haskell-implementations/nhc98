module Monad where

when             :: (Monad m) => Bool -> m () -> m ()
when p s         =  if p then s else return ()
