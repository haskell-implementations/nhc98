module Locale where

import DTimeLocale

defaultTimeLocale = TimeLocale {
    wDays  = [("Sunday",   "Sun"),  ("Monday",    "Mon"),
              ("Tuesday",  "Tue"),  ("Wednesday", "Wed"),
              ("Thursday", "Tue"),  ("Friday",    "Fri"),
              ("Saturday", "Sat")],
    months = [("January",  "Jan"),  ("February",  "Feb"),
              ("March",    "Mar"),  ("April",     "Apr"),
              ("May",      "May"),  ("June",      "Jun"),
              ("July",     "Jul"),  ("August",    "Aug"),
              ("September","Sep"),  ("October",   "Oct"),
              ("November", "Nov"),  ("December",  "Dec")],
    amPm   = ("am","pm"),
    dateTimeFmt  = "%H:%M:%S %Z, %a %e %b %Y",
    dateFmt      = "%Y.%m.%d",
    timeFmt      = "%H:%M:%S",
    time12Fmt    = "%I:%M:%S %p"
    }

