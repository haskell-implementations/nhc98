module NHC.Binary
  ( {-class-} Binary(..)
  , {-type-}  BinLocation(..)
  , {-type-}  BinHandle
  , {-type-}  BinIOMode(..)
  , {-type-}  BinPtr , incBinPtr , unsafeShiftBinPtr , sizeofBinPtr
  ,                    binPtr2Int, int2BinPtr
  , {-type-}  Bin(..)
  , putAt
  , getAt
  , getFAt
  , putAtEnd
  , openBin
  , closeBin
  , freezeBin
  , alignBin
  , isEOFBin
  , seekBin
  , tellBin
  , copyBin
  , endBin
  , putBits
  , getBits
  , getBitsF
  , skipBits
  , clearBits
  , stdmem
  , copyBits
  , copyBytes
  , equalsBin
  , compareBin
--, directPut
--, module SizedBin
  , module Instances
  , (<<)
  ) where

import BinHandle   ({-type-}BinHandle)
import BinIOMode   ({-type-}BinIOMode(..))
import BinLocation ({-type-}BinLocation(..))
import BinPtr      ({-type-}BinPtr, incBinPtr, unsafeShiftBinPtr, sizeofBinPtr,
                                    binPtr2Int,int2BinPtr)
import Bin         ({-type-}Bin(..))
import CBinary     ({-class-}Binary(..))
import PutAt       (putAt)
import GetAt       (getAt)
import GetFAt      (getFAt)
import PutAtEnd    (putAtEnd)

import OpenBin     (openBin)
import CloseBin    (closeBin)
import FreezeBin   (freezeBin)
import AlignBin    (alignBin)
import IsEOFBin    (isEOFBin)
import SeekBin     (seekBin)
import TellBin     (tellBin)
import CopyBin     (copyBin)
import EndBin      (endBin)
import PutBits     (putBits)
import GetBits     (getBits)
import SkipBits    (skipBits)
import ClearBits   (clearBits)
import GetBitsF    (getBitsF)
import StdMem      (stdmem)
import CopyBits    (copyBits)
import CopyBytes   (copyBytes)
import EqualsBin   (equalsBin)
import CompareBin  (compareBin)

--import DirectPut   (directPut)
--import SizedBin  ({-type-}Size, {-type-}SizedBin, sizedPut, sizedGetFAt)

import Instances
import LeftLeft  ((<<))

