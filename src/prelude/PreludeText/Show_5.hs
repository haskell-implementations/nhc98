module Prelude(Show(..)) where

instance  (Show a, Show b, Show c, Show d, Show e) => Show (a,b,c,d,e)  where
    showsPrec p (x,y,z,u,v) = showChar '(' . shows x . showString "," .
    	    	    	    	           shows y . showString "," .
                                           shows z . showString "," .
					   shows u . showString "," .
					   shows v . showChar ')'

    showsType  ~(x,y,z,u,v) = showChar '(' . showsType x . showChar ',' .
    	    	    	    	           showsType y . showChar ',' .
					   showsType z . showChar ',' .
					   showsType u . showChar ',' .
					   showsType v . showChar ')'


