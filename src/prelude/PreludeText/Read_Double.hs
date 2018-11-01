module Prelude (Read(..)) where

import ReadSigned
import ReadFloat

instance Read Double where
  readsPrec p = readSigned readFloat
