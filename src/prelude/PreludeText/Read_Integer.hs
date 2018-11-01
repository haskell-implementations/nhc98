module Prelude(Read(..)) where

import Numeric(readSigned,readDec)

instance Read Integer where
  readsPrec p = readSigned readDec
