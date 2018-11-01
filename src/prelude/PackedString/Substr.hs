module NHC.PackedString where

import Prelude hiding(substr)
import DPackedString
import PackString
import UnpackPS

-- substrPS p l h
-- picks out characters l (inclusive) through h (exclusive)
-- making a string of length h - l.  substrPS p 0 (length p)
-- is the identity.  substrPS p n n gives is empty.

substr :: PackedString -> Int -> Int -> PackedString
substr p l h = (packString . take (h-l) . drop l . unpackPS) p
