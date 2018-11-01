module Array ( 
     module Ix  -- export all of Ix 
    ,Array
    ,array
    ,listArray
    ,(!)
    ,bounds
    ,indices
    ,elems
    ,assocs
    ,accumArray
    ,(//)
    ,accum
--  ,amap	-- now fmap (instance Functor)
    ,ixmap
    ) where

import DArray
import Ix

import AMap
import Accum
import AccumArray
import ArrayFun
import Assocs
import Bounds
import Elems
import Eq_Array
import AIndex
import Indices
import IxMap
import ListArray
import Ord_Array
import Read_Array
import Replace
import Show_Array

