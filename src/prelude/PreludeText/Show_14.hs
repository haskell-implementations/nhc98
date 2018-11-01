module Prelude(Show(..)) where

instance (Show a, Show b, Show c, Show d, Show e, Show f, Show g,
	  Show h, Show i, Show j, Show k, Show l, Show m, Show n) =>
	 Show (a,b,c,d,e,f,g,h,i,j,k,l,m,n)  where
    showsPrec p (x,y,z,u,v,w,t,a,b,c,d,e,f,g) =
			 showChar '(' . shows x . showString "," .
    	    	    	    	           shows y . showString "," .
                                           shows z . showString "," .
					   shows u . showString "," .
					   shows v . showString "," .
					   shows w . showString "," .
					   shows t . showString "," .
					   shows a . showString "," .
					   shows b . showString "," .
					   shows c . showString "," .
					   shows d . showString "," .
					   shows e . showString "," .
					   shows f . showString "," .
					   shows g . showChar ')'

    showsType  ~(x,y,z,u,v,w,t,a,b,c,d,e,f,g) =
			 showChar '(' . showsType x . showChar ',' .
    	    	    	    	           showsType y . showChar ',' .
					   showsType z . showChar ',' .
					   showsType u . showChar ',' .
					   showsType v . showChar ',' .
					   showsType w . showChar ',' .
					   showsType t . showChar ',' .
					   showsType a . showChar ',' .
					   showsType b . showChar ',' .
					   showsType c . showChar ',' .
					   showsType d . showChar ',' .
					   showsType e . showChar ',' .
					   showsType f . showChar ',' .
					   showsType g . showChar ')'


