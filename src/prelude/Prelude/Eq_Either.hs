module Prelude(Eq(..)) where

instance (Eq a, Eq b) => Eq (Either a b) where
  Left a  == Left b  = a == b
  Right a == Right b = a == b
  _       == _       = False
