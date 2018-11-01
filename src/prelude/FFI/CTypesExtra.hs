{-# OPTIONS_COMPILE -cpp #-}
module NHC.FFI 
  -- Integral types, instances of: Eq, Ord, Num, Read, Show, Enum,
  -- Storable, Bounded, Real, Integral
  ( CPtrdiff(..), CSize(..), CWchar(..), CSigAtomic(..)

  -- Numeric types, instances of: Eq, Ord, Num, Read, Show, Enum, Storable
  , CClock(..),   CTime(..)
  , CFile,        CFpos,     CJmpBuf

  -- C99 types which are still missing include:
  -- intptr_t, uintptr_t, intmax_t, uintmax_t, wint_t, wctrans_t, wctype_t

  ) where

import NonStdUnsafeCoerce
import Storable	( Storable(..) )
-- import Data.Bits( Bits(..) )
-- import NHC.SizedTypes
import Monad	( liftM )
import Ptr	( castPtr )
import CTypes

#include "CTypes.h"

-- So far, we just make a best guess at these types for most 32-bit machines.
-- Should really be auto-configured.

INTEGRAL_TYPE(CPtrdiff,CInt)
INTEGRAL_TYPE(CWchar,CInt)
INTEGRAL_TYPE(CSigAtomic,CInt)
INTEGRAL_TYPE(CSize,CInt)

ARITHMETIC_TYPE(CClock,CUInt)
ARITHMETIC_TYPE(CTime,CUInt)

-- Not sure what these are for??
data CFile   = CFile		-- ??
data CFpos   = CFpos		-- ??
data CJmpBuf = CJmpBuf		-- ??
