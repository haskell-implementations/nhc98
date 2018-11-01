module Prelude(Ord(..)) where

instance (Ord a,Ord b,Ord c) => Ord (a,b,c) where
  compare (a,b,c)  (a',b',c') =
    case compare a a' of
    	LT -> LT
	EQ -> case compare b b' of
		LT -> LT
		EQ -> compare c c'
		GT -> GT
	GT -> GT
  
