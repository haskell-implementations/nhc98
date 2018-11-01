module Prelude(Eq(..)) where

instance (Eq a,Eq b, Eq c) => Eq (a,b,c) where
  (a,b,c) == (a',b',c') = a == a' && b == b' && c == c'
