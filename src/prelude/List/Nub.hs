module List where

import NubBy

-- nub (meaning "essence") remove duplicate elements from its list argument.
nub                     :: (Eq a) => [a] -> [a]
nub                     =  nubBy (==)
