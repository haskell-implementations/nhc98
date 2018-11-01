module Prelude(Num(..)) where

import PrimFloatFromInteger

instance Num Float where
 a + b    = a + b 	-- MAGIC
 a - b    = a - b 	-- MAGIC
 a * b    = a * b 	-- MAGIC

 negate a = negate a 	-- MAGIC
 abs    a = abs    a    -- MAGIC
 signum a = signum a    -- MAGIC 

 fromInteger i = primFloatFromInteger i

