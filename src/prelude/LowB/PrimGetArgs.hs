module System where

import NHC.PackedString(PackedString,unpackPS)
import NHC.Internal (IO(..))

cGetArgs primitive 0 :: [PackedString]

primGetArgs =
  IO ( \ world ->
	let args = cGetArgs
	in args `seq` Right (map unpackPS args))
