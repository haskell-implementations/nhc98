-- FIXED

{-
We should allow any integer literal (eg. "0", "123") to be read as a double.
Try:
nhc13test7 'Test 0'
which does not parse, against
nhc13test7 'Test 0.0'
which does.
-}

import System(getArgs)

data Plan = Plan [Int] [Phase]
          deriving (Read,Show)
data Phase = Phase (Maybe Int) [Int] Double Double Double
           deriving (Read,Show)

data Test = Test Double
          deriving (Read,Show)

main = do argv <- getArgs
          print ((read (argv!!0))::Test)
