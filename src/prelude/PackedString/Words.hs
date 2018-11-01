module NHC.PackedString where

import Char(isSpace)

import Prelude hiding(words,dropWhile,null,break)
import DPackedString
import DropWhile
import Null
import Break

words :: PackedString -> [PackedString]
words s =
	let s' = dropWhile isSpace s
	in  if null s' then [] else let (w, s'') = break isSpace s' in w : words s''
