module Prelude(Ord(..)) where

instance (Ord a,Ord b) => Ord (a,b) where
  compare (a,b)  (a',b') =
    case compare a a' of
    	LT -> LT
	EQ -> compare b b'
	GT -> GT
  
