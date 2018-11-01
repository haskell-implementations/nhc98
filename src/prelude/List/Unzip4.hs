module List where

unzip4 	:: [(a,b,c,d)] -> ([a],[b],[c],[d])
unzip4  = foldr (\(b,c,d,e) ~(bs,cs,ds,es) -> (b:bs,c:cs,d:ds,e:es))
                             ([],[],[],[])
