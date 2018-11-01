module NHC.FFI
  ( Ptr		-- abstract, instance of: Eq, Ord, Enum, Show
  , nullPtr	-- :: Ptr a
  , castPtr	-- :: Ptr a -> Ptr b
  , plusPtr	-- :: Ptr a -> Int -> Ptr b
  , alignPtr    -- :: Ptr a -> Int -> Ptr a
  , minusPtr    -- :: Ptr a -> Ptr b -> Int

  ) where

{-
import Addr

newtype Ptr a = Ptr Addr deriving (Eq,Ord,Show)

instance Enum (Ptr a) where
  toEnum a         = Ptr (toEnum a)
  fromEnum (Ptr a) = fromEnum a

nullPtr :: Ptr a
nullPtr  = Ptr nullAddr

castPtr :: Ptr a -> Ptr b
castPtr (Ptr a) = Ptr a

plusPtr :: Ptr a -> Int -> Ptr b
plusPtr (Ptr a) i = Ptr (plusAddr a i)

alignPtr :: Ptr a -> Int -> Ptr a
alignPtr (Ptr a) i = Ptr (intToAddr (let j = addrToInt a in j + (j`rem`i)))

minusPtr :: Ptr a -> Ptr b -> Int
minusPtr (Ptr a) (Ptr b) = addrToInt a - addrToInt b

-}

import Numeric (showHex)

data Ptr a;	-- primitive type known to compiler internals

foreign import cast ptrToInt :: Ptr a -> Int
foreign import cast intToPtr :: Int -> Ptr a
foreign import cast castPtr  :: Ptr a -> Ptr b

instance Eq (Ptr a) where
  x == y        =  ptrToInt x == ptrToInt y
instance Ord (Ptr a) where
  compare x y   =  compare (ptrToInt x) (ptrToInt y)
instance Show (Ptr a) where
  showsPrec p a = showString "0x" . showHex (ptrToInt a)
instance Enum (Ptr a) where
  toEnum        = intToPtr
  fromEnum      = ptrToInt


nullPtr :: Ptr a
nullPtr  = intToPtr 0

plusPtr :: Ptr a -> Int -> Ptr b
plusPtr a i = intToPtr (ptrToInt a + i)

alignPtr :: Ptr a -> Int -> Ptr a
alignPtr a i = intToPtr (let j = ptrToInt a in j + (j`rem`i))

minusPtr :: Ptr a -> Ptr b -> Int
minusPtr a b = ptrToInt a - ptrToInt b

