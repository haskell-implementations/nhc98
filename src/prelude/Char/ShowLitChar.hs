module Char(showLitChar) where

import IsDigit
import AsciiTab
import Ord

showLitChar 		   :: Char -> ShowS
showLitChar c | c > '\DEL' && c < '\xa0' =  showChar '\\' .
                                            protectEsc isDigit (shows (ord c))
showLitChar c | c > '\xff' && fromEnum c <= 0xffff
                                         =  showChar '\\' .
                                            protectEsc isDigit (shows (ord c))
showLitChar c | fromEnum c > 0xffff      =  error ("character "++
                                                   show (fromEnum c)++
                                                   " out of range")
showLitChar '\DEL'	   =  showString "\\DEL"
showLitChar '\\'	   =  showString "\\\\"
showLitChar c | c >= ' '   =  showChar c
showLitChar '\a'	   =  showString "\\a"
showLitChar '\b'	   =  showString "\\b"
showLitChar '\f'	   =  showString "\\f"
showLitChar '\n'	   =  showString "\\n"
showLitChar '\r'	   =  showString "\\r"
showLitChar '\t'	   =  showString "\\t"
showLitChar '\v'	   =  showString "\\v"
showLitChar '\SO'	   =  protectEsc (== 'H') (showString "\\SO")
showLitChar c		   =  showString ('\\' : (snd (asciiTab!!ord c)))

protectEsc p f		   = f . cont
			     where cont s@(c:_) | p c = "\\&" ++ s
				   cont s	      = s

