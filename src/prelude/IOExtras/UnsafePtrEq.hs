module NHC.IOExtras 
  ( unsafePtrEq
  ) where

--import FFI

foreign import ccall "unsafePtrEq" unsafePtrEq :: a -> a -> Bool

