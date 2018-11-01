module Prelude(Read(..)) where

instance (Read a) => Read [a] where
  readsPrec p = readList
