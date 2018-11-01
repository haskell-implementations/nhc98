module Prelude(Read(..)) where

--import Numeric(readSigned,readDec)

instance Read Int where
  readsPrec p r = map (\(i,t)-> (fromInteger i, t)) (readsPrec p r)
