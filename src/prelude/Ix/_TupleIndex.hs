module Ix where

import CIx

_tupleIndex :: (Ix a) => a -> a -> a -> Int -> Int
_tupleIndex l u i z = index (l,u) i + rangeSize (l,u) * z
