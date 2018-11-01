module Prelude(catch) where

import NHC.Internal (IO(..))

catch :: IO a -> (IOError -> IO a) -> IO a
catch x handle =
  IO ( \ world -> 
	  case x of
            IO xf ->
	      case xf world of
                Left err -> case handle err of
			      IO hf -> hf world
		right    -> right
     )


