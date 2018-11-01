module NHC.FFI
    ( ForeignPtr		-- abstract, instance of: Eq,Ord,Show
    , FinalizerPtr		-- synonym: FunPtr (           Ptr a -> IO ())
    , FinalizerEnvPtr		-- synonym: FunPtr (Ptr env -> Ptr a -> IO ())
    , newForeignPtr		-- :: FinalizerPtr a ->
   				--		  Ptr a	-> IO (ForeignPtr a)
    , newForeignPtrEnv		-- :: FinalizerEnvPtr a -> Ptr env ->
   				--		  Ptr a	-> IO (ForeignPtr a)
    , newForeignPtr_		-- ::             Ptr a -> IO (ForeignPtr a)
    , addForeignPtrFinalizer	-- :: FinalizerPtr a    -> ForeignPtr a -> IO ()
    , addForeignPtrFinalizerEnv	-- :: FinalizerEnvPtr a -> Ptr env
				--			-> ForeignPtr a -> IO ()
    , withForeignPtr		-- :: ForeignPtr a -> (Ptr a -> IO b) -> IO b
    , touchForeignPtr		-- :: ForeignPtr a -> IO ()
    , unsafeForeignPtrToPtr	-- :: ForeignPtr a -> Ptr a
    , castForeignPtr		-- :: ForeignPtr a -> ForeignPtr b

    , newConcForeignPtr		-- :: IO () -> Ptr a -> IO (ForeignPtr a)
    , addConcForeignPtrFinalizer-- :: IO () -> ForeignPtr a -> IO ()
    ) 
    where

{-
-- old implementation in terms of ForeignObj
import Ptr
import ForeignObj

newtype ForeignPtr a = ForeignPtr ForeignObj

newForeignPtr :: Ptr a -> IO () -> IO (ForeignPtr a)
newForeignPtr (Ptr p) finalizer = do
  fo <- newForeignObj p finalizer
  return (ForeignPtr fo)

touchForeignPtr :: ForeignPtr a -> IO ()
touchForeignPtr (ForeignPtr fo) = touchForeignObj fo

withForeignPtr :: ForeignPtr a -> (Ptr a -> IO b) -> IO b
withForeignPtr fo io
  = do r <- io (foreignPtrToPtr fo)
       touchForeignPtr fo
       return r

foreignPtrToPtr :: ForeignPtr a -> Ptr a
foreignPtrToPtr (ForeignPtr fo) = Ptr (foreignObjToAddr fo)

castForeignPtr :: ForeignPtr a -> ForeignPtr b
castForeignPtr (ForeignPtr a) = ForeignPtr a
-}

import Ptr
import FunPtr
import NonStdUnsafeCoerce
import Numeric (showHex)
import NHC.Internal (unsafePerformIO)

data ForeignPtr a;	-- primitive type known to the compiler internals

foreign import cast foreignPtrToInt :: ForeignPtr a -> Int
instance Eq (ForeignPtr a) where
  a == b        =  (unsafeForeignPtrToPtr a) == (unsafeForeignPtrToPtr b)
instance Ord (ForeignPtr a) where
  compare a b   =  compare (unsafeForeignPtrToPtr a) (unsafeForeignPtrToPtr b)
instance Show (ForeignPtr a) where
  showsPrec p f = showsPrec p (unsafeForeignPtrToPtr f)


type FinalizerPtr a        = FunPtr            (Ptr a -> IO ())
type FinalizerEnvPtr env a = FunPtr (Ptr env -> Ptr a -> IO ())

-- Note that `newForeignPtr' is not a strictly legal FFI function.
-- It is not usually possible to return a ForeignPtr as the result of
-- a foreign import.  However, in order to implement ForeignPtrs, we
-- need one single instance of returning a ForeignPtr, and this is it.
--   *** Do not do it elsewhere!

foreign import ccall "primForeignPtrC"
  newForeignPtr :: FinalizerPtr a -> Ptr a -> IO (ForeignPtr a)

-- newForeignPtr_ creates a ForeignPtr without a finaliser.
newForeignPtr_ :: Ptr a -> IO (ForeignPtr a)
newForeignPtr_ p = newForeignPtr nullFunPtr p

-- newForeignPtrEnv creates a ForeignPtr with an environment finaliser.
newForeignPtrEnv :: FinalizerEnvPtr env a -> Ptr env
                    -> Ptr a -> IO (ForeignPtr a)
newForeignPtrEnv f p env = error "Foreign.newForeignPtrEnv not supported"

-- addForeignPtrFinalizer is not implemented in nhc98.
addForeignPtrFinalizer :: FinalizerPtr a -> ForeignPtr a -> IO ()
addForeignPtrFinalizer free p = return ()

addForeignPtrFinalizerEnv :: FinalizerEnvPtr a -> Ptr env
                             -> ForeignPtr a -> IO ()
addForeignPtrFinalizerEnv free env p = return ()


-- `withForeignPtr' is a safer way to use `unsafeForeignPtrToPtr'.
withForeignPtr :: ForeignPtr a -> (Ptr a -> IO b) -> IO b
withForeignPtr p k = k (unsafeForeignPtrToPtr p)
{- GHC implementation:
  do x <- k (foreignPtrToPtr p)
     touchForeignPtr p
     return x
-}

-- `unsafeForeignPtrToPtr' is a highly dangerous operation.  If the last
-- reference to the ForeignPtr disappears before the Ptr that has
-- been extracted from it is used, then the finaliser could run
-- rendering the Ptr invalid.
foreign import cast unsafeForeignPtrToPtr :: ForeignPtr a -> Ptr a

-- `Touching' a foreignPtr is just intended to keep it alive across
-- calls which might otherwise allow it to be GC'ed.  Only really
-- an issue in GHC - for nhc98 a null-op is sufficient.
touchForeignPtr :: ForeignPtr a -> IO ()
touchForeignPtr p = return ()

castForeignPtr :: ForeignPtr a -> ForeignPtr b
castForeignPtr a = unsafeCoerce a

{- GHC extensions
mallocForeignPtr :: Storable a => IO (ForeignPtr a)
mallocForeignPtrBytes :: Int -> IO (ForeignPtr a)
-}

----------------

-- It was once the case that the finaliser on a ForeignPtr was a
-- Haskell IO action.  These are the remnants of that implementation.
-- (It was eventually decided that, for safety, IO finalisers require
-- concurrency.)
foreign import ccall "primForeignObjC"
  primForeignPtr :: Ptr a -> b -> IO (ForeignPtr a)

data _E a = _E a        -- just a box to protect arg from evaluation

newConcForeignPtr      :: IO () -> Ptr a -> IO (ForeignPtr a)
newConcForeignPtr f p   = primForeignPtr p (_E (unsafePerformIO f))

addConcForeignPtrFinalizer        :: IO () -> ForeignPtr a -> IO ()
addConcForeignPtrFinalizer free p  = return ()

----------------
