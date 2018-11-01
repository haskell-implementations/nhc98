module Complex where

import DComplex

cis              :: (RealFloat a) => a -> Complex a
cis theta        =  cos theta :+ sin theta
