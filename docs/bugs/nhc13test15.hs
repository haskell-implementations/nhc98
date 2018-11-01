{- This should strictly speaking cause a complaint as `head' is being
redefined after being defined in the Prelude.  Personally I prefer
nhc's behaviour, but it should be noted that this is not standard
Haskell behaviour. -}

head :: [a] -> Maybe a
head [] = Nothing
head (x:xs) = Just x

main :: IO ()
main = print (head [True])
