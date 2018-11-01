module NHC.PackedString where

import Prelude hiding(takeWhile,length,Ix(..),substr)
import DPackedString
import Length
import Index
import Substr

takeWhile :: (Char -> Bool) -> PackedString -> PackedString
takeWhile f p = tw 0 (length p)
	where tw :: Int -> Int -> PackedString
	      tw n l =
		if n < l then
		    if f (index p n) then tw (n+1) l else substr p 0 n
		else
		    p
