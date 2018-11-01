module Monad where

import CMonadPlus

guard		:: MonadPlus m => Bool -> m ()
guard p		= if p then return () else mzero
