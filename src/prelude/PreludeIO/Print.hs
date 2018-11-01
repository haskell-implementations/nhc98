module Prelude where

print :: Show a => a -> IO ()
print x = putStrLn (show x)
