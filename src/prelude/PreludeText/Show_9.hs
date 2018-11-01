module Prelude(Show(..)) where

instance (Show a, Show b, Show c, Show d, Show e, Show f, Show g,
	  Show h, Show i) =>
	 Show (a,b,c,d,e,f,g,h,i)  where
    showsPrec p (x,y,z,u,v,w,t,a,b) =
			 showChar '(' . shows x . showString "," .
    	    	    	    	           shows y . showString "," .
                                           shows z . showString "," .
					   shows u . showString "," .
					   shows v . showString "," .
					   shows w . showString "," .
					   shows t . showString "," .
					   shows a . showString "," .
					   shows b . showChar ')'

    showsType  ~(x,y,z,u,v,w,t,a,b) =
			 showChar '(' . showsType x . showChar ',' .
    	    	    	    	           showsType y . showChar ',' .
					   showsType z . showChar ',' .
					   showsType u . showChar ',' .
					   showsType v . showChar ',' .
					   showsType w . showChar ',' .
					   showsType t . showChar ',' .
					   showsType a . showChar ',' .
					   showsType b . showChar ')'


