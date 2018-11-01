module List where

import ListToMaybe

find                    :: (a -> Bool) -> [a] -> Maybe a
find p                  =  listToMaybe . filter p
