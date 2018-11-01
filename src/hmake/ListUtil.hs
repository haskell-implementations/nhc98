-----------------------------------------------------------------------------
-- |
-- Module      :  ListUtils
-- Copyright   :  Thomas Hallgren
-- 
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
--
-- List utilities, some may be found in standard libraries.
-----------------------------------------------------------------------------

module ListUtil where
--import Maybe

takeUntil :: String -> String -> String
takeUntil cs [] = []
takeUntil cs (x:xs)
  | x`elem`cs = []
  | otherwise = x: takeUntil cs xs


-- | Lookup an item in an association list.  Apply a function to it
--   if it is found, otherwise return a default value.
assoc :: (Eq c) => (a -> b) -> b -> [(c, a)] -> c -> b
assoc f d [] x                       = d
assoc f d ((x',y):xys) x | x' == x   = f y
                         | otherwise = assoc f d xys x

-- | Map and concatenate results.
lconcatMap :: (a -> [b]) -> [a] -> [b]
lconcatMap f []     = []
lconcatMap f (x:xs) =
        case f x of
        [] -> lconcatMap f xs
        ys -> ys ++ lconcatMap f xs

-- | Repeatedly extract (and transform) values until a predicate hold.
--   Return the list of values.
unfoldr :: (a -> (b, a)) -> (a -> Bool) -> a -> [b]
unfoldr f p x | p x       = []
              | otherwise = y:unfoldr f p x'
                              where (y, x') = f x

-- | Map, but plumb a state through the map operation.
mapAccuml :: (a -> b -> (a, c)) -> a -> [b] -> (a, [c])
mapAccuml f s []     = (s, [])
mapAccuml f s (x:xs) = (s'', y:ys)
                       where (s',  y)  = f s x
                             (s'', ys) = mapAccuml f s' xs

-- | Union of sets as lists.
union :: (Eq a) => [a] -> [a] -> [a]
union xs ys = xs ++ [y | y<-ys, y `notElem` xs]

-- | Intersection of sets as lists.
intersection :: (Eq a) => [a] -> [a] -> [a]
intersection xs ys = [x | x<-xs, x `elem` ys]

--- | Functions derived from those above

chopList :: ([a] -> (b, [a])) -> [a] -> [b]
chopList f l = unfoldr f null l

assocDef :: (Eq a) => [(a, b)] -> b -> a -> b
--assocDef l d x = assoc id d l x
assocDef [] d _ = d
assocDef ((x,y):xys) d x' = if x == x' then y else assocDef xys d x'

mlookup :: (Eq a) => [(a, b)] -> a -> Maybe b
--mlookup l x = assoc Just Nothing l x
mlookup [] _ = Nothing
mlookup ((x,y):xys) x' = if x == x' then Just y else mlookup xys x'

{-
-- Repeat an element n times
rept :: (Integral a) => a -> b -> [b]
rept 0 _ = []
rept n x = x : rept (n-1) x
-}

-- | Take all the tails
tails :: [a] -> [[a]]
tails []         = []
tails xxs@(_:xs) = xxs : tails xs

-- | group list elements according to an equality predicate
groupEq :: (a->a->Bool) -> [a] -> [[a]]
groupEq eq xs = chopList f xs
                where f xs@(x:_) = span (eq x) xs

group :: (Eq a) => [a] -> [[a]]
group xs = groupEq (==) xs

{-
-- Read a list lazily (in contrast with reads which requires
-- to see the ']' before returning the list.
readListLazily :: (Text a) => String -> [a]
readListLazily cs = 
    case lex cs of
      [("[",cs)] -> readl' cs
      _          -> error "No leading '['"
    where readl' cs  =
                case reads cs of
                  [(x,cs)]  -> x : readl cs
                  []        -> error "No parse for list element"
                  _         -> error "Ambigous parse for list element"
          readl cs =
                case lex cs of
                  [("]",_)]  -> []
                  [(",",cs)] -> readl' cs
                  _          -> error "No ',' or ']'"
-}

nubEq :: (a->a->Bool) -> [a] -> [a]
nubEq eq l = nub' l []
        where nub' [] _     = []
              nub' (x:xs) l = if elemEq eq x l then nub' xs l else x : nub' xs (x:l)

elemEq :: (a->a->Bool) -> a -> [a] -> Bool
elemEq eq _ []     = False
elemEq eq x (y:ys) = eq x y || elemEq eq x ys

{-
{-# SPECIALIZE average :: [Float] -> Float, [Double] -> Double #-}
average :: (Fractional a) => [a] -> a
average xs = f xs 0 0
        where f []     s l = s / fromInt l
              f (x:xs) s l = f xs (s+x) (l+1)
-}

mapFst f xys = [(f x, y) | (x, y) <- xys]
mapSnd f xys = [(x, f y) | (x, y) <- xys]

pair a b = (a,b)
