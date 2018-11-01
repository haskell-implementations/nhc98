module Prelude where

class  Show a  where 
        showsPrec :: Int -> a -> ShowS
        show      :: a -> String
        showList  :: [a] -> ShowS
        showsType :: a -> ShowS

        showsPrec _ x s = show x ++ s
        show x          = showsPrec 0 x ""

        showList [] = showString "[]"
	showList (x:xs) = 
		showChar '[' . showsPrec 0 x . showl xs
	        where showl []     = showChar ']'
		      showl (x:xs) = showString "," . showsPrec 0 x . showl xs
