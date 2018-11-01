module IO (try) where

import DIOError

-- The following implementation is direct from the Library Report.

try                   :: IO a -> IO (Either IOError a)
try f                  = catch (do r <- f
                                   return (Right r))
                               (return . Left)

