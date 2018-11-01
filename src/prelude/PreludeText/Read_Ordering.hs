module Prelude(Read(..)) where

instance Read Ordering where
  readsPrec p = readParen False 
		 ( \r -> [(LT,s) | ("LT",s) <- lex r] ++
			 [(EQ,s) | ("EQ",s) <- lex r] ++
			 [(GT,s) | ("GT",s) <- lex r])
