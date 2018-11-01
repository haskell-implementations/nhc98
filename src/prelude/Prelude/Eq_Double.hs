module Prelude(Eq(..)) where

instance Eq Double where
  a == b = a == b    --- MAGIC
  a /= b = a /= b    --- MAGIC
