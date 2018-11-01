module Prelude(Ord(..)) where

instance (Ord a, Ord b) => Ord (Either a b) where
  compare (Left a)  (Left b)  = compare a b
  compare (Left a)  (Right b) = LT
  compare (Right a) (Left b)  = GT
  compare (Right a) (Right b) = compare a b
  
