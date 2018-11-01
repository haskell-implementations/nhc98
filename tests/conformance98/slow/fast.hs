module Main where

type Vector a = [a]

produce :: Int -> Double -> Vector Double
produce = replicate 

scprod :: Int -> Vector Double -> Vector Double -> Double
scprod n a b = foldr (+) start [a!!x * b!!x | x <- [2..n]]
               where start = a!!1 * b!!1

main = print (show (scprod n a a))
       where a = produce n 1.0
             n = 1000000

