module Time
  ( ClockTime(..)
  ) where

import NHC.GreenCard

data ClockTime = CT Int deriving (Eq, Ord, Show)
