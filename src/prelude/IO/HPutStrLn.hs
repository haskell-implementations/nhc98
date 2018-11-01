module IO (hPutStrLn) where

import DHandle
import HPutStr
import HPutChar

hPutStrLn      :: Handle -> String -> IO ()
hPutStrLn h s   =  do hPutStr h s
                      hPutChar h '\n'

