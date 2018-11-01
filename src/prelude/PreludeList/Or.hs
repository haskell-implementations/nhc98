module Prelude where

or		:: [Bool] -> Bool 
or		= foldr (||) False
