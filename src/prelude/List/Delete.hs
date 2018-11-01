module List where

import DeleteBy

-- delete x removes the first occurrence of x from its list argument.
delete                  :: (Eq a) => a -> [a] -> [a]
delete                  =  deleteBy (==)
