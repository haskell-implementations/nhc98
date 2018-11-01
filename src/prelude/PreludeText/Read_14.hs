module Prelude(Read(..)) where

instance (Read a, Read b, Read c, Read d, Read e, Read f, Read g,
	  Read h, Read i, Read j, Read k, Read l, Read m, Read n) =>
	 Read (a,b,c,d,e,f,g,h,i,j,k,l,m,n)  where
    readsPrec p = readParen False
    	    	    (\r0 -> [((x1,x2,x3,x4,x5,x6,x7
                              ,x8,x9,x10,x11,x12,x13,x14), w) | 
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
					(",",s8) <- lex r7,
					(x8, r8) <- reads s8,
					(",",s9) <- lex r8,
					(x9, r9) <- reads s9,
					(",",s10) <- lex r9,
					(x10, r10) <- reads s10,
					(",",s11) <- lex r10,
					(x11, r11) <- reads s11,
					(",",s12) <- lex r11,
					(x12, r12) <- reads s12,
					(",",s13) <- lex r12,
					(x13, r13) <- reads s13,
					(",",s14) <- lex r13,
					(x14, r14) <- reads s14,
					(")",w)  <- lex r14 ] )

