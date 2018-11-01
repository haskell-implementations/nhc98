module Prelude where

infixr 1  =<<

(=<<)          :: Monad m => (a -> m b) -> m a -> m b
f =<< x         =  x >>= f
