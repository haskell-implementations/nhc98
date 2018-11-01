module Prelude(Eq(..)) where

instance Eq Char where
  c == c' = fromEnum c == fromEnum c'
