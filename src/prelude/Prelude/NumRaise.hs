module Prelude where

infixr 8  ^

(^)		:: (Num a, Integral b) => a -> b -> a

x ^ 0 		= 1
x ^ n | n > 0 	= f x (n-1) x
		  where f _ 0 y = y
			f x n y = g x n
                                  where  g x n | even n    = g (x*x) (n `quot` 2)
       			                       | otherwise = f x (n-1) (x*y)
_ ^ _		= error "Prelude.(^): negative exponent"

