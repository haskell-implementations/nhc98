{-# OPTIONS_COMPILE -cpp #-}
module NHC.FFI
	( -- Integral types, instances of: Eq, Ord, Num, Read, Show, Enum,
	  -- Typeable, Storable, Bounded, Real, Integral, Bits
	  CChar(..),    CSChar(..),  CUChar(..)
	, CShort(..),   CUShort(..), CInt(..),    CUInt(..)
	, CLong(..),    CULong(..),  CLLong(..),  CULLong(..)

	  -- Floating types, instances of: Eq, Ord, Num, Read, Show, Enum,
	  -- Typeable, Storable, Real, Fractional, Floating, RealFrac, RealFloat
	, CFloat(..),   CDouble(..), CLDouble(..)
	) where

import NonStdUnsafeCoerce
import Int	( Int8,  Int16,  Int32,  Int64  )
import Word	( Word8, Word16, Word32, Word64 )
import Storable	( Storable(..) )
-- import Data.Bits( Bits(..) )
-- import NHC.SizedTypes
import Monad	( liftM )
import Ptr	( castPtr )

#include "CTypes.h"

INTEGRAL_TYPE(CChar,Int8)
INTEGRAL_TYPE(CSChar,Int8)
INTEGRAL_TYPE(CUChar,Word8)
INTEGRAL_TYPE(CShort,Int16)
INTEGRAL_TYPE(CUShort,Word16)
INTEGRAL_TYPE(CInt,Int)
INTEGRAL_TYPE(CUInt,Word32)
INTEGRAL_TYPE(CLong,Int32)
INTEGRAL_TYPE(CULong,Word32)
INTEGRAL_TYPE(CLLong,Int64)
INTEGRAL_TYPE(CULLong,Word64)

FLOATING_TYPE(CFloat,Float)
FLOATING_TYPE(CDouble,Double)
-- HACK: Currently no long double in the FFI, so we simply re-use double
FLOATING_TYPE(CLDouble,Double)
