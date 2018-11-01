import NHC.IOExtras

main = do
    x <- newIORef undefined
    writeIORef x 3
    y <- readIORef x
    print y
