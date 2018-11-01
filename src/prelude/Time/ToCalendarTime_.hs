module Time where

import NHC.GreenCard
import DClockTime
import DCalendarTime

foreign import ccall hs_toCalendarTime :: Int -> IO (Int,Int,Int,Int,Int,Int,Int,Int,Int,PackedString,Int,Bool)

toCalendarTime :: ClockTime -> IO CalendarTime
toCalendarTime (CT ct) =
  do (res1,res2,res3,res4,res5,res6,res7,res8,res9,res10,res11,res12) <- hs_toCalendarTime ct
     return (CalendarTime res1 (toEnum res2) res3 res4 res5 res6 (toInteger res7) (toEnum res8) res9 (fromCString res10) res11 res12)

