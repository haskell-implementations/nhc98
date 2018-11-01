module Complex where

import DComplex

imagPart :: (RealFloat a) => Complex a -> a
imagPart (x:+y)  =  y
