module Complex where

import DComplex

realPart :: (RealFloat a) => Complex a -> a
realPart (x:+y)  =  x
