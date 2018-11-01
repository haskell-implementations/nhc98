module StateMonad (applyStateMonad,
                   readState, writeState, writeState_, innerMonad) where

import Control.Monad.State


type StateMonad s a = State s a

{-
newtype StateMonad s a = SM (s -> (s, a))

instance Monad (StateMonad s) where
    (SM x) >>= f     = SM $ \s -> let (s', v) = x s 
                                      (SM y) = f v
                                  in y s'
    return a         = SM $ \s -> (s, a)
-}


{- apply the state monad to a state to give a return value and new state -}

applyStateMonad :: StateMonad s a -> s -> (s, a)
applyStateMonad m x = (b,a)
    where (a,b) = runState m x

{- get the state from a monad -}

getState :: StateMonad s s
getState = get

{- set the state in the monad -}

setState :: s -> StateMonad s ()
setState = put

{- read the state -}

readState :: (s -> a) -> StateMonad s a
readState f = do s <- getState
                 return (f s)

{- write the state and return a value -}

writeState :: (s -> (s,a)) -> StateMonad s a
writeState f = do s <- getState
                  let (s',a) = f s
                  setState s'
                  return a

{- write the state without returning a value -}

writeState_ :: (s -> s) -> StateMonad s ()
writeState_ f = writeState (\s -> (f s, ()))

{- convert a state monad that changes it's output state to one that doesn't -}

innerMonad :: StateMonad s a -> StateMonad s (s, a)
innerMonad m = State $ \s -> let r = applyStateMonad m s
                             in (r, s)
