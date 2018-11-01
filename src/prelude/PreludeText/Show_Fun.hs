module Prelude(Show(..)) where

instance (Show a,Show b) => Show (a->b) where
  showsPrec d a = showString "<<function>>"

  showsType a = showChar '(' . showsType value  . showString " -> " .
			       showsType result . showChar ')'
	        where (value,result) = getTypes undefined
		      getTypes x = (x,a x)
