module Prelude where

import Subtract

class Enum a where
    succ, pred          :: a -> a
    toEnum		:: Int -> a
    fromEnum		:: a -> Int
    enumFrom		:: a -> [a]		-- [n..]
    enumFromThen	:: a -> a -> [a]	-- [n,n'..]
    enumFromTo		:: a -> a -> [a]	-- [n..m]
    enumFromThenTo	:: a -> a -> a -> [a]	-- [n,n'..m]

    succ                = toEnum . (+1) . fromEnum
    pred                = toEnum . subtract 1 . fromEnum

    enumFrom n		= n : enumFrom (succ n)
    enumFromThen n m	= let ni = fromEnum n
                              mi = fromEnum m
                              step = mi - ni
                              inc s i = toEnum s : inc (s+i) i
                              dec s i = toEnum s : dec (s-i) i
                          in if step >=0 then inc ni step
                                         else dec ni step

    enumFromTo n m	= let ni = fromEnum n
			      mi = fromEnum m
			  in
  			    case compare ni mi of
			      LT -> _enumFromToIncC ni 1 mi
			      EQ -> n:[]
			      GT -> []

    enumFromThenTo n n' m = let ni  = fromEnum n
			        ni' = fromEnum n'
			        mi  = fromEnum m
			        step = ni' - ni
			    in
			      if step >= 0 then
				  _enumFromToIncC ni step mi
			      else
				  _enumFromToDecC ni step mi


_enumFromToDecC :: (Enum a) => Int -> Int -> Int -> [a]
_enumFromToDecC n s m =
  case compare n m of
    LT -> []
    EQ -> toEnum n : []
    GT -> toEnum n : _enumFromToDecC (n+s) s m


_enumFromToIncC :: (Enum a) => Int -> Int -> Int -> [a]
_enumFromToIncC n s m =
  case compare n m of
    LT -> toEnum n : _enumFromToIncC (n+s) s m
    EQ -> toEnum n : []
    GT -> []


