module Prelude(getContents) where

import IO

getContents :: IO [Char]
getContents = hGetContents stdin
