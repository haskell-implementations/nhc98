module NHC.BinArray
  ( BinArray(..)
  , newBinArray
  , intoBinArray
  , fromBinArray
  , putBinArray
  , getBinArray
  ) where

import qualified NHC.Binary
import NHC.Binary
import UnboxedArray (UnboxedArray, allocUBA, wUBA, rUBA, getUBAFree, getUBAEnd)


-------------------------------------------------
data BinArray a =
    BA { baSize    :: Int
       , baHandle  :: BinHandle
       , baDefault :: Bin a
       , baArray   :: UnboxedArray
       }
data BinArrayFileHeader a =
    BAFH { bafhSize    :: Int
         , bafhDefault :: Bin a
         , bafhArray   :: Bin UnboxedArray
         } deriving Binary

-------------------------------------------------
newBinArray  :: Binary a  => Int -> a -> IO (BinArray a)
intoBinArray :: Binary a  => BinArray a -> a   -> IO Int
fromBinArray :: Binary a  => BinArray a -> Int -> IO a
putBinArray  :: Binary a  => FilePath -> BinArray a -> IO ()
getBinArray  :: Binary a  => FilePath -> IO (BinArray a)


-------------------------------------------------
newBinArray s d =
  let dummyHeader = BAFH { bafhSize=s, bafhDefault=0, bafhArray=0 } in
  openBin Memory       >>= \bh->
  put   bh dummyHeader >>
  put   bh d           >>= \def->
  tellBin bh           >>= \end->
  allocUBA s end       >>= \arr->
  return (BA {baSize=s, baHandle=bh, baDefault=def, baArray=arr})

intoBinArray ba x =
  let handle = baHandle ba
      array  = baArray ba
  in
  getUBAFree array >>= \free->
  if free > 0 then
    getUBAEnd array >>= \p->
    putAt handle p x >>
    tellBin handle >>= \end->
    wUBA array p end
  else fail "Attempt to write beyond end of BinArray"

fromBinArray ba i =
  getUBAFree (baArray ba) >>= \free->
  if i>=(baSize ba - free) then
    getAt (baHandle ba) (baDefault ba)
  else
    rUBA (baArray ba) i >>= \p->
    getAt (baHandle ba) p

putBinArray fp ba =
  copyBin (baHandle ba) (File fp WO) >>= \f->
  put f (baArray ba) >>= \p->
  let header = BAFH { bafhSize=baSize ba
                    , bafhDefault=baDefault ba
                    , bafhArray=p } in
  putAt f 0 header >>
  closeBin f

getBinArray fp =
  openBin (File fp RO) >>= \f->
  getAt f 0 >>= \header->
  getAt f (bafhArray header) >>= \uba->
  copyBin f Memory >>= \m->
  closeBin f >>
  return (BA { baSize    = bafhSize header
             , baHandle  = m
             , baDefault = bafhDefault header
             , baArray   = uba })

