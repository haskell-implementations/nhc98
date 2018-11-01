module Main where

import NHC.IOExtras

foreign export ccall "cversion" testIO :: Int -> IO ()
testIO a = do
  putStrLn "Here we are inside testIO"
  putStrLn ("testIO: "++show a)
  putStrLn "About to leave testIO"

foreign import ccall "cversion" importedTest :: Int -> IO ()

main = do
  putStrLn "Here is the local test"
  testIO 1
  putStrLn "Here is the exported/re-imported test"
  importedTest 2
  putStrLn "Done"
