module Char where

import IsAlpha
import IsDigit

isAlphaNum	   :: Char -> Bool
isAlphaNum c       = isAlpha c  ||  isDigit c 
