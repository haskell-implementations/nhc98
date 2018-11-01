module NHC.Binary
  ( {-class-} Binary(..)
  ) where

import BinHandle ({-type-}BinHandle)
import SeekBin   (seekBin)
import BinPtr    ({-type-}BinPtr)

class Binary a where
    put  :: BinHandle -> a -> IO (BinPtr a)
    get  :: BinHandle -> IO a
    getF :: BinHandle -> BinPtr a -> (a, BinPtr b)

    putAt       :: BinHandle -> BinPtr a -> a -> IO ()
    getAt       :: BinHandle -> BinPtr a -> IO a
    getFAt      :: BinHandle -> BinPtr a -> a

    putAt  bh p x = seekBin bh p >> put bh x >> return ()
    getAt  bh p   = seekBin bh p >> get bh
    getFAt bh p   = fst (getF bh p)
