module NonStdTrace where

import IO
import PreludeBuiltin

trace :: String -> a -> a
trace [] a = a
trace (x:xs) a = _hPutChar stderr x `_seq` trace xs a
