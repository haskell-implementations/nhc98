module Prelude(Ord(..)) where

instance Ord Char where
  c <= c'      = fromEnum c <= fromEnum c'
  compare c c' = compare (fromEnum c) (fromEnum c')
