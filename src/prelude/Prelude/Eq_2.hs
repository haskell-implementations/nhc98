module Prelude(Eq(..)) where

instance (Eq a,Eq b) => Eq (a,b) where
  (a,b) == (a',b') = a == a' && b == b'
