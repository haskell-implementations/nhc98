module Prelude where

null	   	:: [a] -> Bool 
null []		= True 
null (_:_)      = False
