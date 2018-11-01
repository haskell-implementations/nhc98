module IO (openFile) where

import DHandle (Handle(..))
import IOMode
import NHC.FFI

{-  All this was incorrect.  It opened a small gap between the
    allocation of the ForeignObj, and its attachment into the program
    graph with addrToFO.  Hence occasionally, depending on exact
    GC time, we got seg-faults.

-- foreign import openFileC :: CString -> Int -> IO Addr
-- #if !defined(TRACING)
-- foreign import "addrToHandle" addrToHandle :: Addr -> IO Handle
-- #else
-- foreign import "addrToHandle" addrToFO :: Addr -> IO ForeignObj
-- addrToHandle a = addrToFO a >>= return . Handle
-- #endif

-- openFile              :: FilePath -> IOMode -> IO Handle
-- openFile fp iomode = do
--     a <- openFileC (toCString fp) (fromEnum iomode)
--     if a==nullAddr then do 
--         errno <- getErrNo
--         throwIOError ("openFile "++show iomode) (Just fp) Nothing errno
--       else do
--         addrToHandle a

-- Note: the primitive openFileC returns an Addr that is in fact a
-- pointer to the C structure representing a ForeignObj.  This is
-- how we can cast it to a Handle later on.  The only reason we
-- don't return the Handle directly is so that we can test if it
-- is NULL (which can only be done in the Addr type), indicating a
-- failure to open the requested file.

-- Further note: the really correct way to do things would be to
-- return the Addr of the FILE* allocated by fopen(), then to
-- turn it into a ForeignObj by adding the finaliser closeFile.
-- Unfortunately, we haven't got finalisers of type IO () working yet,
-- so the finaliser has to be attached in the C world rather than
-- the Haskell world for the moment.

-}

foreign import ccall openFileC :: PackedString -> Int -> IO ForeignObj

openFile              :: FilePath -> IOMode -> IO Handle
openFile fp iomode = do
    fo <- openFileC (toCString fp) (fromEnum iomode)
    if (foreignObjToAddr fo)==nullAddr then do 
        errno <- getErrNo
        throwIOError ("openFile "++show iomode) (Just fp) Nothing errno
      else return (Handle fo)
