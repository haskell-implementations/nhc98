module Numeric (showEFloat) where

import FFFormat
import FormatRealFloat

showEFloat     :: (RealFloat a) => Maybe Int -> a -> ShowS
showEFloat d x =  showString (formatRealFloat FFExponent d x)
