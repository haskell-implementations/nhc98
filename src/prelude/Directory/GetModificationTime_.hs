module Directory (getModificationTime) where

import NHC.GreenCard
import PatchIOError
import DClockTime ({-type-}ClockTime(..))


foreign import ccall hs_primGetModTime :: PackedString -> IO (Int,Int)

primGetModTime :: FilePath -> IO (Int,ClockTime)
primGetModTime tmp1 =
  do let fp = toCString tmp1
     (err,res1) <- hs_primGetModTime fp
     return (err,(CT res1))



getModificationTime :: FilePath -> IO ClockTime
getModificationTime fp = patchIOErrorFVal "getModificationTime" fp primGetModTime
