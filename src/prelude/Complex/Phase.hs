module Complex where

import DComplex

phase :: (RealFloat a) => Complex a -> a
phase (0:+0)     =  0
phase (x:+y)     =  atan2 y x
