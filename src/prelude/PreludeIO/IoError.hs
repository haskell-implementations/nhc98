module Prelude (ioError) where

import NHC.Internal (IO(..))

ioError :: IOError -> IO a
ioError e = IO ( const (Left e) )
        --  IO ( \ world -> Left e )	-- const is better for nice tracing
