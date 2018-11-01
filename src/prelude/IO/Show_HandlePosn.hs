module IO(Show(..)) where

import DHandlePosn
import DHandle
import HGetFileName

instance Show HandlePosn where
  showsPrec _ (HandlePosn h p)
		= showString "(HandlePosn for file "
		. shows (hGetFileName h) . showString ")"

  showsType h = showString "HandlePosn"
