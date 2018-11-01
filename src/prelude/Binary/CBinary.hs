module NHC.Binary
  ( {-class-} Binary(..)
  ) where

import BinHandle ({-type-}BinHandle)
import Bin       ({-type-}Bin)

class Binary a where
    put    :: BinHandle -> a -> IO (Bin a)
    get    :: BinHandle -> IO a
    getF   :: BinHandle -> Bin a -> (a, Bin b)
    sizeOf :: a -> Int

