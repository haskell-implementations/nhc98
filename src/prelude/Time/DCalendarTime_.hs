module Time where

import DMonth
import DDay

data CalendarTime = CalendarTime {
    ctYear                       :: Int,
    ctMonth                      :: Month,
    ctDay, ctHour, ctMin, ctSec  :: Int,
    ctPicosec                    :: Integer,
    ctWDay                       :: Day,
    ctYDay                       :: Int,
    ctTZName                     :: String,
    ctTZ                         :: Int,
    ctIsDST                      :: Bool
    } deriving (Eq, Ord, Read, Show)
