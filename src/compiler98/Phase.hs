module Phase(beginPhase, catchError, catchError2) where

import IO
import Error
import Flags

beginPhase :: String -> IO ()
beginPhase str = return ()

catchError :: Either b a -> String -> (b->String) -> IO a
catchError comp errmsg showErrors = do
    case comp of
        Left errs -> do pF True errmsg (showErrors errs)
                        exit
        Right a   -> return a

catchError2 :: Either err res -> (err -> String) -> IO res
catchError2 (Left err)  f = do hPutStr stderr (f err)
                               exit
catchError2 (Right res) f = return res
