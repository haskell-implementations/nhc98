module List where

unzip6 :: [(a,b,c,d,e,f)] -> ([a],[b],[c],[d],[e],[f])
unzip6 = foldr (\(b,c,d,e,f,g) ~(bs,cs,ds,es,fs,gs) ->
                                (b:bs,c:cs,d:ds,e:es,f:fs,g:gs))
                                ([],[],[],[],[],[])

