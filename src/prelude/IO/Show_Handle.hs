module IO(Show(..)) where

import DHandle
import HGetFileName

instance Show Handle where
  showsPrec _ h = showString "(Handle for file " . shows (hGetFileName h)
		. showString ")"

  showsType h = showString "Handle"
