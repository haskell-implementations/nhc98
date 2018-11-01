module IO (hPutStr) where

import DHandle
import HPutChar

-- This is the definitely working, but inefficient, version.
hPutStr               :: Handle -> String -> IO ()
hPutStr h []           = return ()
hPutStr h (x:xs)       = hPutChar h x >> hPutStr h xs


{-
-- This version does string-packing in chunks on the
-- C-side, improving the performance no matter how large
-- the string is.

-- We cannot yet use this when dealing with traced strings -
-- they have a different data representation that needs to be
-- coded explicitly in C.

foreign import ccall "hPutStrC" hPutStrC :: Handle -> String -> IO ()

hPutStr               :: Handle -> String -> IO ()
hPutStr h []           = return ()
hPutStr h xs@(x:_)     = hPutStrC h xs

-- Note: we rely on pattern-matching here to force the evaluation of
-- the first cons in the string - for some unknown reason this is
-- important for the runtime system.  The obvious simple alternative:
--      hPutStr = hPutStrC
-- gives an "unevaluated tag in TABLESWITCH" runtime crash.

-}

