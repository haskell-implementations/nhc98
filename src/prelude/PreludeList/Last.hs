module Prelude where

last	   	:: [a] -> a
last [x]	= x
last (_:xs) 	= last xs
last []    	= error "PreludeList.last: empty list"
