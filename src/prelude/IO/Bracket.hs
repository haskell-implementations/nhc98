module IO (bracket) where

import Try

-- The following implementation is direct from the Library Report.

bracket               :: IO a -> (a->IO b) -> (a->IO c) -> IO c
bracket before after m     = do
    x <- before
    rs <- try (m x)
    after x
    case rs of
      Right r -> return r
      Left e  -> ioError e

