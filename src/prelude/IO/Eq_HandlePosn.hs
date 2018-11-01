module IO(Eq(..)) where

import DHandlePosn
import DHandle
import Eq_Handle
import NHC.FFI


foreign import ccall primEqHandlePosnC :: ForeignPtr () -> ForeignPtr () -> Bool

instance Eq HandlePosn where
  (HandlePosn h a) == (HandlePosn j b)   =   h==j  &&  primEqHandlePosnC a b
