module Maybe where


catMaybes              :: [Maybe a] -> [a]
catMaybes []           =  []
catMaybes (Nothing:xs) =  catMaybes xs
catMaybes (Just x:xs)  =  x : catMaybes xs
