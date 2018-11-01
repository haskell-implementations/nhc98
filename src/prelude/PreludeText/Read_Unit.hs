module Prelude(Read(..)) where

instance Read () where
  readsPrec p = readParen False 
		 ( \r -> [((),t)  | ("(",s) <- lex r
				  , (")",t) <- lex s] )

