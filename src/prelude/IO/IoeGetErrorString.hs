module IO (ioeGetErrorString) where

import IO
import DIOError
import NHC.DErrNo

ioeGetErrorString :: IOError -> String
ioeGetErrorString (IOError op _ _ errno)  = op
ioeGetErrorString (EOFError op handle)    = "EOF"
ioeGetErrorString (PatternError loc)      = loc
ioeGetErrorString (UserError loc str)     = str
ioeGetErrorString _ = "unusual IO error"

