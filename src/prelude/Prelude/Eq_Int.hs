module Prelude(Eq(..)) where

instance Eq Int where
  a == b = a == b    --- MAGIC
  a /= b = a /= b    --- MAGIC
