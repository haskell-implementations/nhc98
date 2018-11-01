module Prelude(Read(..)) where

instance (Read a) => Read (Maybe a) where
  readsPrec p =	 \ r -> readParen False   ( \r -> [(Nothing,t) | ("Nothing",t) <- lex r]) r
		           ++
		        readParen (p > 9) ( \r -> [(Just a,v) | ("Just",t) <- lex r,
							        (a,v) <- readsPrec 10 t]) r
