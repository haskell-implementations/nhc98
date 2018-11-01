module Prelude(Read(..)) where

import Numeric(readSigned,readFloat)

instance Read Float where
  readsPrec p = readSigned readFloat
