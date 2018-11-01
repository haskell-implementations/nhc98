module Prelude where

getLine 	:: IO String
getLine         =  do c <- getChar
                      if c == '\n' then return "" else 
                         do s <- getLine
                            return (c:s)
