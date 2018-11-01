module List where

import GroupBy

-- group splits its list argument into a list of lists of equal, adjacent
-- elements.  e.g.,
-- group "Mississippi" == ["M","i","ss","i","ss","i","pp","i"]
group                   :: (Eq a) => [a] -> [[a]]
group                   =  groupBy (==)
