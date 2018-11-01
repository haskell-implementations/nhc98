module Ix(Ix(..)) where

import CIx

instance Ix Int where
  range (m,n) 	= [m .. n]
  index b@(m,n) i
	| inRange b i = i - m
	| True         = error "Ix.Int.index: Index out of range."
  inRange (m,n) i    = m <= i && i <= n

