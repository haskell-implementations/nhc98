module Array where

import Ix
import DArray
import Indices
import AIndex

assocs                :: (Ix a) => Array a b -> [(a,b)]
assocs a              =  [(i,a!i) | i <- indices a]
