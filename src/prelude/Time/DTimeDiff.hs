module Time where

data TimeDiff = TimeDiff {
    tdYear, tdMonth, tdDay, tdHour, tdMin, tdSec :: Int,
    tdPicosec                                    :: Integer
    } deriving (Eq, Ord, Read, Show)

