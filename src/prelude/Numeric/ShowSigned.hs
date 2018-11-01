module Numeric where

showSigned:: (Real a) => (a -> ShowS) -> Int -> a -> ShowS
showSigned showPos p x = 
	 if x < 0 then showParen (p > 6)
	     (showChar '-' . showPos (negate x))
	 else 
	      showPos x
