module Char where

import IsUpper
import IsDigit
import IsOctDigit
import IsHexDigit
import AsciiTab

lexLitChar		:: ReadS String
lexLitChar ('\\':s)	=  map (prefix '\\') (lexEsc s)
	where
	prefix c (t,s) = (c:t, s)

	lexEsc (c:s)	 | c `elem` "abfnrtv\\\"'" = [([c],s)]
  	lexEsc ('^':c:s) | c >= '@' && c <= '_'    = [(['^',c],s)]

	-- Numeric escapes
	lexEsc ('o':s)               = [prefix 'o' (span isOctDigit s)]
	lexEsc ('x':s)               = [prefix 'x' (span isHexDigit s)]
        lexEsc s@(d:_)   | isDigit d = [span isDigit s]

	-- Very crude approximation to \XYZ.  
--	lexEsc s@(c:_)   | isUpper c = [span isCharName s]
--				where isCharName c   = isUpper c || isDigit c
	-- Much better approximation to \XYZ.  
	lexEsc s@(c:_)	 | isUpper c
			=  case [(mne,s') | mne <- "DEL": map snd asciiTab
					  , ([],s') <- [match mne s]	  ]
			   of (pr:_) -> [pr]
			      []     -> []
	lexEsc _	=  []

	match :: (Eq a) => [a] -> [a] -> ([a],[a])
	match (x:xs) (y:ys) | x == y  =  match xs ys
	match xs     ys		      =  (xs,ys)


lexLitChar (c:s)	=  [([c],s)]
lexLitChar ""		= []
