module Prelude where

infix 4 `notElem`

notElem :: (Eq a) => a -> [a] -> Bool
notElem x = all (x/=)
