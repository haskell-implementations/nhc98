module List where

unzip5 :: [(a,b,c,d,e)] -> ([a],[b],[c],[d],[e])
unzip5 = foldr (\(b,c,d,e,f) ~(bs,cs,ds,es,fs) -> (b:bs,c:cs,d:ds,e:es,f:fs))
                              ([],[],[],[],[])

