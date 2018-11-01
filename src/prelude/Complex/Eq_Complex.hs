module Complex(Eq(..)) where

import DComplex

instance (RealFloat a) => Eq (Complex a) where
  (r :+ i)  == (r' :+ i') = r == r' && i == i'
