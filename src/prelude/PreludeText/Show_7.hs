module Prelude(Show(..)) where

instance  (Show a, Show b, Show c, Show d, Show e, Show f, Show g) =>
	 Show (a,b,c,d,e,f,g)  where
    showsPrec p (x,y,z,u,v,w,t) = showChar '(' . shows x . showString "," .
    	    	    	    	           shows y . showString "," .
                                           shows z . showString "," .
					   shows u . showString "," .
					   shows v . showString "," .
					   shows w . showString "," .
					   shows t . showChar ')'

    showsType  ~(x,y,z,u,v,w,t) = showChar '(' . showsType x . showChar ',' .
    	    	    	    	           showsType y . showChar ',' .
					   showsType z . showChar ',' .
					   showsType u . showChar ',' .
					   showsType v . showChar ',' .
					   showsType w . showChar ',' .
					   showsType t . showChar ')'


