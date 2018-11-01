module Prelude where

splitAt		         :: Int -> [a] -> ([a], [a])

--splitAt 0 xs	         = ([],xs)
--splitAt _ []	         = ([],[])
--splitAt n (x:xs) | n>0 = (x:xs',xs'') where (xs',xs'') = splitAt (n-1) xs
--splitAt _ _            = error "PreludeList.splitAt: negative argument"

splitAt n xs
    | n<=0 = ([],xs)
    | n>0  = splitAt' n xs
  where splitAt' 0 xs     = ([],xs)
        splitAt' n []     = ([],[])
        splitAt' n (x:xs) = (x:xs',xs'') where (xs',xs'') = splitAt' (n-1) xs

