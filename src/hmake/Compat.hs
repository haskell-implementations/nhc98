-----------------------------------------------------------------------------
-- |
-- Module      :  Compat
-- Copyright   :  Thomas Hallgren
-- 
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
--
--  Library with LML compatible functions.
-----------------------------------------------------------------------------

module Compat where
--import Either
--import Maybe
import ListUtil(assocDef, lconcatMap)
import QSort(sortLe)
import Char

#if defined(__HASKELL98__)
#define isAlphanum isAlphaNum
#endif

assocFail :: (Eq a) => a -> [(a, b)] -> b
assocFail x xs = assocDef xs (error "assocFail") x

getenvi s =
	case Nothing {-getEnvi s-} of
	  Nothing -> Left "not found"
	  Just x -> Right x

mix :: [[a]] -> [a] -> [a]
mix [] d = []
mix (x:xs) d = x++case xs of [] -> []; _ -> d ++ mix xs d

splitAtElem :: (Eq a) => a -> [a] -> ([a], [a])
splitAtElem v [] = ([],[])
splitAtElem v (x:xs) | v == x = ([],xs)
		     | otherwise = let (a,b) = splitAtElem v xs
				   in  (x:a, b)

takeWord :: String -> (String, String)
takeWord [] = ([],[])
takeWord (' ':cs) = takeWord cs
takeWord ('\n':cs) = takeWord cs
takeWord ('\t':cs) = takeWord cs
takeWord (c:cs) | isAlpha c = let (w,cs1) = span (\c->isAlphanum c || c=='_') cs in (c:w,cs1)
		| isDigit c = let (w,cs') = span isDigit cs in (c:w, cs')
		| otherwise = ([c], cs)

while :: (a -> Bool) -> (a -> a) -> a -> a
while f g x = if f x then while f g (g x) else x

difference :: (Eq a) => [a] -> [a] -> [a]
difference l1 l2 = filter (`notElem` l2) l1
