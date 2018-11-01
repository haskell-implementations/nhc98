# 1 "System/CPUTime.hsc"
-----------------------------------------------------------------------------
# 2 "System/CPUTime.hsc"
-- |
-- Module      :  System.CPUTime
-- Copyright   :  (c) The University of Glasgow 2001
-- License     :  BSD-style (see the file libraries/base/LICENSE)
-- 
-- Maintainer  :  libraries@haskell.org
-- Stability   :  provisional
-- Portability :  portable
--
-- The standard CPUTime library.
--
-----------------------------------------------------------------------------

module System.CPUTime 
        (
         getCPUTime,       -- :: IO Integer
         cpuTimePrecision  -- :: Integer
        ) where

import Prelude

import Data.Ratio


# 28 "System/CPUTime.hsc"


# 30 "System/CPUTime.hsc"
import CPUTime ( getCPUTime, cpuTimePrecision )

# 32 "System/CPUTime.hsc"


# 67 "System/CPUTime.hsc"


# 69 "System/CPUTime.hsc"
realToInteger :: Real a => a -> Integer
realToInteger ct = round (realToFrac ct :: Double)
  -- CTime, CClock, CUShort etc are in Real but not Fractional, 
  -- so we must convert to Double before we can round it

# 74 "System/CPUTime.hsc"


# 161 "System/CPUTime.hsc"

-- |The 'cpuTimePrecision' constant is the smallest measurable difference
-- in CPU time that the implementation can record, and is given as an
-- integral number of picoseconds.


# 170 "System/CPUTime.hsc"


# 181 "System/CPUTime.hsc"
