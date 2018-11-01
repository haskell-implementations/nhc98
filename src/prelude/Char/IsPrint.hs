module Char where

import IsControl

isPrint		:: Char -> Bool
isPrint c  	=  not (isControl c)

