module Main where

import Array

produce :: Int -> Double -> Array Int Double
produce n x = array (1,n) [(i,x) | i <- [1..n]]

scprod :: Array Int Double -> Array Int Double -> Double
scprod a b =
        case (bounds a, bounds b) of
          ((1,i), (1,j)) ->
                foldl (+) start [a!(x) * b!(x) | x <- [2..i]]
                where start = a!(1) * b!(1)

main = print (show (scprod a a))
       where a = produce 1000000 1.0

