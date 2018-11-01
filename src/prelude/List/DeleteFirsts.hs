module List where

import Difference

-- Alternate name for \\
deleteFirsts            :: (Eq a) => [a] -> [a] -> [a]
deleteFirsts            = (\\)
