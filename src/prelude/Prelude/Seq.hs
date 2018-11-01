module Prelude(seq) where

infixr 0 `seq`

seq         :: a -> b -> b
seq a b      = _seq a b      -- MAGIC (converted to a single bytecode)
