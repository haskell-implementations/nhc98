module Prelude(Eq(..)) where

instance Eq Ordering where
  a  == b = fromEnum a == fromEnum b
