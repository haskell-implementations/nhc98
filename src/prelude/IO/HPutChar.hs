module IO (hPutChar) where

import NHC.Internal (IO(..))
import PreludeBuiltin (Handle)

hPutChar              :: Handle -> Char -> IO ()
hPutChar h c           = IO (\world -> cHPutChar h c)

cHPutChar :: Handle -> Char -> Either IOError ()
cHPutChar h c = _hPutChar h c	-- _hPutChar -> special bytecode

