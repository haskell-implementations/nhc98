module Prelude where

import ReadIO

readLn          :: Read a => IO a
readLn          =  do l <- getLine
                      r <- readIO l
                      return r
