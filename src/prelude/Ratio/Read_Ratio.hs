module Ratio(Read(..)) where
--module Ratio where

import DRatio	(Ratio)
import Prec	(prec)
import RatioCon	((%))

instance  (Read a,Integral a) => Read (Ratio a)  where
    readsPrec p =
        readParen (p > prec)
                  (\r -> [(x % y,u) | (x,s)   <- readsPrec (prec+1) r
                                    , ("%",t) <- lex s
                                    ,  (y,u)   <- readsPrec (prec+1) t ])
