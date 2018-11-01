module Char where

import IsUpper
import IsLower

isAlpha		:: Char -> Bool
isAlpha c       =  isUpper c  ||  isLower c
