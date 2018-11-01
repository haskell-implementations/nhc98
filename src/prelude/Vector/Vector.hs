module NHC.Vector
  ( Vector()
  , copy
  , new
  , (!)
  , update
  ) where

import PreludeBuiltin(Vector)
import _E

foreign import ccall primCopyVectorC   :: Vector a -> IO (Vector a)
foreign import ccall primNewVectorC    :: Int -> _E a -> IO (Vector a)
foreign import ccall primVectorIndexC  :: Vector a -> Int -> IO a
foreign import ccall primUpdateVectorC :: Int -> _E a -> Vector a -> IO ()


copy :: Vector a -> IO (Vector a)
copy = primCopyVectorC

new :: Int -> a -> IO (Vector a)
new n x = primNewVectorC n (_E x)

(!) :: Vector a -> Int -> IO a
(!) = primVectorIndexC

update :: Vector a -> Int -> a -> IO ()
update v n x = primUpdateVectorC n (_E x) v
