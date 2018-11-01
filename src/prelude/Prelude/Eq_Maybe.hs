module Prelude(Eq(..)) where

instance Eq a => Eq (Maybe a) where
  Nothing == Nothing = True
  Just a  == Just b  = a == b
  _       == _	     = False
