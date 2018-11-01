module Prelude(Show(..)) where

instance (Show a, Show b, Show c, Show d, Show e, Show f, Show g,
	  Show h) =>
	 Show (a,b,c,d,e,f,g,h)  where
    showsPrec p (x,y,z,u,v,w,t,a) = showChar '(' . shows x . showString "," .
    	    	    	    	           shows y . showString "," .
                                           shows z . showString "," .
					   shows u . showString "," .
					   shows v . showString "," .
					   shows w . showString "," .
					   shows t . showString "," .
					   shows a . showChar ')'

    showsType  ~(x,y,z,u,v,w,t,a) = showChar '(' . showsType x . showChar ',' .
    	    	    	    	           showsType y . showChar ',' .
					   showsType z . showChar ',' .
					   showsType u . showChar ',' .
					   showsType v . showChar ',' .
					   showsType w . showChar ',' .
					   showsType t . showChar ',' .
					   showsType a . showChar ')'


