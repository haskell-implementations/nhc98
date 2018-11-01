module IO (isEOFError) where

import DIOError

isEOFError            :: IOError -> Bool
isEOFError (EOFError fun file) = True
isEOFError ioerror = False
