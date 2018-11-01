module Prelude(Ord(..)) where

instance Ord a => Ord [a] where
  compare []     []     = EQ
  compare []     (b:bs) = LT
  compare (a:as) []     = GT
  compare (a:as) (b:bs) =
    case compare a b of
    	LT -> LT
	EQ -> compare as bs
	GT -> GT
  
