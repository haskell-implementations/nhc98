module Array where

import Ix
import DArray
import Indices
import AIndex

elems                 :: (Ix a) => Array a b -> [b]
elems a               =  [a!i | i <- indices a]
