module Prelude where

import TReadS

_readConArg :: (Read a) => (String -> [(a->b,String)]) -> ReadS b

_readConArg fun = \ r ->  [(c a,s) | 
		           (c,r) <- fun r,
		           (a,s) <- readsPrec 10 r]
