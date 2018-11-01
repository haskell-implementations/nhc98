{- This is a known problem of nhc13 I think.  It shouldn't really
complain here as far as I can see, and ghc, hbc, and hugs don't. -}

main :: IO ()
main = let (a:b:_) = map read ["True","True"]
       in print (a || b)
