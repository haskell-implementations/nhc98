module Prelude where

cycle		:: [a] -> [a]
cycle [] 	= error "Prelude.cycle: empty list"
cycle xs 	= xs' where xs' = xs ++ xs' 
