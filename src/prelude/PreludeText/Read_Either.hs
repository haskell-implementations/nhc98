module Prelude(Read(..)) where

instance (Read a, Read b) => Read (Either a b) where
  readsPrec p =	 readParen (p > 9)
                   ( \r -> [(Left a,v) | ("Left",t) <- lex r,
                                         (a,v) <- readsPrec 10 t]
                             ++
                           [(Right a,v) | ("Right",t) <- lex r,
                                          (a,v) <- readsPrec 10 t])
