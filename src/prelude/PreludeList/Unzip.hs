module Prelude where

unzip    :: [(a,b)] -> ([a],[b])
unzip    = foldr (\(b,c) ~(bs,cs) -> (b:bs, c:cs)) ([], [])

