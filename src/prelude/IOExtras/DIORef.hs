{-# OPTIONS_COMPILE --prelude #-}
module NHC.IOExtras
  ( IORef(..)
  ) where

import NHC.FFI
import PreludeBuiltin (Vector)
import IO (Handle)	-- hack to avoid compiler error with -T

newtype IORef a = IORef (Vector a)	-- vector contains only one element!
