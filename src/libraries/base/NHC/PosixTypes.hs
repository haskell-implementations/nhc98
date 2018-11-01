{-# INCLUDE <libc.h> #-}
{-# INCLUDE <stdlib.h> #-}
{-# INCLUDE <unistd.h> #-}
{-# INCLUDE <sys/resource.h> #-}
{-# INCLUDE <termios.h> #-}
# 1 "NHC/PosixTypes.hsc"
{-# OPTIONS_NHC98 -I/usr/include #-}
# 2 "NHC/PosixTypes.hsc"
-----------------------------------------------------------------------------
-- |
-- Module      :  NHC.PosixTypes
-- Copyright   :  (c) Malcolm Wallace 2007
-- License     :  BSD-style (see the file libraries/base/LICENSE)
-- 
-- Maintainer  :  libraries@haskell.org
-- Stability   :  provisional
-- Portability :  non-portable (requires POSIX)
--
-- POSIX data types: Haskell equivalents of the types defined by the
-- @\<sys\/types.h>@ C header on a POSIX system.
--
-----------------------------------------------------------------------------

module NHC.PosixTypes (

  -- * POSIX data types
  CDev,
  CIno,
  CMode,
  COff,
  CPid,
  CSsize,

  CGid,
  CNlink,
  CUid,
  CCc,
  CSpeed,
  CTcflag,
  CRLim,

  Fd(..),

  LinkCount,
  UserID,
  GroupID,
 ) where

import Foreign
import Foreign.C
import Data.Typeable
import Data.Bits
import Unsafe.Coerce

import Control.Monad


-- Curious hack to ensure that the CTypes macros are expanded *after* hsc2hs.
#include "CTypes.h"
-- C header files that contain all the types we are looking for here.

# 55 "NHC/PosixTypes.hsc"

# 56 "NHC/PosixTypes.hsc"

# 57 "NHC/PosixTypes.hsc"

# 58 "NHC/PosixTypes.hsc"

# 59 "NHC/PosixTypes.hsc"

# 60 "NHC/PosixTypes.hsc"

# 61 "NHC/PosixTypes.hsc"

ARITHMETIC_TYPE(CDev,tyConCDev,"CDev",Int32)
# 63 "NHC/PosixTypes.hsc"
INTEGRAL_TYPE(CIno,tyConCIno,"CIno",Word32)
# 64 "NHC/PosixTypes.hsc"
INTEGRAL_TYPE(CMode,tyConCMode,"CMode",Word16)
# 65 "NHC/PosixTypes.hsc"
INTEGRAL_TYPE(COff,tyConCOff,"COff",Int64)
# 66 "NHC/PosixTypes.hsc"
INTEGRAL_TYPE(CPid,tyConCPid,"CPid",Int32)
# 67 "NHC/PosixTypes.hsc"

INTEGRAL_TYPE(CSsize,tyConCSsize,"CSsize",Int32)
# 69 "NHC/PosixTypes.hsc"

INTEGRAL_TYPE(CGid,tyConCGid,"CGid",Word32)
# 71 "NHC/PosixTypes.hsc"
INTEGRAL_TYPE(CNlink,tyConCNlink,"CNlink",Word16)
# 72 "NHC/PosixTypes.hsc"

INTEGRAL_TYPE(CUid,tyConCUid,"CUid",Word32)
# 74 "NHC/PosixTypes.hsc"
ARITHMETIC_TYPE(CCc,tyConCCc,"CCc",Word8)
# 75 "NHC/PosixTypes.hsc"
ARITHMETIC_TYPE(CSpeed,tyConCSpeed,"CSpeed",Word32)
# 76 "NHC/PosixTypes.hsc"
INTEGRAL_TYPE(CTcflag,tyConCTcflag,"CTcflag",Word32)
# 77 "NHC/PosixTypes.hsc"
INTEGRAL_TYPE(CRLim,tyConCRlim,"CRLim",Word64)
# 78 "NHC/PosixTypes.hsc"

-- ToDo: blksize_t, clockid_t, blkcnt_t, fsblkcnt_t, fsfilcnt_t, id_t, key_t
-- suseconds_t, timer_t, useconds_t

-- Make an Fd type rather than using CInt everywhere
INTEGRAL_TYPE(Fd,tyConFd,"Fd",CInt)

-- nicer names, and backwards compatibility with POSIX library:
type LinkCount      = CNlink
type UserID         = CUid
type GroupID        = CGid
