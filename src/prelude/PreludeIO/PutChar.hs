module Prelude(putChar) where

import IO

putChar :: Char -> IO ()
putChar c = hPutChar stdout c

