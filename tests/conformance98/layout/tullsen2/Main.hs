
f x y = case x of
  []   -> g 0
  b:bs -> g 1
  where
  g a = a + y

main = putStrLn (show (f [1,2,3] 5))
