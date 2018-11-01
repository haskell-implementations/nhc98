import NHC.IOExtras

main = do
    a <- newIOArray (0,5) 4
    showIOArray a
    writeIOArray a 3 3
    showIOArray a
    
showIOArray a = do
    putStr "["
    mapM_ (\i-> do
                v <- readIOArray a i
                putStr (show v++",")) [0..5]
    putStrLn "]"
