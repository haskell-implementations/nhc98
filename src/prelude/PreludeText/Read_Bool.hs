module Prelude(Read(..)) where

instance Read Bool where
  readsPrec p = readParen False 
		 ( \r -> [(False,s) | ("False",s) <- lex r] ++
			 [(True,s)  | ("True",s) <- lex r])
