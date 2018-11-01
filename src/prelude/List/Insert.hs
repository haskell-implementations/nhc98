module List where

import InsertBy

insert      :: (Ord a) => a -> [a] -> [a]
insert       = insertBy compare

