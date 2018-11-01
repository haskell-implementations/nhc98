module Prelude where

showParen	:: Bool -> ShowS -> ShowS
showParen b p	= if b then showChar '(' . p . showChar ')' else p
