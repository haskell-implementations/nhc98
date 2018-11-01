module Prelude(error) where

import PrimError

error :: String -> a
error s = primError s

