module IO (isUserError) where

import DIOError

isUserError  :: IOError -> Bool
isUserError (UserError loc str) = True
isUserError ioerror = False
