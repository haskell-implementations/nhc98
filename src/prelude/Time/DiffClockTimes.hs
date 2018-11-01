module Time where

import DClockTime
import DTimeDiff

diffClockTimes :: ClockTime -> ClockTime -> TimeDiff
diffClockTimes (CT t) (CT t') =
    TimeDiff { tdYear=0, tdMonth=0, tdDay=dd
             , tdHour=dh, tdMin=dm, tdSec=ds, tdPicosec=0 }
  where
    ts = t-t'
    (tm, ds) = quotRem ts 60
    (th, dm) = quotRem tm 60
    (dd, dh) = quotRem th 24
    -- tdMon and tdYear make no sense, so ignore them

