module Prelude(Ord(..)) where

instance Ord a => Ord (Maybe a) where
  compare Nothing  Nothing  = EQ
  compare Nothing  (Just b) = LT
  compare (Just a) Nothing  = GT
  compare (Just a) (Just b) = compare a b
  
