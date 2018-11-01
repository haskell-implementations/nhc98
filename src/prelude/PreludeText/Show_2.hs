module Prelude(Show(..)) where

instance  (Show a, Show b) => Show (a,b)  where
    showsPrec p (x,y) = showChar '(' . shows x . showString "," .
    	    	    	    	       shows y . showChar ')'

    showsType  ~(x,y) = showChar '(' . showsType x . showChar ',' .
    	    	    	    	       showsType y . showChar ')'


