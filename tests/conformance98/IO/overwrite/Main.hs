import IO
main = do writeFile "test" (replicate 50 'a')
          file <- openFile "test" ReadWriteMode
          hSeek file AbsoluteSeek 20
          hPutStr file "1234567890"
          hClose file
          s <- readFile "test"
          hPutStrLn stdout s
