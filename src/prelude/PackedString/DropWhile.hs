module NHC.PackedString where

import Prelude hiding(dropWhile,nil,length,Ix(..),substr)
import DPackedString
import Nil
import Length
import Index
import Substr

dropWhile :: (Char -> Bool) -> PackedString -> PackedString
dropWhile f p = dw 0 (length p)
	where dw :: Int -> Int -> PackedString
	      dw n l =
		if n < l then
		    if f (index p n) then dw (n+1) l else substr p n l
		else
		    nil
