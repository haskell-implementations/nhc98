module Prelude where

readIO :: Read a => String -> IO a
readIO s = case [x | (x,t) <- reads s, ("","") <- lex t] of
	     [x] -> return x
	     []  -> fail ("Prelude.readIO: no parse")
	     _   -> fail ("Prelude.readIO: ambiguous parse")
