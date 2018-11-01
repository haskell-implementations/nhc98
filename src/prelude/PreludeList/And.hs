module Prelude where

and		:: [Bool] -> Bool 
and 		= foldr (&&) True
