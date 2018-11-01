module Char where

isAscii		:: Char -> Bool
isAscii c  	=  fromEnum c < 128
