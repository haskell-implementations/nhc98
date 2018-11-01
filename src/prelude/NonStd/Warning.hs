module Warning where

import NonStdTrace

warning :: String -> a -> a
warning s = trace ("WARNING!! "++s)

