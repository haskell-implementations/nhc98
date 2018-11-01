module Main where

import NHC.Internal (unsafePerformIO)

testIO :: Int -> Int
testIO a = unsafePerformIO $
  do putStrLn "Inside testIO"
     putStrLn ("Returning "++show a)
     return a

main = do
  let val1 = testIO 1
  let val2 = testIO 2
  putStrLn ("Here is value 1: "++show val1)
  putStrLn ("Here is value 2: "++show val2)
  putStrLn ("Here is value 1: "++show val1)
  putStrLn ("Here is value 2: "++show val2)
