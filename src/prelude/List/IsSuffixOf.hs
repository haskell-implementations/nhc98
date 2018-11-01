module List where

import IsPrefixOf

isSuffixOf        :: (Eq a) => [a] -> [a] -> Bool
isSuffixOf x y     =  reverse x `isPrefixOf` reverse y

