module Prelude(Show(..)) where

instance  (Show a, Show b, Show c) => Show (a,b,c)  where
    showsPrec p (x,y,z) = showChar '(' . shows x . showString "," .
    	    	    	    	         shows y . showString "," .
					 shows z . showChar ')'

    showsType  ~(x,y,z) = showChar '(' . showsType x . showChar ',' .
    	    	    	    	         showsType y . showChar ',' .
					 showsType z . showChar ')'


