module Prelude where

interact :: (String -> String) -> IO ()
interact f = do s <- getContents
	        putStr (f s)
