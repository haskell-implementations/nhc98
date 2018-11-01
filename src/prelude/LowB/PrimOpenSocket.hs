module Prelude(cOpenSocket,primOpenSocket,SocketType) where

import IO hiding (IO(..))
import CString
import NHC.Internal (IO(..))
import DSocket

cOpenSocket primitive 3 :: PackedString -> Int -> SocketType -> (Either IOError Handle)

primOpenSocket :: String -> Int -> SocketType -> IO Handle
primOpenSocket host port stype = 
  IO ( \ world -> cOpenSocket (toCString host) port stype )
