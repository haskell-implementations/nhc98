module Prelude where

import IO (hPutStr, stdout)

putStr :: String -> IO ()
putStr = hPutStr stdout

--putStr [] = return ()
--putStr (x:xs) = do putChar x
--                   putStr xs

