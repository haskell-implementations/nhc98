module Prelude where

reverse		:: [a] -> [a]
reverse		= foldl (flip (:)) [] 
