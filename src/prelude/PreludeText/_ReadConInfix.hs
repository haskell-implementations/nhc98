module Prelude where

import TReadS

_readConInfix :: (Read a,Read b) => Int -> Int -> Int -> Int -> (a -> b -> c) -> String -> ReadS c 

_readConInfix d p lp rp con str = 
    readParen (d > p)
       (\ r -> [(con u v,s2) | 
		(u,s0) <- readsPrec lp r,
		(tok,s1) <- lex s0, tok == str,
		(v,s2) <- readsPrec rp s1])
