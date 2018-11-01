module Prelude where

length		:: [a] -> Int 
{-
length (_:xs) 	= 1 + length xs 
length []    	= 0 
-}
length [] = 0				-- need seq to be efficient
length (_:xs) = ll 1 xs
  where
    ll :: Int -> [a] -> Int
    ll a [] = a
    ll a (_:xs) = let a1 = a+1 in a1 `seq` ll a1 xs
