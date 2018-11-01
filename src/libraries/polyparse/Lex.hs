module Lex where

import Text.ParserCombinators.Poly

-- Positional information holds line and column.
data Posn = Pn !Int !Int
instance Show Posn where
    show (Pn line col) = "at line "++show line++" column "++show col

newline (Pn line col) = Pn (line+1) col
addOne  (Pn line col) = Pn line (col+1)

lex :: [Char] -> [(Posn,String)]
lex = hlex (Pn 1 1)
  hlex p [] = []
  hlex p ('\n':s)           = hlex (newline p) s
  hlex p (c:s) | isSpace c  = hlex (addOne p) s
  hlex p ('\'':s)           = (p, '\'':ch++"'") : hlex p' s'
                            where (ch,s',p') = lexLitChar s
  hlex p ('"':s)            = (p, '"':str) : hlex p' s'
                            where (str,s',p') = lexString s
  hlex p (c:s) | isSingle c = (p, [c]) : hlex (addOne p) s
               | isSym c    = (p, sym) : hlex p' s'
                            where

