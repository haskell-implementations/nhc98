module Time where

import DTimeDiff
import DClockTime

addToClockTime :: TimeDiff -> ClockTime -> ClockTime
addToClockTime td (CT i) = CT (i+d)
  -- tdYear and tdMonth make no sense, ignore them
  where d = ((tdDay td * 24 + tdHour td) * 60 + tdMin td) * 60 + tdSec td

