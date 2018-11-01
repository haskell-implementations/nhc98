module Prelude where

import Ratio(Ratio,(%))

class  (Real a, Fractional a) => RealFrac a  where
    properFraction	:: (Integral b) => a -> (b,a)
    truncate, round	:: (Integral b) => a -> b
    ceiling, floor	:: (Integral b) => a -> b
  
    truncate x	=  case properFraction x of (m,_) -> m
    round x	=  case properFraction x of
		    (n,r) ->
    		      case compare (abs r - fromRational (1%2)) 0 of
    			LT -> n
    		 	EQ -> if even n then n else if r<0 then n-1 else n+1
    			GT ->                       if r<0 then n-1 else n+1
    ceiling x	=  case properFraction x of (n,r) -> if r>0 then n+1 else n
    floor x	=  case properFraction x of (n,r) -> if r<0 then n-1 else n

