module Char where

-- The upper case ISO characters have the multiplication sign dumped
-- randomly in the middle of the range.  Go figure.

isUpper		:: Char -> Bool
isUpper c  	=  c >= 'A' && c <= 'Z' 
		|| c >= '\xC0' && c <= '\xD6' 
                || c >= '\xD8' && c <= '\xDE'

