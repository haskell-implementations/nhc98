module Char where

import IsLower

toUpper :: Char -> Char
toUpper c | isLower c	=  toEnum ((fromEnum c - fromEnum 'a') + fromEnum 'A')
	  | otherwise	=  c
