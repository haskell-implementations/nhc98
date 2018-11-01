module Prelude where

import Char (isLower)
import TReadS

_readField :: (Read a) => String -> String -> (String -> [(a->b,String)]) -> ReadS b

_readField prefix name fun
    | (let h = head name in
       isLower h || h=='_') =				-- ordinary fieldname
        \ r ->  [(c a,s) | (c,r) <- fun r,
		           (tok,r) <- lex r,
                           tok == prefix,
		           (tok,r) <- lex r,
                           tok == name,
		           (tok,r) <- lex r,
                           tok == "=",
		           (a,s) <- readsPrec 0 r]
    | otherwise =					-- symbol fieldname
        \ r ->  [(c a,s) | (c,r) <- fun r,
		           (tok,r) <- lex r,
                           tok == prefix,
		           (tok,r) <- lex r,
                           tok == "(",
		           (tok,r) <- lex r,
                           tok == init (tail name),	-- trim parens off
		           (tok,r) <- lex r,
                           tok == ")",
		           (tok,r) <- lex r,
                           tok == "=",
		           (a,s) <- readsPrec 0 r]

_readFinal postfix reader =
        \ r ->  [(c,s) | (c,r) <- reader r,
                         (tok,s) <- lex r,
                         tok == postfix ]

