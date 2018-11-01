module Prelude where

all		:: (a -> Bool) -> [a] -> Bool 
all p  		= and . map p
