module Prelude where

init	   	:: [a] -> [a]
init [x]	= [] 
init (x:xs) 	= x : init xs
init []    	= error "PreludeList.init: empty list"
