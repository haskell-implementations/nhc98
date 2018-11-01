module List where

unzip7 :: [(a,b,c,d,e,f,g)] -> ([a],[b],[c],[d],[e],[f],[g])
unzip7 = foldr (\(b,c,d,e,f,g,h) ~(bs,cs,ds,es,fs,gs,hs) ->
                                  (b:bs,c:cs,d:ds,e:es,f:fs,g:gs,h:hs))
                                  ([],[],[],[],[],[],[])

