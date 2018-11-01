module Prelude where

product :: (Num a) => [a] -> a
product = foldl (*) 1
