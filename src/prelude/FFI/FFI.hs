module NHC.FFI
   -------------------------------------------------------------------
   -- {Int,Word}{8,16,32,64} are abstract and instances of Eq, Ord,
   --   Num, Bounded, Real, Integral, Ix, Enum, Read, Show
   -------------------------------------------------------------------
  ( Int8,  Int16,  Int32,  Int64
  , Word8, Word16, Word32, Word64

   -------------------------------------------------------------------
   -- `Addr' is now obsolete - use `Ptr a' instead.
   -------------------------------------------------------------------
  , Addr                  -- abstract, instance of: Eq, Ord, Enum, Show
  , nullAddr              -- :: Addr
  , plusAddr              -- :: Addr -> Int -> Addr

   -------------------------------------------------------------------
   -- `Ptr a' is a C pointer value.
   -------------------------------------------------------------------
  , Ptr			-- abstract, instance of: Eq, Ord, Enum, Show
  , nullPtr		-- :: Ptr a
  , castPtr		-- :: Ptr a -> Ptr b
  , plusPtr		-- :: Ptr a -> Int -> Ptr b
  , alignPtr		-- :: Ptr a -> Int -> Ptr a
  , minusPtr		-- :: Ptr a -> Ptr b -> Int

   -------------------------------------------------------------------
   -- `FunPtr a' is a C function pointer value.
   -------------------------------------------------------------------
  , FunPtr              -- abstract, instance of: Eq, Ord, Enum, Show
  , nullFunPtr          -- :: FunPtr a
  , castFunPtr          -- :: FunPtr a -> FunPtr b
  , freeHaskellFunPtr   -- :: FunPtr a -> IO ()
  , castFunPtrToPtr     -- :: FunPtr a -> Ptr b
  , castPtrToFunPtr     -- :: Ptr a -> FunPtr b

   -------------------------------------------------------------------
   -- The `Storable' class.
   -------------------------------------------------------------------
  , Storable
      ( sizeOf            -- :: a -> Int
      , alignment         -- :: a -> Int
      , peekElemOff       -- :: Ptr a -> Int      -> IO a
      , pokeElemOff       -- :: Ptr a -> Int -> a -> IO ()
      , peekByteOff       -- :: Ptr b -> Int      -> IO a
      , pokeByteOff       -- :: Ptr b -> Int -> a -> IO ()
      , peek              -- :: Ptr a             -> IO a
      , poke              -- :: Ptr a        -> a -> IO ()
      , destruct)         -- :: Ptr a             -> Io ()

   -------------------------------------------------------------------
   -- `ForeignObj' is now obsolete - use `ForeignPtr a' instead.
   -------------------------------------------------------------------
  , ForeignObj            -- abstract, instance of: Eq
  , newForeignObj         -- :: Addr -> IO () -> IO ForeignObj
  , makeForeignObj        -- :: Addr -> IO () -> IO ForeignObj  -- OBSOLETE
  , foreignObjToAddr      -- :: ForeignObj -> Addr
  , freeForeignObj        -- :: ForeignObj -> IO ()
  , withForeignObj        -- :: ForeignObj -> (Addr -> IO a) -> IO a
  , touchForeignObj       -- :: ForeignObj -> IO ()

   -------------------------------------------------------------------
   -- `ForeignPtr a' is a C pointer value with an associated finaliser.
   -------------------------------------------------------------------
  , ForeignPtr              -- abstract, instance of: Eq
  , FinalizerPtr            -- type synonym for FunPtr (Ptr a -> IO ())
  , newForeignPtr           -- :: FinalizerPtr a -> Ptr a -> IO (ForeignPtr a)
  , newForeignPtr_          -- ::                   Ptr a -> IO (ForeignPtr a)
  , addForeignPtrFinalizer  -- :: FinalizerPtr a -> ForeignPtr a -> IO ()
  , withForeignPtr          -- :: ForeignPtr a -> (Ptr a -> IO b) -> IO b
  , unsafeForeignPtrToPtr   -- :: ForeignPtr a -> Ptr a
  , touchForeignPtr         -- :: ForeignPtr a -> IO ()
  , castForeignPtr          -- :: ForeignPtr a -> ForeignPtr b
  , newConcForeignPtr           -- :: IO () -> Ptr a -> IO (ForeignPtr a)
  , addConcForeignPtrFinalizer  -- :: IO () -> ForeignPtr a -> IO ()

   -------------------------------------------------------------------
   -- `StablePtr a' is a Haskell value passed to the foreign land.
   -------------------------------------------------------------------
  , StablePtr             -- abstract
  , newStablePtr          -- :: a -> IO (StablePtr a)
  , deRefStablePtr        -- :: StablePtr a -> IO a
  , freeStablePtr         -- :: StablePtr a -> IO ()
  , castStablePtrToPtr    -- :: StablePtr a -> Ptr ()
  , castPtrToStablePtr    -- :: Ptr () -> StablePtr a

   -------------------------------------------------------------------
   -- `unsafePerformIO' is so commonly used, it should be exported.
   -------------------------------------------------------------------
  , unsafePerformIO	-- :: IO a -> a

   -------------------------------------------------------------------
   -- nhc98's `PackedString' is a heap-allocated packed array of characters.
   -------------------------------------------------------------------
  , PackedString	-- abstract
  , toCString		-- :: String  -> PackedString
  , fromCString		-- :: PackedString -> String

   -------------------------------------------------------------------
   -- `CString' is a C-allocated C packed array of characters.
   -------------------------------------------------------------------
  , CString             -- = Ptr CChar
  , CStringLen          -- = (CString, Int)
  , peekCString         -- :: CString    -> IO String
  , peekCStringLen      -- :: CStringLen -> IO String
  , newCString          -- :: String -> IO CString
  , newCStringLen       -- :: String -> IO CStringLen
  , withCString         -- :: String -> (CString    -> IO a) -> IO a
  , withCStringLen      -- :: String -> (CStringLen -> IO a) -> IO a
  , castCharToCChar     -- :: Char -> CChar
  , castCCharToChar     -- :: CChar -> Char

   -------------------------------------------------------------------
   -- nhc98's `CError' helps to build meaningful error messages.
   -------------------------------------------------------------------
  , getErrNo		-- :: IO Int
  , mkIOError		-- :: String -> Maybe FilePath -> Maybe Handle
			--      -> Int -> IOError
  , throwIOError	-- :: String -> Maybe FilePath -> Maybe Handle
			--      -> Int -> IO a
   -------------------------------------------------------------------
   -- Various `CTypes'.
   -------------------------------------------------------------------
  , CChar(..)	, CSChar(..)	, CUChar(..)
  , CShort(..)	, CUShort(..)
  , CInt(..)	, CUInt(..)
  , CLong(..)	, CULong(..)
  , CLLong(..)	, CULLong(..)
  , CFloat(..)	, CDouble(..)	, CLDouble(..)
   -------------------------------------------------------------------
   -- `CTypesExtra'.
   -------------------------------------------------------------------
  , CPtrdiff(..)	, CSize(..)	, CWchar(..)
  , CSigAtomic(..)	, CClock(..)	, CTime(..)
  , CFile		, CFpos		, CJmpBuf

   -------------------------------------------------------------------
   -- `MarshalAlloc' provides memory allocation routines.
   -------------------------------------------------------------------
  , malloc            -- :: Storable a =>        IO (Ptr a)
  , mallocBytes       -- ::               Int -> IO (Ptr a)
  , alloca            -- :: Storable a =>        (Ptr a -> IO b) -> IO b
  , allocaBytes       -- ::               Int -> (Ptr a -> IO b) -> IO b
  , realloc           -- :: Storable b => Ptr a -> IO (Ptr b)
  , reallocBytes      -- :: Ptr a -> Int -> IO (Ptr a)
  , free              -- :: Ptr a -> IO ()
  , finalizerFree     -- :: FinalizerPtr a

   -------------------------------------------------------------------
   -- `MarshalArray' provides bulk memory allocation/storage routines.
   -------------------------------------------------------------------
  , mallocArray     -- :: Storable a => Int -> IO (Ptr a)
  , mallocArray0    -- :: Storable a => Int -> IO (Ptr a)
  , allocaArray     -- :: Storable a => Int -> (Ptr a -> IO b) -> IO b
  , allocaArray0    -- :: Storable a => Int -> (Ptr a -> IO b) -> IO b
  , reallocArray    -- :: Storable a => Ptr a -> Int -> IO (Ptr a)
  , reallocArray0   -- :: Storable a => Ptr a -> Int -> IO (Ptr a)
  , peekArray       -- :: Storable a =>         Int -> Ptr a -> IO [a]
  , peekArray0      -- :: (Storable a, Eq a) => a   -> Ptr a -> IO [a]
  , pokeArray       -- :: Storable a =>      Ptr a -> [a] -> IO ()
  , pokeArray0      -- :: Storable a => a -> Ptr a -> [a] -> IO ()
  , newArray        -- :: Storable a =>      [a] -> IO (Ptr a)
  , newArray0       -- :: Storable a => a -> [a] -> IO (Ptr a)
  , withArray       -- :: Storable a =>      [a] -> (Ptr a -> IO b) -> IO b
  , withArray0      -- :: Storable a => a -> [a] -> (Ptr a -> IO b) -> IO b
  , destructArray   -- :: Storable a =>         Int -> Ptr a -> IO ()
  , destructArray0  -- :: (Storable a, Eq a) => a   -> Ptr a -> IO ()
  , copyArray       -- :: Storable a => Ptr a -> Ptr a -> Int -> IO ()
  , moveArray       -- :: Storable a => Ptr a -> Ptr a -> Int -> IO ()
  , lengthArray0    -- :: (Storable a, Eq a) => a -> Ptr a -> IO Int
  , advancePtr      -- :: Storable a => Ptr a -> Int -> Ptr a

   -------------------------------------------------------------------
   -- `MarshalUtils' provides utilities for basic marshalling.
   -------------------------------------------------------------------
  , with           -- :: Storable a => a -> (Ptr a -> IO b) -> IO b
  , new            -- :: Storable a => a -> IO (Ptr a)
  , fromBool       -- :: Num a => Bool -> a
  , toBool         -- :: Num a => a -> Bool
  , maybeNew       -- :: (      a -> IO (Ptr a))
                   -- -> (Maybe a -> IO (Ptr a))
  , maybeWith      -- :: (      a -> (Ptr b -> IO c) -> IO c)
                   -- -> (Maybe a -> (Ptr b -> IO c) -> IO c)
  , maybePeek      -- :: (Ptr a -> IO        b )
                   -- -> (Ptr a -> IO (Maybe b))
  , withMany       -- :: (a -> (b -> res) -> res) -> [a] -> ([b] -> res) -> res
  , copyBytes      -- :: Ptr a -> Ptr a -> Int -> IO ()
  , moveBytes      -- :: Ptr a -> Ptr a -> Int -> IO ()

   -------------------------------------------------------------------
   -- `MarshalError' provides utilities for basic error-handling.
   -------------------------------------------------------------------
  , throwIf        -- :: (a -> Bool) -> (a -> String) -> IO a       -> IO a
  , throwIf_       -- :: (a -> Bool) -> (a -> String) -> IO a       -> IO ()
  , throwIfNeg     -- :: (Ord a, Num a) => (a -> String) -> IO a    -> IO a
  , throwIfNeg_    -- :: (Ord a, Num a) => (a -> String) -> IO a    -> IO ()
  , throwIfNull    -- :: String  -> IO (Ptr a) -> IO (Ptr a)
  , void           -- IO a -> IO ()

  ) where

import Int		-- sized (signed) Int types
import Word		-- sized (unsigned) Word types

import Addr		-- obsolete, C address (pointer) values
import Ptr		-- C pointer values
import FunPtr		-- C function pointer values
import Storable		-- class defining storage sizes and routines

import ForeignObj	-- obsolete, C address (pointer) + finaliser
import ForeignPtr	-- C pointer values with finalisers

import StablePtr	-- Haskell values passed to foreign land

import MarshalAlloc	-- routines for memory allocation
import MarshalArray	-- routines for bulk memory allocation/storage
import MarshalUtils	-- routines for basic marshalling
import MarshalError	-- routines for basic error-handling

import CTypes		-- newtypes for various C basic types
import CTypesExtra	-- types for various extra C types
import CStrings		-- C pointer to array of char
import CString		-- nhc98-only
import CError		-- nhc98-only

import NHC.Internal (unsafePerformIO)
