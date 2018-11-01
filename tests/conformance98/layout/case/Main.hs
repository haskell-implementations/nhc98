main = do
  x <- return Nothing
  case x of
   Nothing -> print x
   Just y  -> print (y :: Char)
