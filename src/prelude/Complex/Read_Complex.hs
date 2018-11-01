module Complex(Read(..)) where

import DComplex

instance (Read a, RealFloat a) => Read (Complex a) where
  readsPrec p =	 readParen (p >= 6) (\r -> [(x :+ y,v) | (x,v) <- readsPrec 6 r,
							 (":+",u) <- lex v,
							 (y,w) <- readsPrec 6 u])

