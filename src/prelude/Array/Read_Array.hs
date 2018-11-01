module Array(Read(..)) where

import Ix
import DArray
import ArrayFun
import ArrPrec

instance  (Ix a, Read a, Read b) => Read (Array a b)  where
    readsPrec p = readParen (p > arrPrec)
           (\r -> [(array b as, u) | ("array",s) <- lex r,
                                     (b,t)       <- readsPrec (arrPrec+1) s,
                                     (as,u)      <- readsPrec (arrPrec+1) t   ])

