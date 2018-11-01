module Ix(Ix(..)) where

import CIx

instance Ix Integer where
  range (m,n) 	= [m .. n]
  index b@(m,n) i
	| inRange b i = fromInteger (i - m)
	| True         = error "Ix.Integer.index: Index out of range."
  inRange (m,n) i    = m <= i && i <= n
