module Prelude where

infix  4  ==, /=

class  Eq a  where
    (==), (/=)		:: a -> a -> Bool

    x /= y		=  not (x == y)
    x == y		=  not (x /= y)
