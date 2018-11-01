module Char where

isHexDigit		:: Char -> Bool
isHexDigit c   = (c >= '0' && c <= '9')
              || (c >= 'A' && c <= 'F')
              || (c >= 'a' && c <= 'f')
