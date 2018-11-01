module Prelude where

infix  4  <, <=, >=, >

class  (Eq a) => Ord a  where
    compare		:: a -> a -> Ordering
    (<), (<=), (>=), (>):: a -> a -> Bool
    max, min		:: a -> a -> a

    compare x y
	| x == y	= EQ
	| x <= y	= LT
	| True		= GT

    x <= y		= compare x y /= GT
    x <	 y		= compare x y == LT
    x >= y		= compare x y /= LT
    x >	 y		= compare x y == GT

    max x y | x >= y	=  x
	    | True	=  y
    min x y | x <= y	=  x
	    | True	=  y

