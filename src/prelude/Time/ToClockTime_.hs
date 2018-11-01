module Time where

import NHC.GreenCard
import DClockTime
import DCalendarTime

foreign import ccall hs_toClockTime :: Int -> Int -> Int -> Int -> Int -> Int -> Int -> Int -> Int -> PackedString -> Int -> Bool -> Int

toClockTime :: CalendarTime -> ClockTime
toClockTime (CalendarTime y tmp1 d h min s tmp2 tmp3 yd tmp4 tz dst) =
  let mon = fromEnum tmp1 in
  let pc = fromInteger tmp2 in
  let wd = fromEnum tmp3 in
  let tzn = toCString tmp4 in
  let ct = hs_toClockTime y mon d h min s pc wd yd tzn tz dst in
  (CT ct)


