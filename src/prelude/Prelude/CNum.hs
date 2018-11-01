module Prelude where

infixl 7  *
infixl 6  +
prefix negate 6 -   -- WARNING Not standard Haskell

-- Numeric classes

class  (Eq a, Show a) => Num a  where
    (+), (-), (*)	:: a -> a -> a
    negate		:: a -> a
    abs, signum		:: a -> a
    fromInteger		:: Integer -> a

    x - y		=  x + negate y
    negate x            =  0 - x
