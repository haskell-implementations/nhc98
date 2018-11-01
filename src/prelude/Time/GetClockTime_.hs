module Time
  ( getClockTime
  ) where

import NHC.GreenCard
import DClockTime


foreign import ccall hs_getClockTime :: IO Int

getClockTime :: IO ClockTime
getClockTime =
  do c <- hs_getClockTime
     return (CT c)


