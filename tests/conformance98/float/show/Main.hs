import Numeric

main = do -- putStrLn (showFloat (5.00000047::Float) "")
  s <- getContents
  putStrLn (showFloat ((read s)::Float) "")
