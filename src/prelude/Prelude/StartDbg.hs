module Prelude where

import _Driver
import DIO
--import DPrelude(Trace, R(..), myseq)

--cConnectToServer primitive 1 :: Trace -> ()

_startDbg _ =
   case _driver () of
       R v t -> myseq v () 	-- (cConnectToServer t)

