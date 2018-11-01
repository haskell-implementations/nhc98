module Prelude(Show(..)) where

instance  (Show a, Show b, Show c, Show d, Show e, Show f) =>
	 Show (a,b,c,d,e,f)  where
    showsPrec p (x,y,z,u,v,w) = showChar '(' . shows x . showString "," .
    	    	    	    	           shows y . showString "," .
                                           shows z . showString "," .
					   shows u . showString "," .
					   shows v . showString "," .
					   shows w . showChar ')'

    showsType  ~(x,y,z,u,v,w) = showChar '(' . showsType x . showChar ',' .
    	    	    	    	           showsType y . showChar ',' .
					   showsType z . showChar ',' .
					   showsType u . showChar ',' .
					   showsType v . showChar ',' .
					   showsType w . showChar ')'


