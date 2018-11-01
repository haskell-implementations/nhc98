module Numeric where

readSigned:: (Real a) => ReadS a -> ReadS a

readSigned readPos = readParen False read'
		     where read' r  = read'' r ++
				      [(negate x,t) | ("-",s) <- lex r,
						      (x,t)   <- read'' s]
			   read'' r = [(n,s)  | (str,s) <- lex r,
		      				(n,"")  <- readPos str]
