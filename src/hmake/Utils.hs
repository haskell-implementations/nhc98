-----------------------------------------------------------------------------
-- |
-- Module      :  Utils
-- Copyright   :  Thomas Hallgren
-- 
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
--
-- Handfuls of useful tiny utilities.
-----------------------------------------------------------------------------

module Utils where
import Compat(while)
import ListUtil(union)

afst f (x, y) = (f x, y)

--export afst, asnd, apair, aboth, pairwith, swap, anth, dropto, number,
--K, I, C, gmap,unionmap, remove, lhead, ltail, part;

-- |Apply f to the 2nd argument of the tuple
asnd f (x, y) = (x, f y)

-- |Apply f to both arguments of the tuple
aboth f (x, y) = (f x, f y)

-- |Apply f and g to x and y respectively
apair (f, g) (x, y) = (f x, g y)

pairwith f x = (x, f x)

swap (x, y) = (y, x)

oo f g x y = f (g x y)

anth _ _ [] = []
anth 1 f (x : xs) = f x : xs
anth n f (x : xs) = x : anth (n - 1) f xs

dropto p = while (\l -> l /= [] && (not . p . head) l) tail

number _ [] = []
number i (x : xs) = (i, x) : number (i + 1) xs

const' x y = x

id' x = x

cC f x y = f y x

loop f =
    let yf = f yf
    in  yf

gmap g f = foldr (\x -> \ys -> g (f x) ys) []

unionmap f = gmap union f

remove a (b : bs) | a == b = bs
remove a (b : bs) = b : remove a bs
remove a [] = []

replace p [] = [p]
replace (t, v) ((t', v') : ls) | t == t' = (t, v) : ls
replace p (l : ls) = l : replace p ls

-- |lhead xs ys = head (length xs) ys, but the rhs is stricter
lhead (x : xs) (y : ys) = y : lhead xs ys
lhead _ _ = []

-- |ltail xs ys = tail (length xs) ys, but the rhs is stricter
ltail [] ys = ys
ltail _ [] = []
ltail (x : xs) (y : ys) = ltail xs ys

-- |lsplit xs ys = (lhead xs ys,ltail xs ys), but without the space leak
lsplit [] ys = ([], ys)
lsplit _ [] = ([], [])
lsplit (x : xs) (y : ys) =
    let (yhs, yts) = lsplit xs ys
    in  (y : yhs, yts)

-- |JSP 920928
part p [] = ([], [])
part p (x : xs) =
    let (ys, zs) = part p xs
    in  if p x then (x : ys, zs) else (ys, x : zs)

issubset a b = all (cC elem b) a

