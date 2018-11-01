module Numeric(readFloat) where

--import RatioCon
import ReadDec
import LexDigits
--import Fractional_Ratio
import Ratio

readFloat:: (RealFrac a) => ReadS a

readFloat r = [(fromRational ((n%1)*10^^(k-d)), t) | (n,d,s) <- readFix r,
						     (k,t)   <- readExp s]  ++
              [ (0/0, t) | ("NaN",t)      <- lex r] ++
              [ (1/0, t) | ("Infinity",t) <- lex r]
              where readFix r = [(read (ds++ds'), length ds', t)
					| (ds,s)  <- lexDigits r,
					  (ds',t) <- lexDot s ]

		    lexDot ('.':s)   = lexDigits s
		    lexDot s         = [("",s)]

		    readExp (e:s) | e `elem` "eE" = readExp' s
                    readExp s			  = [(0,s)]

                    readExp' ('-':s) = [(negate k,t) | (k,t) <- readDec s]
                    readExp' ('+':s) = readDec s
                    readExp' s	     = readDec s

