module List where

import ElemBy

notElemBy       :: (a -> a -> Bool) -> a -> [a] -> Bool
notElemBy eq x xs       =  not (elemBy eq x xs)
