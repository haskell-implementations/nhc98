module Prelude where

concat          :: [[a]] -> [a]
concat           =  foldr (++) []
