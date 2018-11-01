module Prelude where

import DIOError

userError :: String -> IOError
userError s = UserError "call to function `userError'" s
 
