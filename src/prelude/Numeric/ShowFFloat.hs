module Numeric (showFFloat) where

import FFFormat
import FormatRealFloat

showFFloat     :: (RealFloat a) => Maybe Int -> a -> ShowS
showFFloat d x =  showString (formatRealFloat FFFixed d x)
