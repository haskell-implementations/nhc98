module Main where

x a = case a of
          "aa" -> a
          "{"  -> a

main = putStrLn (x "{")
