module IO (ioeGetHandle) where

import DHandle
import DIOError

ioeGetHandle :: IOError -> Maybe Handle
ioeGetHandle (IOError cmd maybefile maybehandle errno) = maybehandle
ioeGetHandle (EOFError op handle)                      = Just handle
ioeGetHandle _                                         = Nothing
