module Main where

import NewTypeBug

newtype U a = U (T a)
	deriving Show

x :: U Char
x = U (T 'x')

main = print x
