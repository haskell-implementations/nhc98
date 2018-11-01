module Array(Ord(..)) where

import Ix
import DArray
import Assocs
import Eq_Array

instance  (Ix a, Ord b) => Ord (Array a b)  where
    a <=  a'            =  assocs a <=  assocs a'
