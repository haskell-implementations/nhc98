module Prelude where

unwords	   	:: [String] -> String
unwords []	= ""
unwords ws	= foldr1 (\w s -> w ++ ' ':s) ws
