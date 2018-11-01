floatFromInt :: Int -> Float
floatFromInt = toEnum

main = putStrLn (show (map floatFromInt [1,3,5,7,9,11,13,19]))

