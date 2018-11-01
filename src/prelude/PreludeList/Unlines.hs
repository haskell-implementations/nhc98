module Prelude where

unlines	   	:: [String] -> String
unlines 	= concatMap (++ "\n")
