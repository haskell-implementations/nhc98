module IO (hGetLine) where

import IO
import HGetChar

hGetLine              :: Handle -> IO String
hGetLine h             = do c  <- hGetChar h
                            case c of
                              '\n' -> return []
                               _   -> do cs <- hGetLine h
                                         return (c:cs)
