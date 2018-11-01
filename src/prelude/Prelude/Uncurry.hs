module Prelude where

uncurry		:: (a -> b -> c) -> (a,b) -> c 
uncurry f p	= f (fst p) (snd p) 
