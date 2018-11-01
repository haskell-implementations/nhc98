module Ix(Ix(..)) where

import CIx

instance Ix () where
  range ((),()) = [()]
  index ((),()) () = 0
  inRange ((),()) () = True
