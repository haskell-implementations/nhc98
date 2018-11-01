module Time where

import DCalendarTime
import FormatCalendarTime
import Locale

calendarTimeToString :: CalendarTime -> String
calendarTimeToString = formatCalendarTime defaultTimeLocale "%c"

