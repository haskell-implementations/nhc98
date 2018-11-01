module Prelude(Show(..)) where

instance  (Show a, Show b, Show c, Show d) => Show (a,b,c,d)  where
    showsPrec p (x,y,z,u) = showChar '(' . shows x . showString "," .
    	    	    	    	           shows y . showString "," .
                                           shows z . showString "," .
					   shows u . showChar ')'

    showsType  ~(x,y,z,u) = showChar '(' . showsType x . showChar ',' .
    	    	    	    	           showsType y . showChar ',' .
					   showsType z . showChar ',' .
					   showsType u . showChar ')'


