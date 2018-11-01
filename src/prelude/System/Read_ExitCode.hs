module System(Read(..)) where

import DExitCode

instance Read ExitCode where
  readsPrec p =	 \ r -> readParen False   ( \r -> [(ExitSuccess,t) | ("ExitSuccess",t) <- lex r]) r
		           ++
		        readParen (p > 9) ( \r -> [(ExitFailure a,v) | ("ExitFailure",t) <- lex r,
							        (a,v) <- readsPrec 10 t]) r
