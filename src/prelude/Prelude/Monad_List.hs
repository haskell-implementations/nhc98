module Prelude(Monad(..)) where

import CMonad

instance Monad [] where
  m >>= k    =  concat (map k m)
  return x   =  x:[]
  fail s     =  []
