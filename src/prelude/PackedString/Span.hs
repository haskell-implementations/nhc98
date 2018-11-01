module NHC.PackedString where

import Prelude hiding(span,length,Ix(..),substr,nil)
import DPackedString
import Length
import Index
import Substr
import Nil

span :: (Char -> Bool) -> PackedString -> (PackedString, PackedString)
span f p = sp 0 (length p)
	where sp :: Int -> Int -> (PackedString, PackedString)
	      sp n l =
		if n < l then
		    if f (index p n) then sp (n+1) l else (substr p 0 n, substr p n l)
		else
		    (p, nil)
