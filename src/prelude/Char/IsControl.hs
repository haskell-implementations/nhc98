module Char where

isControl	:: Char -> Bool
isControl c  	= c < ' ' ||  (c >= '\DEL' && c <= '\x9f')
 
