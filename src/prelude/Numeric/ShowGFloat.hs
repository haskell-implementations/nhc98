module Numeric (showGFloat) where

import FFFormat
import FormatRealFloat

showGFloat     :: (RealFloat a) => Maybe Int -> a -> ShowS
showGFloat d x =  showString (formatRealFloat FFGeneric d x)
