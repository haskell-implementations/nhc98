module NHC.Prelude
  ( {-class-} Binary(..)
  ) where

import BinHandle ({-type-}BinHandle)
import BinPtr    ({-type-}BinPtr)
import SeekBin   (seekBin)
import TellBin   (tellBin)

class Binary a where
    put_rec    :: BinHandle -> a -> IO ()
    get_rec    :: BinHandle -> IO a
    getFAt_rec :: BinHandle -> BinPtr a -> (a, BinPtr b)
    sizeOf     :: a -> Int


put    :: Binary a => BinHandle -> a -> IO (BinPtr a)
get    :: Binary a => BinHandle -> IO a
putAt  :: Binary a => BinHandle -> BinPtr a -> a -> IO ()
getAt  :: Binary a => BinHandle -> BinPtr a -> IO a
getFAt :: Binary a => BinHandle -> BinPtr a -> a

put    bh x   = tellBin bh >>= \p-> put_rec bh x >> return p
get    bh     = get_rec bh
putAt  bh p x = seekBin bh p >> put_rec bh x >> return ()
getAt  bh p   = seekBin bh p >> get_rec bh
getFAt bh p   = fst (getFAt_rec bh p)

