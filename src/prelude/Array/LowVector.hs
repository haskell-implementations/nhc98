module Array
  ( primCopyVectorC
  , primNewVectorC
  , primVectorIndexC
  , primUpdateVectorC
  ) where

import PreludeBuiltin(Vector)
import _E

foreign import ccall primCopyVectorC :: Vector a -> IO (Vector a)
foreign import ccall primNewVectorC :: Int -> _E a -> IO (Vector a)
foreign import ccall primVectorIndexC :: Vector a -> Int -> IO a
foreign import ccall primUpdateVectorC :: Int -> _E a -> Vector a -> IO ()


