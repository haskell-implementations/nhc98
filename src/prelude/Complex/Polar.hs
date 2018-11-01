module Complex where

import DComplex
import Magnitude
import Phase

polar            :: (RealFloat a) => Complex a -> (a,a)
polar z          =  (magnitude z, phase z)
