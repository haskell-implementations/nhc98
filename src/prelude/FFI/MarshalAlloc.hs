module NHC.FFI
  ( malloc        -- :: Storable a =>        IO (Ptr a)
  , mallocBytes   -- ::               Int -> IO (Ptr a)
  , alloca        -- :: Storable a =>        (Ptr a -> IO b) -> IO b
  , allocaBytes   -- ::               Int -> (Ptr a -> IO b) -> IO b
  , realloc       -- :: Storable b => Ptr a        -> IO (Ptr b)
  , reallocBytes  -- ::               Ptr a -> Int -> IO (Ptr a)
  , free          -- :: Ptr a -> IO ()
  , finalizerFree -- :: FinalizerPtr a
  ) where

import Ptr
import ForeignPtr (FinalizerPtr(..))
import Storable
import CError
import CTypes
import CTypesExtra (CSize)
import NHC.DErrNo

import IO (bracket)
import Monad (when)

-- allocate space for storable type
--
malloc :: Storable a => IO (Ptr a)
malloc  = doMalloc undefined
  where
    doMalloc       :: Storable a => a -> IO (Ptr a)
    doMalloc dummy  = mallocBytes (sizeOf dummy)

-- allocate given number of bytes of storage
--
mallocBytes      :: Int -> IO (Ptr a)
mallocBytes size  = failWhenNULL "malloc" (_malloc (fromIntegral size))

-- temporarily allocate space for a storable type
--
-- * the pointer passed as an argument to the function must *not* escape from
--   this function; in other words, in `alloca f' the allocated storage must
--   not be used after `f' returns
--
alloca :: Storable a => (Ptr a -> IO b) -> IO b
alloca  = doAlloca undefined
  where
    doAlloca       :: Storable a => a -> (Ptr a -> IO b) -> IO b
    doAlloca dummy  = allocaBytes (sizeOf dummy)

-- temporarily allocate the given number of bytes of storage
--
-- * the pointer passed as an argument to the function must *not* escape from
--   this function; in other words, in `allocaBytes n f' the allocated storage
--   must not be used after `f' returns
--
allocaBytes      :: Int -> (Ptr a -> IO b) -> IO b
allocaBytes size  = bracket (mallocBytes size) free

-- adjust a malloc'ed storage area to the size of the new type
--
realloc    :: Storable b => Ptr a -> IO (Ptr b)
realloc ptr = doRealloc undefined
  where
    doRealloc      :: Storable b => b -> IO (Ptr b)
    doRealloc dummy = 
        failWhenNULL "realloc" (_realloc ptr (fromIntegral (sizeOf dummy)))

-- adjust a malloc'ed storage area to the given size
--
reallocBytes          :: Ptr a -> Int -> IO (Ptr a)
reallocBytes ptr size  = 
  failWhenNULL "realloc" (_realloc ptr (fromIntegral size))

-- free malloc'ed storage
--
free :: Ptr a -> IO ()
free  = _free

-- foreign finalizer that performs the free operation
--
foreign import ccall "stdlib.h &free" finalizerFree :: FinalizerPtr a


---------------------------------------------------------------------------
-- utility functions, not exported

failWhenNULL :: String -> IO (Ptr a) -> IO (Ptr a)
failWhenNULL nm f = do
   addr <- f
   when (addr == nullPtr)
        (throwIOError (nm++" out of memory") Nothing Nothing (fromEnum ENOMEM))
   return addr

foreign import ccall unsafe "stdlib.h malloc"  _malloc  :: CSize -> IO (Ptr a)
foreign import ccall unsafe "stdlib.h realloc" _realloc :: Ptr a -> CSize
								 -> IO (Ptr b)
foreign import ccall unsafe "stdlib.h free"    _free    :: Ptr a -> IO ()


