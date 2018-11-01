module Char where

-- The lower case ISO characters have the division sign dumped
-- randomly in the middle of the range.  Go figure.

isLower		:: Char -> Bool
isLower c               =  c >= 'a' && c <= 'z' ||
                           c >= '\xDF' && c <= '\xF6' ||
                           c >= '\xF8' && c <= '\xFF'

