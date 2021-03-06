{-# OPTIONS_GHC -XNoImplicitPrelude -XBangPatterns #-}
-----------------------------------------------------------------------------
-- |
-- Module      :  GHC.IO.Device
-- Copyright   :  (c) The University of Glasgow, 1994-2008
-- License     :  see libraries/base/LICENSE
-- 
-- Maintainer  :  libraries@haskell.org
-- Stability   :  internal
-- Portability :  non-portable
--
-- Type classes for I/O providers.
--
-----------------------------------------------------------------------------

module GHC.IO.Device (
    RawIO(..),
    IODevice(..),
    IODeviceType(..),
    SeekMode(..)
  ) where  

#ifdef __GLASGOW_HASKELL__
import GHC.Base
import GHC.Word
import GHC.Arr
import GHC.Enum
import GHC.Read
import GHC.Show
import GHC.Ptr
import Data.Maybe
import GHC.Num
import GHC.IO
import {-# SOURCE #-} GHC.IO.Exception ( unsupportedOperation )
#endif
#ifdef __NHC__
import Foreign
import Ix
import Control.Exception.Base
unsupportedOperation = userError "unsupported operation"
#endif

-- | A low-level I/O provider where the data is bytes in memory.
class RawIO a where
  -- | Read up to the specified number of bytes, returning the number
  -- of bytes actually read.  This function should only block if there
  -- is no data available.  If there is not enough data available,
  -- then the function should just return the available data. A return
  -- value of zero indicates that the end of the data stream (e.g. end
  -- of file) has been reached.
  read                :: a -> Ptr Word8 -> Int -> IO Int

  -- | Read up to the specified number of bytes, returning the number
  -- of bytes actually read, or 'Nothing' if the end of the stream has
  -- been reached.
  readNonBlocking     :: a -> Ptr Word8 -> Int -> IO (Maybe Int)

  -- | Write the specified number of bytes.
  write               :: a -> Ptr Word8 -> Int -> IO ()

  -- | Write up to the specified number of bytes without blocking.  Returns
  -- the actual number of bytes written.
  writeNonBlocking    :: a -> Ptr Word8 -> Int -> IO Int


-- | I/O operations required for implementing a 'Handle'.
class IODevice a where
  -- | @ready dev write msecs@ returns 'True' if the device has data
  -- to read (if @write@ is 'False') or space to write new data (if
  -- @write@ is 'True').  @msecs@ specifies how long to wait, in
  -- milliseconds.
  -- 
  ready :: a -> Bool -> Int -> IO Bool

  -- | closes the device.  Further operations on the device should
  -- produce exceptions.
  close :: a -> IO ()

  -- | returns 'True' if the device is a terminal or console.
  isTerminal :: a -> IO Bool
  isTerminal _ = return False

  -- | returns 'True' if the device supports 'seek' operations.
  isSeekable :: a -> IO Bool
  isSeekable _ = return False

  -- | seek to the specified position in the data.
  seek :: a -> SeekMode -> Integer -> IO ()
  seek _ _ _ = ioe_unsupportedOperation

  -- | return the current position in the data.
  tell :: a -> IO Integer
  tell _ = ioe_unsupportedOperation

  -- | return the size of the data.
  getSize :: a -> IO Integer
  getSize _ = ioe_unsupportedOperation

  -- | change the size of the data.
  setSize :: a -> Integer -> IO () 
  setSize _ _ = ioe_unsupportedOperation

  -- | for terminal devices, changes whether characters are echoed on
  -- the device.
  setEcho :: a -> Bool -> IO ()
  setEcho _ _ = ioe_unsupportedOperation

  -- | returns the current echoing status.
  getEcho :: a -> IO Bool
  getEcho _ = ioe_unsupportedOperation

  -- | some devices (e.g. terminals) support a "raw" mode where
  -- characters entered are immediately made available to the program.
  -- If available, this operations enables raw mode.
  setRaw :: a -> Bool -> IO ()
  setRaw _ _ = ioe_unsupportedOperation

  -- | returns the 'IODeviceType' corresponding to this device.
  devType :: a -> IO IODeviceType

  -- | duplicates the device, if possible.  The new device is expected
  -- to share a file pointer with the original device (like Unix @dup@).
  dup :: a -> IO a
  dup _ = ioe_unsupportedOperation

  -- | @dup2 source target@ replaces the target device with the source
  -- device.  The target device is closed first, if necessary, and then
  -- it is made into a duplicate of the first device (like Unix @dup2@).
  dup2 :: a -> a -> IO a
  dup2 _ _ = ioe_unsupportedOperation

ioe_unsupportedOperation :: IO a
ioe_unsupportedOperation = throwIO unsupportedOperation

data IODeviceType
  = Directory
  | Stream
  | RegularFile
  | RawDevice
  deriving (Eq)

-- -----------------------------------------------------------------------------
-- SeekMode type

-- | A mode that determines the effect of 'hSeek' @hdl mode i@.
data SeekMode
  = AbsoluteSeek        -- ^ the position of @hdl@ is set to @i@.
  | RelativeSeek        -- ^ the position of @hdl@ is set to offset @i@
                        -- from the current position.
  | SeekFromEnd         -- ^ the position of @hdl@ is set to offset @i@
                        -- from the end of the file.
    deriving (Eq, Ord, Ix, Enum, Read, Show)
