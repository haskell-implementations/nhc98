module Main where

import Renamebug
--newtype Set a = Set [a]

newtype Subset a = Subset (Set a)

main = print True
