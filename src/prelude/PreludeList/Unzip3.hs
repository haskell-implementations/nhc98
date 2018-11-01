module Prelude where

unzip3    :: [(a,b,c)] -> ([a],[b],[c])
unzip3    = foldr (\(b,c,d) ~(bs,cs,ds) -> (b:bs,c:cs,d:ds)) ([],[],[])
