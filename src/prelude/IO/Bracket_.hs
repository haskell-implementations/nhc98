module IO (bracket_) where

import Try

-- The following implementation is direct from the Library Report.

bracket_              :: IO a -> (a->IO b) -> IO c -> IO c
bracket_ before after m     = do
    x <- before
    rs <- try m
    after x
    case rs of
      Right r -> return r
      Left e  -> ioError e

