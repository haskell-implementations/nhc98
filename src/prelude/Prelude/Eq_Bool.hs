module Prelude(Eq(..)) where

instance Eq Bool where
  True  == True  = True
  False == False = True
  _     == _     = False
