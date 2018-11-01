module Ix(Ix(..)) where

import CIx

instance Ix Char where
  range (c,c') 	= [c .. c']
  index b@(c,c') ci
	| inRange b ci = fromEnum ci - fromEnum c
	| True         = error "Ix.Char.index: Index out of range."
  inRange (c,c') ci    = c <= ci && ci <= c'  -- Assuming Enum and Ord agree on order for Char

