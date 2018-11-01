module Char where

isSpace	   	:: Char -> Bool 
isSpace c       =  c `elem` " \t\n\r\f\v\xa0"

