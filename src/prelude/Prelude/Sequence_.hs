module Prelude where

sequence_ 	:: Monad m => [m a] -> m ()
sequence_	= foldr (>>) (return ())
