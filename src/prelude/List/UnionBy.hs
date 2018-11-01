module List where

import DeleteFirstsBy
import NubBy

unionBy           :: (a->a->Bool) -> [a] -> [a] -> [a]
unionBy eq xs ys   =  xs ++  deleteFirstsBy eq (nubBy eq ys) xs

