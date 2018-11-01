module IO (isEOF) where

import DHandle
import PreludeBuiltin (stdin)
import HIsEOF

isEOF                 :: IO Bool
isEOF                  = hIsEOF stdin
