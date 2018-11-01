module IO (Handle(..),ForeignObj) where

import NHC.FFI (ForeignObj)

newtype Handle = Handle ForeignObj
