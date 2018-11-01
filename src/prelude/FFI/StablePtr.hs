module NHC.FFI
  ( StablePtr		-- abstract
  , newStablePtr	-- :: a -> IO (StablePtr a)
  , deRefStablePtr	-- :: StablePtr a -> IO a
  , freeStablePtr	-- :: StablePtr a -> IO ()
  , castStablePtrToPtr	-- :: StablePtr a -> Ptr ()
  , castPtrToStablePtr	-- :: Ptr () -> StablePtr a
  ) where

import Ptr
import Storable

data StablePtr a

foreign import ccall "makeStablePtr"  newStablePtr   :: a -> IO (StablePtr a)
foreign import ccall "derefStablePtr" deRefStablePtr :: StablePtr a -> IO a
foreign import ccall "freeStablePtr"  freeStablePtr  :: StablePtr a -> IO ()

foreign import cast castStablePtrToPtr :: StablePtr a -> Ptr ()
foreign import cast castPtrToStablePtr :: Ptr () -> StablePtr a

instance Storable (StablePtr a) where
  sizeOf    = const 4
  alignment = const 4
  peek p    = do v <- peek (castPtr p); return (castPtrToStablePtr v)
  poke p x  = do poke (castPtr p) (castStablePtrToPtr x)
