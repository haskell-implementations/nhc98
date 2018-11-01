module NonStdGetPID where

import NHC.GreenCard

foreign import ccall "hs_getPID" getPID :: IO Int
