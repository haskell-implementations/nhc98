module Prelude where

shows 	    	:: (Show a) => a -> ShowS
shows		=  showsPrec 0
