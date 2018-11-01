module Prelude(Monad(..)) where

infixl 1 >>, >>=

class Monad m where
    (>>=)	:: m a -> (a -> m b) -> m b
    (>>)	:: m a -> m b -> m b
    return      :: a -> m a
    fail        :: String -> m a

    m >> k 	= m >>= \ _ -> k
    fail s      = error s

