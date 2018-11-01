module NHC.Binary
  ( {-type-}  Size(..)
  , {-type-}  SizedBin(..)
  , sizedPut
  , sizedGetFAt
  ) where

import BinPtr     ({-type-} BinPtr, unsafeShiftBinPtr)
import Bin        ({-type-} Bin(..))
import BinHandle  ({-type-} BinHandle)
import CBinary    ({-class-}Binary(..))
import GetFAt     (getFAt)
import PutBits    (putBits)
import GetBits    (getBits)
import AlignBin   (alignBin)
import SizeofBin  (sizeofBin)
import EqualsBin  (equalsBin)
import CompareBin (compareBin)
import StdMem     (stdmem)

newtype Size = Size Int	deriving (Eq,Ord)
data SizedBin a = SB {sizeOf :: Size, bhOf :: BinHandle, binOf :: Bin a}

sizedPut    :: Binary a => BinHandle -> a -> IO (SizedBin a)
sizedGetFAt :: Binary a => SizedBin a -> a
 
-- Note: sizedCompress aligns the end of the object *after* taking
-- its size.  Hence, the size will reflect the true, *unpadded* number
-- of bits in the object.
sizedPut bh a = alignBin bh    >>
                put bh a       >>= \x-> 
                sizeofBin bh x >>= \n->
                alignBin bh    >>
                return (SB (Size n) bh x)
sizedGetFAt sb = getFAt (bhOf sb) (binOf sb)

-----------------------------------------
instance Eq (SizedBin a) where
  (SB (Size n) bh1 b) == (SB (Size m) bh2 c)       =  n==m && equalsBin n bh1 b bh2 c

instance Ord (SizedBin a) where
  compare (SB (Size n) bh1 b) (SB (Size m) bh2 c)  =  compareBin n m bh1 b bh2 c

-----------------------------------------
