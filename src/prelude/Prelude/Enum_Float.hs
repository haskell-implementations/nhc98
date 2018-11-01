module Prelude(Enum(..)) where

instance Enum Float where
  succ x = x+1
  pred x = x-1

  toEnum = fromIntegral
  fromEnum = fromInteger . truncate

  enumFrom n          = iterate (+1) n
  enumFromTo n m
          | m<n       = []
          | otherwise = takeWhile (<=top) (iterate (+1) n)
      where top = m + 1/2
  enumFromThen n m    = iterate (+interval) n
      where interval  = m-n
  enumFromThenTo n m o
          | interval<0  && o>n = []
          | interval>0  && o<n = []
          | interval>=0        = takeWhile (<=top) (iterate (+interval) n)
          | interval<0         = takeWhile (>top) (iterate (+interval) n)
      where interval = m-n
            top = o + interval/2
