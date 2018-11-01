module Prelude(getChar) where

import IO

getChar :: IO Char
getChar =  hGetChar stdin
