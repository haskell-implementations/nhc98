module Prelude(Read(..)) where

instance  (Read a, Read b, Read c, Read d, Read e, Read f, Read g) =>
	 Read (a,b,c,d,e,f,g)  where
    readsPrec p = readParen False
    	    	    	    (\r0 -> [((x1,x2,x3,x4,x5,x6,x7), w) | 
					("(",s1) <- lex r0,
					(x1, r1) <- reads s1,
					(",",s2) <- lex r1,
					(x2, r2) <- reads s2,
					(",",s3) <- lex r2,
					(x3, r3) <- reads s3,
					(",",s4) <- lex r3,
					(x4, r4) <- reads s4,
					(",",s5) <- lex r4,
					(x5, r5) <- reads s5,
					(",",s6) <- lex r5,
					(x6, r6) <- reads s6,
					(",",s7) <- lex r6,
					(x7, r7) <- reads s7,
					(")",w)  <- lex r7 ] )

