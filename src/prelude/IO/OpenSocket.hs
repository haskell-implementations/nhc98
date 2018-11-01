module IO where

import IO
import PrimOpenSocket

openSocket                 :: String -> Int -> SocketType -> IO Handle
openSocket host port stype = primOpenSocket host port stype

