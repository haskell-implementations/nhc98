\begin{code}

module ListUtils
	( prefix
	, dropSuffix
	, split
	) where


prefix :: Eq a => [a] -> [a] -> Maybe [a] -- what's left
prefix [] ls = Just ls
prefix ls [] = Nothing
prefix (x:xs) (y:ys)
  | x == y    = prefix xs ys
  | otherwise = Nothing

dropSuffix :: Eq a => [a] -> [a] -> [a]
dropSuffix s suf
  | suf `isSuffixOf` s = take (length s - length suf) s
  | otherwise          = s

split :: Eq a => a -> [a] -> [[a]]
split a [] = []
split a as = 
 case break (==a) as of
   (xs,[])   -> [xs]
   (xs,_:ys) -> xs:split a ys

isSuffixOf :: Eq a => [a] -> [a] -> Bool
isSuffixOf suf target =
  reverse suf == take (length suf) (reverse target)

\end{code}

