module CPUTime(getCPUTime) where

import NHC.GreenCard
import CpuTimePrecision

getCPUTime :: IO Integer
getCPUTime = do
  i <- clock ()
  return (toInteger i * cpuTimePrecision)

foreign import ccall hs_clock :: () -> IO Int

clock :: () -> IO Int
clock () =
  do hs_clock ()

