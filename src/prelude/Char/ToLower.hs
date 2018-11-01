module Char where

import IsUpper

toLower	:: Char -> Char
toLower c | isUpper c	=  toEnum ((fromEnum c - fromEnum 'A') + fromEnum 'a')
	  | otherwise	=  c
