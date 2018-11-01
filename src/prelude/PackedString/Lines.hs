module NHC.PackedString where

import Prelude hiding(lines,null,break,tail)
import DPackedString
import Null
import Break
import Tail

lines :: PackedString -> [PackedString]
lines s =
	if null s then []
	else let (l, s') = break (== '\n') s
             in  l : if null s' then [] else lines (tail s')
